#include<iostream>
using namespace std;

int main(){
    // counting 1- 100

    int i = 1;
    do{
        cout << i << endl;
        i++;
    }
    while(i <= 100);

    cout << endl;   cout << endl;   cout << endl;   cout << endl;   cout << endl;

    // counting 100 - 1

    int x = 100;
    do{
        cout << x << endl;
        x--;
    }   while(x > 0);

    cout << endl;   cout << endl;   cout << endl;   cout << endl;   cout << endl;

    // coutnting 0 -> -10

    int r = 0;
    do{
        cout << r << endl;
        r--;
    }   while(r >= -10);

    cout << endl;   cout << endl;   cout << endl;   cout << endl;   cout << endl;

    // print name 500 times

    int s = 1;
    do{
        cout << "Shivam Kumar" << endl;
        s++;
    }   while(s <= 500);

    cout << endl;   cout << endl;   cout << endl;   cout << endl;   cout << endl;

    // 7th Table

    int t = 1;
    do{
        cout << t*7 << endl;
        t++;
    }   while(t <= 10);

    cout << endl;   cout << endl;   cout << endl;   cout << endl;   cout << endl;

    // A-Z Alphabet 

    char u = 65;
    do{
        cout << u << endl;
        u++;
    }   while(u <= 90);

    cout << endl;   cout << endl;   cout << endl;   cout << endl;   cout << endl;

    // a-z alphabet

    char v = 97;
    do{
        cout << v << endl;
        v++;
    }   while(v <= 122);

    cout << endl;   cout << endl;
    return 0;
}