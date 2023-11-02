// see cell7 of notes.
#include <iostream>
using namespace  std;


int main(){
    int *p = new int;
    cout<<*p;
    delete p;

    int *p = new int [5];
    cout<<*p;
    delete []p;
    cout<<*p;

    // address isn't deleted in any the value is deleted .


}