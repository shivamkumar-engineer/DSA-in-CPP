#include<iostream>
using namespace std;

int main(){
    int N, num;
    int sum = 0;
    cout << "Enter the value of N : " << endl;
    cin >> N;
    for(int i = 1; i<=N; i++){
        cout << "Enter the number " << i << endl;
        cin >> num;
        sum += num;
    }
    cout << "The total sum of the N inputs are : " << sum << endl;
    return 0;
}