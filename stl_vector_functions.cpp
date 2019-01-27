#include <iostream>
#include <vector>

/*
vector.push_back(value);
vector.pop_back();
vector.insert(location, value);
vector.resize(size);
vector.at(location);
*/

template <class T>
void print_vector(std::vector<T> input);

int main(int argc, char** argv) {
	std::vector<int> vector1;
	
	std::cout << "vector push_back" << std::endl;
	vector1.push_back(1);
	vector1.push_back(2);
	vector1.push_back(3);
	print_vector(vector1);
	
	//Output////////////////////////////////
	// vector push_back
	// 1,2,3,
	////////////////////////////////////////
	
	std::cout << "vector pop_back" << std::endl;
	vector1.pop_back();
	print_vector(vector1);
	
	//Output////////////////////////////////
	// vector pop_back
	// 1,2,
	////////////////////////////////////////
	
	std::cout << "vector insert" << std::endl;
	vector1.insert(vector1.begin()+1,3);
	print_vector(vector1);
	
	//Output////////////////////////////////
	// vector pop_back
	// 1,3,2,
	////////////////////////////////////////
	
	std::cout << "vector resize" << std::endl;
	vector1.resize(5,4);
	print_vector(vector1);
	
	//Output////////////////////////////////
	// vector resize
	// 1,3,2,4,4,
	////////////////////////////////////////
	
	std::cout << "vector at" << std::endl;
	std::cout << vector1.at(2) << std::endl;
	
	//Output////////////////////////////////
	// vector resize
	// 2
	////////////////////////////////////////
	
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
