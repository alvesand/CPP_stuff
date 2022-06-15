#include "utils.h"
#include <vector>
#include <fstream>
using namespace std;

//Still working on this freaking function
//Reads a Multidimensional numeric matrix from a .txt file
void readMatrix(vector <vector <int>> * ptr1, int ncols, string filename)
{
	int number;
	ifstream file(filename);
	if (!file.is_open())
	{
		cout << "Error, file not found." << endl;		
	}
	else 
	{
		vector <int> row;
		row.resize(ncols);
		int j = 0;
		while (file >> number)
		{
			row[j] = number;
			++j;
			if (j > ncols - 1) {
				j = 0;
				ptr1 -> push_back(row);				
			}
		}
	}	
	file.close();	
}
