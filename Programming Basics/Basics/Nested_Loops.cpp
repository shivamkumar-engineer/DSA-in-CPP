#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 3; j++){
            cout << "i = " << i << "    --> j = " << j << endl;
        }
    }

    cout << endl;   cout << endl;   cout << endl;   cout << endl;   cout << endl;
    
    for(int k = 1; k <= 2; k++){
        for(int l = 1; l <= 2; l++){
            cout << k*l << endl;
        }
    }
    
    return 0;
}