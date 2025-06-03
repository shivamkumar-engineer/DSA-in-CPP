#include<iostream>
using namespace std;


void counting(int n){
    for(int i = 1; i<= n; i++){
        cout << i << endl;
    }
}


int main(){

    int m;
    cout << "Enter the m : " << endl;
    cin >> m;
    counting(m);
    return 0;
}