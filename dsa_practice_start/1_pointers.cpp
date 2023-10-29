// #include<iostream>
// using namespace std;

// int main(){
//     int i =10;
//     int*  p = &i;
//     cout<< p<< endl << *p;
    
// }

// output - 
// 0x61ff08
// 10

//  if i have to move p by one step


// see readme cell 3 imge-1,

#include<iostream>
using namespace std;

int main(){
   int i =10;
    int*  p = &i;
    cout<< p<< endl << *p;
    p = p+1;
    cout << endl <<"after increment : "<< p <<endl << *p;
}
