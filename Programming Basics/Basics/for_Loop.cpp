#include<iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter how many times you wanna print : " << endl;
    cin >> N;

    cout << endl;
    // for(int i = 1; i<=N; i++){
    //     if(i == 10 || i == 15){
    //         continue;
    //     }
    //     cout << i << " --> Shivam Kumar" << endl;
    // }

    int i = 1;
    while(i <= N)
    {
        // if(i == 5)
        // {
        //     continue;
        // }
        cout << i << "--> Shivam Kumar" << endl;
        i++;
    }
    return 0;
}