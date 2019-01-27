#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	printf("Size of 'bool'          = %2d byte\n" , sizeof(bool));
	printf("Size of 'pointer'       = %2d bytes\n", sizeof(bool*));
	printf("Size of 'char' 	        = %2d byte\n" , sizeof(char));
	printf("Size of 'wchar_t'       = %2d bytes\n", sizeof(wchar_t));
	printf("Size of 'short int'     = %2d bytes\n", sizeof(short int));
	printf("Size of 'int' 	        = %2d bytes\n", sizeof(int));
	printf("Size of 'long int'      = %2d bytes\n", sizeof(long int));
	printf("Size of 'long long int' = %2d bytes\n", sizeof(long long int));
	printf("Size of 'float'         = %2d bytes\n", sizeof(float));
	printf("Size of 'double'        = %2d bytes\n", sizeof(double));
	printf("Size of 'long double'   = %2d bytes\n", sizeof(long double));
	
	return 0;
}
