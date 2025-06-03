#include<iostream>
using namespace std;

bool checkPrime(int N){
    if(N <= 1){
        return false;
    }
    for(int i = 2; i < N; i++){
        if(N % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int N;
    cout << "Enter the N : " << endl;
    cin >> N;
    if(cin.fail()){
        cout << "Failed!!" << endl;
    }
    else{
        cout << "Success" << endl;
    }
    for(int i = 1; i <= N; i++){
        bool isPrime = checkPrime(i);
        if(isPrime){
            cout << "Prime     ->  " << i << endl;
        }
        else{
            cout << "Non-Prime ->  " << i << endl;
        }
    }
    return 0;
}