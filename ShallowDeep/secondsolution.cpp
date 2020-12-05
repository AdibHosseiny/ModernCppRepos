
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// main vector object
	vector<int> v1;
	
	// push some value on v1
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);

	// copy v1 to v2 using copy constructor
	vector<int> v2(v1);

	// see if its copied
	for (vector<int>::iterator it2 = v2.begin(); it2 != v2.end(); it2++)
	{
		cout << *it2 << endl;
	}
	
}

