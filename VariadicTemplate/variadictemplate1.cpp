#include <iostream>

using namespace std;

// function template for integers
int func(int a, int b)
{
	return a + b;
}

// function template for doubles
double func(double a, double b)
{
	return a + b;
}

// function template for floats
string func(string a, string b)
{
	return a + b;
}


int main()
{
	// here when we pass some integer to func(), the integer version would be called
	func(1, 3);

	// double(float) version
	func(6.5, 4.2);

	// string version
	func("A", "B");
}
