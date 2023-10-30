#include<iostream>
using namespace std;

int main(){
    int a[] = {1,2,3}; // display adress
   char b [] ="xx";  // display content.
   cout<< a << endl<< b << endl; 

   char* c = &b[0];
   cout <<c << endl; // display content.

   int* d = &a[0];
   cout << d; // display adress

}
