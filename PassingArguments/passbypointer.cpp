#include <iostream>

using namespace std;

/// <summary>
/// passing args by pointer
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
void func(int* a, int* b)
{
	*a = 3;
	*b = 3;
}

int main()
{
	/// <summary>
	/// first reference variable
	/// </summary>
	/// <returns></returns>
	int ref1 = 15;

	/// <summary>
	/// second reference variable
	/// </summary>
	/// <returns></returns>
	int ref2 = 5;

	/// <summary>
	/// first argument
	/// </summary>
	/// <returns></returns>
	int& var1 = ref1;

	/// <summary>
	/// first argument
	/// </summary>
	/// <returns></returns>
	int& var2 = ref2;

	/// <summary>
	/// this is how we call a function that is passed by pointer
	/// </summary>
	/// <returns></returns>
	func(&var1, &var2);

	// results
	cout << "Here are variables passed by value to function : " << var1 << " , " << var2 << endl;

}
