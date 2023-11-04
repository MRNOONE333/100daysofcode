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


   p_arr [0] =9;
   p_arr[1]= 20;

   cout<< p_arr<<endl<< *p_arr <<endl<<p_arr[1];

   for (int i =0;i<50; ++i ){
    cout<< endl<<i;
    cout << endl << p_arr[i];
    delete[]p_arr;
   }


}



