#include<iostream>
#include<math.h>
using namespace std;

double sipCalculator(double p, double annualrate, double years){
    float r = annualrate/(12*100);
    float n = years*12;
    double futureValue = p * (((pow((1 + r), n) - 1) * (1 + r)) / r);
    return futureValue;
}

int main(){
    double i, j, k;
    cout << "Enter the Principal : " << endl;
    cin >> i;
    cout << "Enter the Rate : " << endl;
    cin >> j;
    cout << "Enter the time in years : " << endl;
    cin >> k;
    double result = sipCalculator(i, j , k);
    cout << result << endl;
    return 0;
}


