// ------------------------------------code1.
// #include <iostream>
// using namespace std;

// int main(){
//     string names []= {"abdul", "ahad" , "great" , "coding"};
//     for (int i= 0 ; i<5 ; i++){
//         cout<< names[i]<< endl;
//     } 

// }


//-----------------------------------------code2
// used exclusively to loop through elements in an array:

#include <iostream>
using namespace std;

int main(){
    // char  names = 'a';
    string names []= {"abdul", "ahad" , "great" , "coding"};
    for (string   i : names){
        cout << i;
    }
    cout<< endl<< sizeof(names);
    return 0 ; 
}

// see readme cell1.
