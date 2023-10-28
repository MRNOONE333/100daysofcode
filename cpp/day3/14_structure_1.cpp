#include <iostream>
using namespace std;

int main() {
    struct 
    {
        int age ;
        string name;
        string batch;
    } student1_info ,student2_info;

    student1_info.age = 20;
    student1_info.batch= "2021-batch";
    student1_info.name= "Abdul ahad";
    
    cout << endl<< student1_info.name<<endl << student1_info.age << endl <<student1_info.batch;
    
}
