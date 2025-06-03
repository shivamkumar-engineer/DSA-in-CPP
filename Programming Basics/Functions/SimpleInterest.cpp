#include<iostream>
using  namespace std;


float simpleInterest(float p, float r, float t){
    float value = (p*r*t)/100.0;
    float amount = p + value;
    return amount;
}


int main(){
    float p, r, t;
    cout << "Enter the principal : ";
    cin >> p;
    cout << endl;
    cout << "Enter the rate of interest : ";
    cin >> r;
    cout << endl;
    cout << "Enter the time in years : ";
    cin >> t;
    cout << endl;


    float ans = simpleInterest(p, r, t);
    cout << "Rs. " << ans << endl;
    return 0;
}