#include <iostream>
#include <sstream>

using namespace std;

// Normal version
template <typename T>
void calc(const T& t)
{
    cout << t << endl;
}

// Variadic template by using expansion pack
template <typename One, typename... Rest>
void calc(const One& one, const Rest&... rest)
{
    cout << one << ", ";
    calc(rest ...); // recursive call using pack expansion syntax
}

// Base version
template <typename U>
void printspecs(const U& u)
{
    cout << "properties of the car entered : " << u << endl;
}


// a car show method
template <typename Model, typename... Props>
void printspecs(const Model& model, const Props&... prop)
{
    // car model
    cout << "properties of the car entered : " << model << endl;

    // other properties of that car
    printspecs(prop...);

}



int main()
{

    calc(10, 20); // one time recursively calls the function

    calc("firstname", 1, "number", 19.5); // if this is the main call for our program, its better to declare args as we want and not using expansion pack

// done using string stream

    int year = 2019;
    string model = "750li";

    ostringstream oss;
    oss << model << year;
    cout << oss.str();


    // done using variadic template
    printspecs(750, "New", 2019);



}

