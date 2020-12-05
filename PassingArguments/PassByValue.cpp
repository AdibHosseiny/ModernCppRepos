#include <iostream>

using namespace std;

/// a function that will do some modification
void func(int a, int b, int c)
{

    // modifying arguments that will take no effect
    a = 1;
    b = 2;
    c = 3;
}

int main()
{
    ///  first argument for passing
    int var1 = 4;

    /// second argument for passing
    int var2 = 5;

    /// third argument for passing
    int var3 = 6;

    /// calling the function
    func(var1, var2, var3);

    cout << "Here are variables passed by value to function : " << var1 << " , " << var2 << " , " << var3 << endl;

}
