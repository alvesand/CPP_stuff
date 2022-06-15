#include <vector>
#include <iostream>
#ifndef _TESTTEMP_H_
#define _TESTTEMP_H_
using namespace std;

//Print first n observations of a MD vector
template <typename T>
void head(vector <vector<T>> data, int nrow = 6)
{
	if (nrow > data.size()) { nrow = data.size(); }
	int col = data[0].size();
	for (int i = 0; i < nrow; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cout << data[i][j] << " ";
		}
		cout << endl;
	}
}
void readMatrix(vector <vector <int>> * ptr1, int ncols, string filename);
#endif