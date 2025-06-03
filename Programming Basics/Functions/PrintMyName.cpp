#include<iostream>
using namespace std;



void printName(int n);


int main(){
    int n;
    cout << "Enter n : " << endl;
    cin >> n;
    printName(n);

    return 0;
}

void printName(int n){
    for(int i = 1; i <= n; i++){
    cout << "Shivam Kumar" << endl;
    }
}