#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::mutex mtx;

void ThreadA(){
	mtx.lock();
	while(true){
		std::cout << "Thread A is running" << std::endl;
		std::this_thread::sleep_for(std::chrono::duration<int>(1));
	}
	mtx.unlock();
}

void ThreadB(){
	mtx.lock();
	std::cout << "Thread B is running" << std::endl;
	mtx.unlock();
}

int main(int argc, char** argv){
	std::thread thread1(ThreadA);
	std::thread thread2(ThreadB);
	
	thread1.join();
	thread2.join();
	
	std::cout << "Program ends" << std::endl;
	
	return 0;
}
