#include <iostream>
#include <list>

int main(int argc, char** argv) {
	std::list<int> list1(5,0);			// 5 integer list, initialize to 0
	std::list<int> list2 = {1,2,3};		// 3 integer list, initialize to 1,2,3, since C++11
	
	std::cout << "list1(5,0)" << std::endl;
	std::list<int>::iterator it1 = list1.begin();
	while ( it1 != list1.end() ){
		std::cout << *it1 << ",";
		it1++;
	}	std::cout << std::endl;
	
	//Output///////////////////////////////////
	// list1 (5,0)
	// 0,0,0,0,0,
	///////////////////////////////////////////
	
	std::cout << "list2={1,2,3}" << std::endl;
	std::list<int>::iterator it2 = list2.begin();
	while ( it2 != list2.end() ){
		std::cout << *it2 << ",";
		it2++;
	}	std::cout << std::endl;
	
	//Output///////////////////////////////////
	// 0,0,0,0,0,
	///////////////////////////////////////////
	
	return 0;
}
