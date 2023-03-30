#include <iostream>
using namespace std;
int main(){
    // int vec1[3] = {1,2,3};
    // int* vec2 = vec1;
    // cout << vec1 << vec2;
    string str1 = "sdfsdf";
    string str2 = move(str1);
    cout << "str1: " << str1 << endl << "str2: " << str2;
}