#include <iostream>
using namespace std;
int main(){

//creating variables x,y and z.
int x=10;
int y=20;
int z=30;

//getting the memory location of variable x,y and z.
cout<<"Memory Address of x="<<&x<<endl;
cout<<"Memory Address of y="<<&y<<endl;
cout<<"Memory Address of z="<<&x<<endl;

//Creating pointer to the variables
int *xptr=&x;
int *yptr=&y;
int *zptr=&z;

//Outputing the current memory locations of the variables but using pointers
cout<<"xptr held value="<<xptr<<endl;
cout<<"xptr held value="<<xptr<<endl;
cout<<"zptr held value="<<zptr<<endl;

//Using pointers to display the value of variable ( Using the *)
cout<<"Value of x using xptr="<<*xptr<<endl;
cout<<"Value of y using yptr="<<*yptr<<endl;

//Using pointers to do mathematicas
cout<<"Using Mathematics Using Poingters"<<endl;
cout<<"x+y="<<*xptr+*yptr<<endl;


return 0;
}
