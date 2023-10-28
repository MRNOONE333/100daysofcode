// #include <iostream>
// #include <string>
// using namespace std;


// // declaration.
// void myfunction();

// int main() {
//   myfunction();
// }cf

// void  myfunction(){
//     cout<< "haha";
// };


/*
function 
parameters
default parameters also.
*/


#include <iostream>
#include <string>
using namespace std;

void my_function(string name = "Abdul Ahad" , int age =20){
cout << name ; 
cout<< endl <<age;
} 

int main(){
 my_function();
 cout<< endl;
 my_function("Khabib Nurmagomedov " , 35);
 }

 