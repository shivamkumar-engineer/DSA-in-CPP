#include<iostream>
using namespace std;

int sum(int a, int b){
    int sum = a + b;
    return sum;
}

int main(){
    int a, b;
    cout << "Enter a : " << endl;
    cin >> a;
    cout << "Enter b : " << endl;
    cin >> b;
    int result = sum(a, b);
    cout <<"Sum = " << result << endl;
    return 0;
}