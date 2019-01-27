#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Base
{
public:
	Base(){};
	~Base(){};
	
	void func1(void){
		std::cout << "Base: void func1(void)" << std::endl;
	}
};

class Derive1: virtual public Base
{
public:
	Derive1(){};
	~Derive1(){};
	
	void func1(void){
		std::cout << "Derive1: void func1(void)" << std::endl;
	}
};

class Derive2: virtual public Base
{
public:
	Derive2(){};
	~Derive2(){};
	
	void func1(void){
		std::cout << "Derive2: void func1(void)" << std::endl;
	}
};

class TopClass: public Derive1, public Derive2
{
public:
	TopClass(){};
	~TopClass(){};
	
	void callfunc1(){
		Base::func1();
		Derive1::func1();
		Derive2::func1();
	}
};

void function1(){
	std::cout << "function1()" << std::endl;
	
	TopClass topclass;
	topclass.callfunc1();
	
	//Output///////////////////////////
	// function1()
	// Base: void func1(void)
	// Derive1: void func1(void)
	// Derive2: void func1(void)
	///////////////////////////////////
}

int main(int argc, char** argv) {
	
	function1();	std::cout << std::endl;
	
	return 0;
}
