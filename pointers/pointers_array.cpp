/*
The concept of arrays is related to that of pointers. 
In fact, arrays work very much like pointers to their first elements, and,
actually, an array can always be implicitly converted to the pointer of the proper type. 

For example, consider these two declarations:

1 int myarray [20];
2 int * mypointer;

The following assignment operation would be valid:
mypointer = myarray;

After that, mypointer and myarray would be equivalent and would have very similar properties. 
The main difference being that mypointer can be assigned a different address, 
whereas myarray can never be assigned anything, and will always represent the same block of 20 elements of type int. 

Therefore, the following assignment would not be valid: 
myarray = mypointer;

*/

//Example thar mixes arrays and pointers
#include <iostream>
using namespace std;

int main ()
{
  int numbers[5];
  int * p;
  p = numbers;  *p = 10;
  p++;  *p = 20;
  p = &numbers[2];  *p = 30;
  p = numbers + 3;  *p = 40;
  p = numbers;  *(p+4) = 50;
  for (int n=0; n<5; n++)
    cout << numbers[n] << ", "; //output: 10, 20, 30, 40, 50, 
  return 0;
}