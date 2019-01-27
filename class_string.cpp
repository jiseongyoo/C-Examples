#include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	std::string string1 = "hello";
	std::string string2 = "world";
	
	std::cout << string1 << std::endl;
	std::cout << string2 << std::endl;
	
	string1.append(" ");
	string1.append(string2);
	
	std::cout << string1 << std::endl;
	
	char* it;
	it = &string1[0];
	while( *it != NULL ){
		std::cout << *it << std::endl;
		it++;
	}
	
	return 0;
}
