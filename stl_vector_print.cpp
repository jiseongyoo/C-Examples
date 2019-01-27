#include <iostream>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	std::vector<int> vector1(5,2);			// 5 integer vector, initialize to 2
	std::vector<int> vector2(3);			// 3 integer vector, no initialization
	std::vector<int> vector3 = {0,1,2,3};	// 4 integer vector, initialize to 0,1,2,3
	std::vector<int> vector4;				// delare only header of vector
	
	std::cout << "vector1 (array style)" << std::endl;
	for(unsigned int i = 0; i < vector1.size(); i++){
		std::cout << vector1[i] << ",";
	}	std::cout << std::endl;
	
	//Output////////////////////////////////
	// vector1 (array style)
	// 2,2,2,2,2,
	////////////////////////////////////////
	
	std::cout << "vector1 (iterator style)" << std::endl;
	std::vector<int>::iterator it1 = vector1.begin();
	while( it1 != vector1.end() ){
		std::cout << *it1 << ",";
		it1++;
	}	std::cout << std::endl;
	
	//Output////////////////////////////////
	// vector1 (iterator style)
	// 2,2,2,2,2,
	////////////////////////////////////////
	
	std::cout << "vector2 (array style)" << std::endl;
	for(unsigned int i = 0; i < vector2.size(); i++){
		std::cout << vector2[i] << ",";
	}	std::cout << std::endl;
	
	//Output////////////////////////////////
	// vector2 (array style)
	// 0,0,0,
	////////////////////////////////////////
	
	std::cout << "vector2 (iterator style)" << std::endl;
	std::vector<int>::iterator it2 = vector2.begin();
	while( it2 != vector2.end() ){
		std::cout << *it2 << ",";
		it2++;
	}	std::cout << std::endl;
	
	//Output////////////////////////////////
	// vector2 (iterator style)
	// 0,0,0,
	////////////////////////////////////////
	
	std::cout << "vector3 (array style)" << std::endl;
	for(unsigned int i = 0; i < vector3.size(); i++){
		std::cout << vector3[i] << ",";
	}	std::cout << std::endl;
	
	//Output////////////////////////////////
	// vector3 (array style)
	// 0,1,2,3,
	////////////////////////////////////////
	
	std::cout << "vector3 (iterator style)" << std::endl;
	std::vector<int>::iterator it3 = vector3.begin();
	while( it3 != vector3.end() ){
		std::cout << *it3 << ",";
		it3++;
	}	std::cout << std::endl;
	
	//Output////////////////////////////////
	// vector3 (iterator style)
	// 0,1,2,3,
	////////////////////////////////////////
	
	std::cout << "vector4 (array style)" << std::endl;
	for(unsigned int i = 0; i < vector4.size(); i++){
		std::cout << vector4[i] << ",";
	}	std::cout << std::endl;
	
	//Output////////////////////////////////
	// vector4 (array style)
	// 
	////////////////////////////////////////
	
	std::cout << "vector4 (iterator style)" << std::endl;
	std::vector<int>::iterator it4 = vector4.begin();
	while( it4 != vector4.end() ){
		std::cout << *it4 << ",";
		it4++;
	}	std::cout << std::endl;
	
	//Output////////////////////////////////
	// vector4 (iterator style)
	// 
	////////////////////////////////////////
	
	
	return 0;
}
