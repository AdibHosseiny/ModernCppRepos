#include <iostream>

using namespace std;

/// <summary>
/// reference passing function
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
void func(int& a, int& b)
{
    // do some modification on variables
    a += 1;
    b += 1;
}

int main()
{
    /// <summary>
///  first argument for passing
/// </summary>
/// <returns></returns>
    int var1 = 4;

    /// <summary>
    /// second argument for passing
    /// </summary>
    /// <returns></returns>
    int var2 = 5;

    /// <summary>
    /// calling the function
    /// </summary>
    /// <returns></returns>
    func(var1, var2);

    // results of modifications
    cout << "Here are variables passed by value to function : " << var1 << " , " << var2 << endl;

}
