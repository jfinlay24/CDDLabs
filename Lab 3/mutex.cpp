/**< 
Author: Jonathan Finlay
Date: 9/10/17
Bugs: N/A
Description: use semaphores to demo mutual exclusion
*/

#include "Semaphore.h"
#include <iostream>
#include <thread>
int count = 0;

void taskOne(std::shared_ptr<Semaphore> mutex){
  mutex->Wait();
  count += 1;
  mutex->Signal();
  std::cout << "count\n";
}

int main(void){
  std::thread threadOne, threadTwo;
  std::shared_ptr<Semaphore> mutex( new Semaphore);
  /**< Launch the threads  */
  mutex->Signal();
  threadOne=std::thread(taskOne, mutex);
  threadTwo=std::thread(taskOne, mutex);
  std::cout << "Launched from the main\n";
  threadOne.join();
  threadTwo.join();
  return 0;
}
