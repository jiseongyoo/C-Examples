#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int* val1 = new int[5]();			// 5 array of int, initialize to 0
	int* val2 = new int[5]{0,1,2,3,4};	// 5 array of int, initialize to 0,1,2,3,4, since C++11
	int* val3 = new int(5);				// 1 array of int, initialize to 5
	int* val4 = new int[5];				// 5 array of int, no initialization
	
	std::cout << "new int[5]()" << std::endl;
	for(int i = 0; i < 5; i++){
		std::cout << val1[i] << ",";
	}	std::cout << std::endl;
	//Output//////////////////////////////
	// new int[5]()
	// 0,0,0,0,0,
	//////////////////////////////////////
	
	std::cout << "new int[5]{0,1,2,3,4}" << std::endl;
	for(int i = 0; i < 5; i++){
		std::cout << val2[i] << ",";
	}	std::cout << std::endl;
	//Output//////////////////////////////
	// new int[5]{0,1,2,3,4}
	// 0,1,2,3,4,
	//////////////////////////////////////
	
	std::cout << "new int(5)" << std::endl;
	for(int i = 0; i < 5; i++){
		std::cout << val3[i] << ",";
	}	std::cout << std::endl;
	//Output//////////////////////////////
	// new int(5)
	// 5,0,1966416,0,0,
	//////////////////////////////////////
	
	std::cout << "new int[5]" << std::endl;
	for(int i = 0; i < 5; i++){
		std::cout << val4[i] << ",";
	}	std::cout << std::endl;
	//Output//////////////////////////////
	// new int[5]
	// 9240912,0,9240912,0,0,
	//////////////////////////////////////
	
	delete [] val1;		// deallocate array
	delete [] val2;		// deallocate array
	delete    val3;		// deallocate single
	delete [] val4;		// deallocate array
	
	return 0;
}
