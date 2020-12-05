#include <iostream>

using namespace std;


int main()
{
	// integer variables
	int var1 = 9;
	int var4 = 6;


	// lvalue reference
	int& var2 = var1;

	// rvalue reference assigned to another rvalue reference made by compiler
	int&& var3 = var2 + var2;


	cout << var3 << endl;

}
