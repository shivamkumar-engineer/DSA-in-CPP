#include<iostream>
using namespace std;

int main(){
    // 1 - 100 counting
    int i = 1;
    while (i <= 100)
    {
        cout << i << endl;
        i++;
    }

    cout << endl;    cout << endl;    cout << endl;    cout << endl;    cout << endl;

    // 100 - 1 counting
    int x = 100;
    while (x > 0)
    {
        cout << x << endl;
        x--;
    }

    cout << endl;    cout << endl;    cout << endl;    cout << endl;    cout << endl;

    // counting 0 t0 -10
    int y = 0;
    while (y >= -10)
    {
        cout << y << endl;
        y--;
    }
    

    cout << endl;    cout << endl;    cout << endl;    cout << endl;    cout << endl;
    // Print Name 50 times
    int n = 1;
    while (n <= 50)
    {
        cout << "Shivam Kumar" << endl;
        n++;
    }   



    // 7th - Table

    int z = 1;
    while (z <= 10)
    {
        cout << z*7 << endl;
        z++;
    }

    cout << endl;    cout << endl;    cout << endl;    cout << endl;    cout << endl;


    // A-Z alphabet print(ASCII conversion)

    char a = 65;
    while (a <= 90)
    {
        cout << a << endl;
        a++;
    }

    cout << endl;    cout << endl;    cout << endl;    cout << endl;    cout << endl;



    // a-z alphabet printing(ASCII)

    char b = 97;
    while (b <= 122)
    {
        cout << b << endl;
        b++;
    }
    
    
    
    return 0;
}