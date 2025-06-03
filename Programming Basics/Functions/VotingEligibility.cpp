#include<iostream>
using namespace std;

void votingEligibility(int age){
    if(age >= 18){
        cout << "Eligible!" << endl;
    }
    else{
        cout << "Non-Eligible!" << endl;
    }
}

int main(){
    int a;
    cout << "Enter the age : " << endl;
    cin >> a;
    votingEligibility(a);
    return 0;
}