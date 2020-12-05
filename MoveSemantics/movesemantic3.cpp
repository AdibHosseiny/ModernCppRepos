#include <iostream>

using namespace std;

// a class with a property
class account
{
public:
	int siz;

	// default constructor
	account()
	{
		this->siz = 4;
	}

	account(account&& other) {
		this->siz = other.siz;

		// this way done
		other.siz = 0;
	}
};

int main()
{
	account a;

	account b(move(a)); //calling B(B&& other);
	cout << a.siz << endl; // prints 0
	cout << b.siz << endl; // prints 4

}
