// readme cell-5 .
// syntax in pointers is is written i a particular way because then it will read the adress in thta way only , the starting or most significant bit.


#include<iostream>
using namespace  std;
 int main(){
    int i = 66;
    char c = i;

    cout << c <<endl;

    // implicit typecasting.
    // int * p = &i;
    // char *pc = p;  // erorr here

    // explicit typecasting.
    int * p = &i;
    char *pc = (char*)p;


    cout << p <<endl<< *p<<endl<< "pc : "<< pc<<endl<< *pc ;


 }
