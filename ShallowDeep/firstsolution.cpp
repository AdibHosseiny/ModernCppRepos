
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1;

	// pushback some value on v1
	v1.push_back(43);
	v1.push_back(32);
	v1.push_back(21);

	// the object we want to be made from v1
	vector<int> v2;

	// go through each and every element of v1 and push it on v2
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		v2.push_back(*it);
	}

	// v2 is now copied from v1
	for (vector<int>::iterator it2 = v2.begin(); it2 != v2.end(); it2++)
	{
		cout << *it2 << endl;
	}

}
