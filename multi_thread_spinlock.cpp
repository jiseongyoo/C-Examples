#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

int Count = 0;
std::mutex mtx;

void Thread1();
void Thread2();

int main(int argc, char** argv){
	std::thread thread1(Thread1);
	std::thread thread2(Thread2);
	
	thread1.join();
	thread2.join();
	
	std::cout << "Program ends" << std::endl;
	
	return 0;
}

void Thread1(){
	int count = 0;
	while(true){
		mtx.lock();
		std::cout << "Thread1 / Count : " << ++count << std::endl;
		std::this_thread::sleep_for(std::chrono::duration<int>(1));
		mtx.unlock();
	}
}
void Thread2(){
	int count = 0;
	while(true){
		if(mtx.try_lock()){
			std::cout << "Thread2 / Count : " << ++count << std::endl;
			mtx.unlock();
		}
	}
}
