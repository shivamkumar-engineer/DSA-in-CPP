#include<iostream>
using namespace std;

int main(){
    // int x = 10;
    // int y = 20;
    // int result = (x < y ? x : y);
    // cout << result << endl;

    int age;
    cout << "Enter age : " << endl;
    cin >> age;
    cout << ((age >= 18) ? "Can Vote" : "Cannot Vote");
    return 0;
}