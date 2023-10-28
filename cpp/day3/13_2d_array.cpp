#include <iostream>
using namespace std;

int main() {
    char arr_2d [2][3] = {
        {'a', 'b', 'c'},
        {'e', 'f', 'g'}
    };
    cout<< arr_2d[1][2];
    for (int i = 0 ; i<2 ;i++){
        for (int j = 0 ; j<3 ;j++){
            // cout <<"2d array is : "; 
            cout<< endl<< arr_2d[i][j];
        }
    }

}
