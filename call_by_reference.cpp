#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void call_by_reference(int*);

int main(int argc, char** argv) {
	int val = 10;
	std::cout << "Before call by reference" << std::endl << "val = " << val << std::endl;
	call_by_reference(&val);
	std::cout << "After call by reference" << std::endl << "val = " << val << std::endl;
	
	//Output////////////////////////////
	// Before call by reference
	// val = 10
	// After call by reference
	// val = 11
	////////////////////////////////////
	
	return 0;
}

void call_by_reference(int *input){
	*input = *input + 1;
}

