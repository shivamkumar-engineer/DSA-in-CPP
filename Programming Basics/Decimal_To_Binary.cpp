#include<iostream>
#include<cmath>
using namespace std;

// Method 1(division)

// int DecimalToBinaryM1(int n){
//     int binaryNo = 0;
//     int i = 0;
//     while(n > 0){
//         int bit = n % 2;
//         binaryNo = bit*pow(10, i++) + binaryNo;
//         n /= 2;
//     }
//     return binaryNo;
// }



// Method - 2(Bitwise)
int DecimalToBinaryM1(int n){
    int binaryNo = 0;
    int i = 0;
    while(n > 0){
        int bit = n & 1;
        binaryNo = bit*pow(10, i++) + binaryNo;
        n = n >> 1;
    }
    return binaryNo;
}




int binary(int n){
    int binaryno = 0;
    int i = 0;

    while(n>0){
    int bit = n & 1;
    binaryno = bit*pow(10, i++) + binaryno;
    n = n >> 1;
    }
    return 0;
}


int no(int n){
    int i = 0;
    int binary = 0;
    while(n > 0){
        int bit = n % 2;
        binary = bit*pow(10, i++) + binary;
        n /= 2;
    }
    return binary;
}
int main(){
    int n;
    cout << "Enter n : " << endl;
    cin >> n;
    int result = DecimalToBinaryM1(n);
    cout << result << endl;
    return 0;
}


