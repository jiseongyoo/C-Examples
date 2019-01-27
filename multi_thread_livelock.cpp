#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::mutex mtx1, mtx2;
int Count = 0;

void countProc1(int no);
void countProc2(int no);

int main(int argc, char** argv){
	std::thread thread1(countProc1,1);
	std::thread thread2(countProc2,2);
	
	thread1.join();
	thread2.join();
	
	std::cout << "Program ends" << std::endl;
	
	return 0;
}

void countProc1(int no){
	while(true){
		mtx1.lock();
		if (mtx2.try_lock()){
			std::cout << "Thread1" << std::endl;
			mtx2.unlock();
			mtx1.unlock();
		}
		else{
			mtx1.unlock();
		}
		std::this_thread::sleep_for(std::chrono::duration<int>(1));
	}
}

void countProc2(int no){
	while(true){
		mtx2.lock();
		if (mtx1.try_lock()){
			std::cout << "Thread2" << std::endl;
			mtx1.unlock();
			mtx2.unlock();
		}
		else{
			mtx2.unlock();
		}
		std::this_thread::sleep_for(std::chrono::duration<int>(1));	
	}
}
