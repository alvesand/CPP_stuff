/*This code exaplifies how to declare and use pointers
 * Pointers store the phisical address of a variable in the CPU memory
*/
#include <iostream>
using namespace std;

int main() 
{
  int var1, var2;//Declare variables  
  int *mypointer;//declare a pointer specific to integers
  mypointer = &var1;//store the address of var1 to the pointer
  *mypointer = 10;//insert the value 10 in the stored address by the pointer
  mypointer = &var2;//change the address hold by the pointer
  *mypointer = 20;//insert the value 20 at the new address
  int myvar;  
  int *p1 = nullptr; //equivalent to int *p1 = 0;
  cout << "the value for var1 is: " << var1 << "\n";
  cout << "the value for var 2 is: " << var2 << "\n";
  //void pointer: a special pointer type that can hold the address of any object
  double obj = 3.14, 
  void *pv = &obj; // obj can be an object of any type
  /*
  There are only a limited number of things we can do with a void* pointer: We can
	compare it to another pointer, we can pass it to or return it from a function, and
	we can assign it to another void* pointer. We cannot use a void* to operate on
	the object it addresses—we don’t know that object’s type, and the type determines
	what operations we can perform on the object.
  */

  int *myptr = &myvar; //Pointers can be initialized to point to specific locations at the very moment they are defined:
  /*
  Pointers can be initialized either to the address of a variable (such as in the case above)
  ,or to the value of another pointer (or array):
  */
  int myvar;
  int *foo = &myvar;
  int *bar = foo;

  //Pointers to Pointers
  /*
	We indicate each pointer level by its own *. That is, we write ** for a pointer
	to a pointer, *** for a pointer to a pointer to a pointer, and so on:  
  */

  int ival = 1024;
  int *pi = &ival; // pi points to an int
  int **ppi = &pi; // ppi points to a pointer to an int

  cout << "The value of pi is:" << " " << *pi << endl; //print 1024
  //To access the underlying object, we must dereference the original pointer twice:
  cout << "The value of ppi is:" << " " << **ppi << endl; //print 1024

  /*Reference to Pointers
	because a pointer is an object, we can define a reference to a pointer:
  */
  int i = 42;
  int *p; // p is a pointer to int
  int *& r = p; // r is a reference to the pointer p
  r = &i; // r refers to a pointer; assigning &i to r makes p point to i
  *r = 0; // dereferencing r yields i, the object to which p points; changes i to 0

  /*POINTERS AND CONST
	Pointers can be used to access a variable by its address,
	and this access may include modifying the value pointed.
	But it is also possible to declare pointers that can access the pointed value to read it,
	but not to modify it. For this, it is enough with qualifying the type pointed to by the pointer as const. For example:
	*/
  int x;
  int y = 10;
  const int *p = &y;
  x = *p; // ok: reading p
  *p = x; // error: modifying p, which is const-qualified


  return 0;  
}
