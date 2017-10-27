/**< 
Author: Jonathan Finlay
Date: 9/10/17
Bugs: N/A
Description: used semaphores to demo rendezvous
*/

#include "Semaphore.h"
#include <iostream>
#include <thread>

void taskOne(std::shared_ptr<Semaphore> aArrived, std ::shared_ptr<Semaphore> bArrived){
  std::cout << "aArrived\n";
  aArrived->Signal();
  std::cout << "bArrived Waiting\n";
  bArrived->Wait();
  std::cout << "Completed\n";
}
void taskTwo(std::shared_ptr<Semaphore> aArrived, std::shared_ptr<Semaphore> bArrived){
  std::cout << "bArrived\n";
  bArrived->Signal();
  std::cout << "aArrvied Waiting\n";
  aArrived->Wait();
  std::cout << "Completed\n";
}

int main(void){
  std::thread threadOne, threadTwo;
  std::shared_ptr<Semaphore> aArrived( new Semaphore);
  std::shared_ptr<Semaphore> bArrived( new Semaphore);
  /**< Launch the threads  */
  threadOne=std::thread(taskTwo, aArrived, bArrived);
  threadTwo=std::thread(taskOne, aArrived, bArrived);
  std::cout << "Launched from the main\n";
  threadOne.join();
  threadTwo.join();
  return 0;
}
