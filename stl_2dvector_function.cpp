#include <iostream>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

template <class T>
void print_vector(std::vector<T> input);

int main(int argc, char** argv) {
	std::vector<std::vector<int>> _2dvector(3);			// 3 array of 2D vector, cannot initialize
	_2dvector[0].resize(1,1);		// resize 1st vector and set to 1
	_2dvector[1].resize(2,2);		// resize 2nd vector and set to 2
	_2dvector[2].resize(3,3);		// resize 3rd vector and set to 3
	
	for(unsigned int i = 0; i < _2dvector.size(); i++){
		print_vector(_2dvector[i]);
	}
	
	//Output//////////////////////////////////////////
	// 1,
	// 2,2,
	// 3,3,3,
	//////////////////////////////////////////////////
	
	return 0;
}

template <class T>
void print_vector(std::vector<T> input){
	std::vector<int>::iterator it = input.begin();
	while( it != input.end() ){
		std::cout << *it << ",";
		it++;
	}	std::cout << std::endl;
}
