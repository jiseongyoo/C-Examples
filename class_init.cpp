#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Base
{
private:
	int var1, var2, var3;
public:
	Base(){
		var1 = 1;	var2 = 2;	var3 = 3;
	}
	Base(int a): var1(a){
		var2 = 2;
		var3 = 3;
	}
	Base(int a, int b): var1(a), var2(b){
		var3 = 3;
	}
	Base(int a, int b, int c): var1(a), var2(b), var3(c){}
};

int main(int argc, char** argv) {
	
	return 0;
}
