#include <iostream>
using namespace std;

int main()
{
    int Eng, Hin, Maths, Science, sst;
    float sum, per;
    cout << "Enter the marks of each subject : " << endl;
    cin >> Eng;
    cin >> Hin;
    cin >> Maths;
    cin >> Science;
    cin >> sst;
    sum = (Eng + Hin + Maths + Science + sst);
    per = (sum / 500) * 100;
    cout << "The total percent is : " << per << endl;
    return 0;
}