// See cell 6.


// #include <iostream>
// using namespace  std;

// int main(){
//     int n;

//     cin>> n;

//     int arr[n]={};


// }

// other way of dynamic allocatio ->

#include <iostream>
using namespace  std;

int main(){
    // int *p = new int ;
    // *p =54;
    // cout<< *p;

    int *p_arr = new int[50] ;// initially 50;

    int n;
    cin>> n;


   p_arr [0] =10;

   cout<< p_arr;


}



