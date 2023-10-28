// By giving a name to the structure, you can treat it as a data type.

#include <iostream>
using namespace std;

int main() {
    struct students
    {
       int age;
       string name;
       string batch;
    };
    
    students student1 ;
    student1.age = 20;
    student1.name ="Abdul ahad";
    student1.batch = "2021-batch";

    students student2 ;
    student2.age = 23;
    student2.name ="mr bore";
    student2.batch = "2021-batch";
cout << endl<< student1.name<<endl << student1.age << endl <<student1.batch;
cout<<endl<<"------------------";
cout << endl<< student2.name<<endl << student2.age << endl <<student2.batch;
}
