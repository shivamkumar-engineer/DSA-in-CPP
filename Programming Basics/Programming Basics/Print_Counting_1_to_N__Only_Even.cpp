// #include<iostream>
// using namespace std;

// int main(){
//     int N;
//     cout << "Enter the value of N : " << endl;
//     cin >> N;
//     for(int i = 1; i<=N; i++){
//         if(i%2 == 0){
//             cout << "The counting is : " << i << endl;
//         }
//     }
//     return 0;
// }

// Using Bitwise AND Operator
// #include<iostream>
// using namespace std;

// int main(){
//     int N;
//     cout << "Enter the value of N : " << endl;
//     cin >> N;
//     for(int i = 1; i<=N; i++){
//         if((i & 1) == 0){
//             cout << "The counting is : " << i << endl;
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

namespace SK_Namespace
{
    void counting()
    {
        int N;
        cout << "Enter the value of N : ";
        cin >> N;
        for (int i = 1; i <= N; i++)
        {
            if ((i & 1) == 0)
            {
                cout << "The values are : " << i << endl;
            }
        }
    }
}

int main()
{
    SK_Namespace::counting();
    return 0;
}