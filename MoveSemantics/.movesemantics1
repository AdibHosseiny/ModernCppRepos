#include <iostream>
#include <vector>

using namespace std;

// Note that here we pass args by pointer
int& func(int* a, int* b)
{
    // modify those 2 values that this function is referring
    *a = 76;
    *b = 49;
    
    // returning the content of one of those referrals
    return *a;
}

int main()
{
    // declaring 2 values that will modify in our application
    auto var1 = 4;
    auto var2 = 3;

    // calling a function that will return a lvalue reference
    auto res = func(&var1, &var2);

    // now if want to modify var1
    var1 = 45;
    
    // here if want to access the result of what func() has returned, we achieve the last time content when func() is executed
    cout << "The content of result is " << res << endl;
    
    // checking values of var1 and var2
    cout << "Now var1 and var2 are changed :" << endl << "var1 equals = " << var1 << " and var2 equals = " << var2 << endl;
    
}

