#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

int Count = 0;
std::mutex mtx;

void countProc(int no);

int main(int argc, char** argv){
	std::thread thread1(countProc,1);
	std::thread thread2(countProc,2);
	
	thread1.join();
	thread2.join();
	
	std::cout << "Count Result : " << Count << std::endl;
	
	return 0;
}

void countProc(int no){
	int count;
	
	for (int i = 0; i < 10; i++){
		mtx.lock();		// Start critical section
		count = Count;
		std::cout << "Thread# : " << no << " / Count : "<< ++count << std::endl;
		std::this_thread::sleep_for(std::chrono::duration<int>(1));
		Count = count;
		mtx.unlock();	// End critical section
		std::this_thread::sleep_for(std::chrono::duration<int>(1));
	}
}
