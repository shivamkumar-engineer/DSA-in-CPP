#include<iostream>
using namespace std;

int product(int a, float b, int c){
    int value = a*b*c;
    return value;
}

void printTableOf(int n){
    for(int i = 1; i <= 10; i++){
        cout << n*i << endl;
    }
    return;
}

float convertToCelcius(float f){
    float farenheit = (f - 32)*5/9;
    return farenheit; 
}

char convertToUpperCase(){
    for(int i = 65; i <= 90; i++){
        char x = i;
        cout << x << endl;
    }    
}

char lowerToUpperCase(char ch){
    char ans = ch - 'a' + 'A';
    return ans;
}


int main(){
    int a, c, n;
    float b, g;
    cout << "a : " << endl;
    cin >> a;
    cout << "b : " << endl;
    cin >> b;
    cout << "c : " << endl;
    cin >> c;
    int ans = product(a, b, c);
    cout << ans << endl;

    cout << "Enter n : " << endl;
    cin >> n;
    printTableOf(n);

    cout << "Enter the temperature in Farenheit : " << endl;
    cin >> g;
    float temperature = convertToCelcius(g);
    cout << temperature << endl;

    convertToUpperCase();

    char ch;
    cout << "Enter the lower case character : " << endl;
    cin >> ch;
    char final = lowerToUpperCase(ch);
    cout << final << endl;
    return 0;
}