/**<
Author: Jonathan Finlay
Date: 19/10/17
Bugs:N/A
Description: reusable barrier
*/

#include "Semaphore.h"
#include <iostream>
#include <thread>

int count = 0;
int n = 3;
int times = 0;

void reusableBarrier(std::shared_ptr<Semaphore> mutex, std::shared_ptr<Semaphore> turnstile1, std::shared_ptr<Semaphore> turnstile2 ){

  while(times <= 2)
    {
    mutex->Wait();
    count += 1;
    if (count == n)
      {
      turnstile2->Wait();
      std::cout << "\n";
      turnstile1->Signal();
      }
      mutex->Signal();
      
    turnstile1->Wait();
    std::cout << "\nPassed first turnstile";
    turnstile1->Signal();

    mutex->Wait();
    count -= 1;
    if (count == 0)
      {
      turnstile1->Wait();
      turnstile2->Signal();
      times ++;
      }
    mutex->Signal();
    turnstile2->Wait();
    std::cout << "\nPassed second turnstile";
    turnstile2->Signal();
    }
}

int main(void){
  std::thread threadOne, threadTwo, threadThree;
  std::shared_ptr<Semaphore> mutex( new Semaphore(1));
  std::shared_ptr<Semaphore> turnstile1( new Semaphore(0));
  std::shared_ptr<Semaphore> turnstile2( new Semaphore(1));
  
  /**< Launch the threads  */
  threadOne=std::thread(reusableBarrier, mutex, turnstile1, turnstile2);
  threadTwo=std::thread(reusableBarrier, mutex, turnstile1, turnstile2);
  threadThree=std::thread(reusableBarrier, mutex, turnstile1, turnstile2);
  
  std::cout << "Launched from the main\n";
  
  threadOne.join();
  threadTwo.join();
  threadThree.join();
  
  return 0;
}
