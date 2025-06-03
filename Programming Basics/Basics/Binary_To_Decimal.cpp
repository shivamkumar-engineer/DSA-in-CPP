#include <iostream>
#include <math.h>
using namespace std;

int BinaryToDecimal(int N)
{
    int decimal = 0;
    int i = 0;
    while (N)
    {
        int bit = N % 10;
        decimal += bit * pow(2, i++);
        N /= 10;
    }
    return decimal;
}

int main()
{
    int N;
    cout << "Enter the Binary No. : " << endl;
    cin >> N;
    if (cin.fail())
    {
        cout << "Failed!!" << endl;
    }
    else
    {
        cout << "Success!!" << endl;
    }

    int val = BinaryToDecimal(N);
    cout << val << endl;
    return 0;
}