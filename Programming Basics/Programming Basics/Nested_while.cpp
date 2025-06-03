#include<iostream>
using namespace std;

int main(){
    int i = 1;
    // int j = 1;
    while(i <= 2){
        int j = 1;
        while(j <= 2){
            cout << i*j << endl;
            j++;
        }
        i++;
    }
}