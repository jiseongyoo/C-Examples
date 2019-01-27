#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void print_binary(int input, unsigned int length);

int main(int argc, char** argv) {
	int val1 = 0b0101;
	int val2 = 0b1100;
	
	std::cout << "  "; 	print_binary(val1,4); std::cout << std::endl;
	std::cout << "& "; 	print_binary(val2,4); std::cout << std::endl;
	std::cout << "------" << std::endl;
	std::cout << "  ";	print_binary(val1&val2,4);
	
	//Output//////////////////////////////////////
	//   0101
	// & 1100
	// ------
	//   0100
	//////////////////////////////////////////////
	
	std::cout << std::endl << std::endl;
	
	std::cout << "  "; 	print_binary(val1,4); std::cout << std::endl;
	std::cout << "| "; 	print_binary(val2,4); std::cout << std::endl;
	std::cout << "------" << std::endl;
	std::cout << "  ";	print_binary(val1|val2,4);
	
	//Output//////////////////////////////////////
	//   0101
	// | 1100
	// ------
	//   1101
	//////////////////////////////////////////////
	
	std::cout << std::endl << std::endl;
	
	std::cout << "  "; 	print_binary(val1,4); std::cout << std::endl;
	std::cout << "^ "; 	print_binary(val2,4); std::cout << std::endl;
	std::cout << "------" << std::endl;
	std::cout << "  ";	print_binary(val1^val2,4);
	
	//Output//////////////////////////////////////
	//   0101
	// ^ 1100
	// ------
	//   1001
	//////////////////////////////////////////////
	
	std::cout << std::endl << std::endl;
	
	std::cout << " ~"; 	print_binary(val1,4); std::cout << std::endl;
	std::cout << "------" << std::endl;
	std::cout << "  ";	print_binary(~val1,4);
	
	//Output//////////////////////////////////////
	//  ~0101
	// ------
	//   1010
	//////////////////////////////////////////////
	
	std::cout << std::endl << std::endl;
	
	std::cout << "  "; 	print_binary(val2,4); std::cout << " << 1" << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << "  ";	print_binary(val2<<1,4); std::cout << std::endl << std::endl;
	std::cout << "  "; 	print_binary(val2,4); std::cout << " << 2" << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << "  ";	print_binary(val2<<2,4); std::cout << std::endl << std::endl;
	
	//Output//////////////////////////////////////
	//   1100 << 1
	// -----------
	//   1000
	//
	//   1100 << 2
	// -----------
	//   0000
	//////////////////////////////////////////////
	
	
	return 0;
}

void print_binary(int input, unsigned int length){
	int cast = 1;
	for(unsigned int i = 0; i < length; i++){
		std::cout << bool(input & (cast << length-i-1)) ? 1 : 0;
	}
}
