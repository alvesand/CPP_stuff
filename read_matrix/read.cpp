#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "utils.h"
using namespace std;

int main() 
{	
	int ncols;
	string filename;
	cout << "Name of file: " << endl;
	cin >> filename;
	cout << "Number of SNPs: " << endl;
	cin >> ncols;
	vector <vector <int>> X;
	vector <vector <int>>* ptr = &X;
	readMatrix(ptr, ncols, filename);	
	cout << X.size() << " " << "animals imported" << endl;
	cout << X[0].size() << " " << "SNPs imported" << endl;	
	head(X);
	return 0;
}

