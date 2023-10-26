
// ------------------------------------code1.
// #include <iostream>
// using namespace std;

// int main(){
//     int x = 5 , y=7;
//     if (x<y ){
//         cout<< "x is less";
//     } 
// }

// ----------------------------------------------------code2

#include <iostream>
#include <string> 

using namespace std;

int main(){
    int x;
    cin >> x;
    if (x<12){
        cout<< "good morning";
    }
    else if(12<=x<16){
        "good afternoon";
    }
    else {
        "Good evening";
    }
}