#include<iostream>
using namespace std;

bool checkPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i<n; i++){
        if(n % i == 0){
        return false;
        }
    }
    return true;
}

int main(){
    int m;
    cout << "Enter m : " << endl;
    cin >> m;
    for(int i = 1; i<=m; i++){
        bool isPrime = checkPrime(i);
        if(isPrime){
        cout << "Prime -->" << i << endl;
        }
        else{
        cout << "Non - Prime -->" << i << endl;
        }
    }
    return 0;
}