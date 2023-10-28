#include <iostream>
using namespace std;

int main(){
    string  food = "pizza";
    string &meal = food;
    cout<< food <<endl <<meal;
    cout<<endl << &food <<endl <<&meal;

}

// output-
// pizza
// pizza
// 0x61fef4
// 0x61fedc



