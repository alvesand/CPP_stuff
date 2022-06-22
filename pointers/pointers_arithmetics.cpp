/*To conduct arithmetical operations on pointers is a little different 
than to conduct them on regular integer types. 
To begin with, only addition and subtraction operations are allowed; 
the others make no sense in the world of pointers. 
But both addition and subtraction have a slightly different behavior with pointers, 
according to the size of the data type to which they point.*/

#include <iostream>

int main()
{
char *mychar;
short *myshort;
long *mylong;

/*when adding one to a pointer, the pointer is made to point to the following element of the same type,
 and, therefore, the size in bytes of the type it points to is added to the pointer
This is applicable both when adding and subtracting any number to a pointer. */

++mychar; //will add the address position by 1 byte 
++myshort;//will add the address position by 2 bytes
++mylong;//will add the address position by 4 bytes


mychar = mychar - 1 //will reduce the address position by 1 byte
myshort = myshort - 1 //will reduce the address position by 2 bytes
mylong = mylong - 1 //will reduce the address position by 4 bytes

//Using the operator as prefix or suffix in a pointer matters
int x = 10;
int * p = &x;
*p++;//increases the value of x by 1

/*Essentially, these are the four possible combinations of the dereference operator
 with both the prefix and suffix versions of the increment operator 
(the same being applicable also to the decrement operator):
*/

*p++   // same as *(p++): increment pointer, and dereference unincremented address
*++p   // same as *(++p): increment pointer, and dereference incremented address
++*p   // same as ++(*p): dereference pointer, and increment the value it points to (yields the same result as *p++?)
(*p)++ // dereference pointer, and post-increment the value it points to 

}