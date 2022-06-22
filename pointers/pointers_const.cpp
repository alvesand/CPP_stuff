/*POINTERS AND CONST
Pointers can be used to access a variable by its address, 
and this access may include modifying the value pointed. 
But it is also possible to declare pointers that can access the pointed value to read it, 
but not to modify it. For this, it is enough with qualifying the type pointed to by the pointer as const. For example:

int x;
int y = 10;
const int * p = &y;
x = *p; // ok: reading p
*p = x; // error: modifying p, which is const-qualified 

*/



