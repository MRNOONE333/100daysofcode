// i want all of the to  be in  heap.
// see readme cell - 8.
// for array i will have pointers (int*) of all array., lets store them in a sepearte array first.
// for that we use double pointer 



// for costum inputs.
#include<iostream>
using namespace std ;

int main(){
    int m,n;
    cout<<endl<<"m,n : ";
    cin>> m>>n;

     int ** p = new int*[10];
     for (int i=0; i<m ; i++){
        p[i]= new int [n];
        for (int j=0; j<10; j++){ 
            cout<<endl<<"give arr: ";
            cin >> p[i][j];
            cout<< p[i][j];
        }
     }

     for(int i = 0; i<m ; i++){
        delete p[i];
     }
     delete [] p ;  
} 