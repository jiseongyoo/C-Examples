#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Base
{
public:
	Base(){
		std::cout << "Base()" << std::endl;
	}
	
	~Base(){
		std::cout << "~Base()" << std::endl;
	}
};

class Derive: public Base
{
public:
	Derive(){
		std::cout << "Derive()" << std::endl;
	}
	
	~Derive(){
		std::cout << "~Derive()" << std::endl;
	}
};

void function1(){
	std::cout << "function1()" << std::endl;
	
	Base base;
	Derive derive;
	
	//Output///////////////////////////
	// function1()
	// Base()
	// Base()
	// Derive()
	// ~Derive()
	// ~Base()
	// ~Base()
	///////////////////////////////////
}

void function2(){
	std::cout << "function2()" << std::endl;
	
	Base *base = new Base;
	Derive *derive = new Derive;
	
	delete base;
	delete derive;
	
	//Output///////////////////////////
	// function2()
	// Base()
	// Base()
	// Derive()
	// ~Base()
	// ~Derive()
	// ~Base()
	///////////////////////////////////
}

int main(int argc, char** argv) {
	
	function1();	std::cout << std::endl;
	function2();	std::cout << std::endl;
	
	return 0;
}
