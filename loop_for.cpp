#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	std::string name = "Kaiser King";
	
	std::cout << "for( initial; condition; increment){}" << std::endl;
	for(int i = 0; i < name.length(); i++){
		static char *pString = &name[0];
		std::cout << *pString;
		pString++;
	} std::cout << std::endl << std::endl;
	
	//Output////////////////////////////////
	// for( initial; condition; increment){}
	// Kaiser King
	////////////////////////////////////////
	
	std::cout << "for(variable : array){}" << std::endl;
	for(auto i : name){
		std::cout << i;
	} std::cout << std::endl;
	
	//Output////////////////////////////////
	// for(variable : array){}
	// Kaiser King
	////////////////////////////////////////
	
	return 0;
}
