// // A pointer however, is a variable that stores the memory address as its value.


// #include <iostream>
// using namespace std;

// int main(){
// string food = "Pizza";  // A food variable of type string
// string* our_pointer = &food;    // A pointer variable, with the name ptr, that stores the address of food

// // Output the value of food (Pizza)
// cout << food << "\n";

// // Output the memory address of food (0x6dfed4)
// cout << &food << "\n";

// // Output the memory address of food with the pointer (0x6dfed4)
// cout << our_pointer << "\n";
// }

//  ------------------------------------------------------------code2
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//   string name = "Ahad";
//   string* _pointer = &name;
//   cout<< *_pointer;


//   return 0;
// }



/*
modify 
the 
pointer*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string name = "Ahad";
  string* _pointer = &name;
  cout<< *_pointer;
  *_pointer = "Abdul Ahad";
  cout<< endl<< *_pointer;
  return 0;
}

