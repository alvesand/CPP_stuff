#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector <int> vec = {1,2,3,4};
	vector<int>* p{nullptr};
	p = &vec;
	//p->push_back(15);
	

	for (auto i : *p)
	{
		cout << (*p)[i-1] << endl;
	
	}

	//cout << p->at(0) << endl;
	cout << sizeof(vec) << endl;
	cout << sizeof(p) << endl;
	return 0;
} 

