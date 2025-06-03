#include<iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter the value of N : " << endl;
    cin >> N;
    for(int i = 1; i<=N; i++){
        if(i%2 == 0){
            cout << "The counting is : " << i << endl;
        }
    }
    return 0;
}