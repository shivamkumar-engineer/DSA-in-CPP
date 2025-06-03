#include<iostream>
using namespace std;

int main(){
        int days;
        cout << "Enter the day : ";
        cin >> days;
        
        switch(days){
                case 1: cout << "Today is Monday" << endl;
                break;
                case 2: cout << "Today is Tuesday" << endl;
                break;
                case 3: cout << "Today is Wednesday" << endl;
                break;
                case 4: cout << "Today is Thursday" << endl;
                break;
                case 5: cout << "Today is Friday" << endl;
                break;
                case 6: cout << "Today is Saturday" << endl;
                break;
                case 7: cout << "Today is Sunday" << endl;
                break;
                default: cout << "Bhak bsdk" << endl;
        }



        return 0;
}



// #include<iostream>
// using namespace std;

// int main(){
//     int grade;
//     cout << "Enter Grade : " << endl;
//     cin >> grade;
    
//     switch(grade){
//         case 1: cout << "Percentage >= 90" << endl;
//                 break;
//         case 2: cout << "Percentage >= 80" << endl;
//                 break;
//         case 3: cout << "Percentage >= 70" << endl;
//                 break;
//         case 4: cout << "Percentage >= 60" << endl;
//                 break;
//         case 5: cout << "Percentage >= 50" << endl;
//                 break;
//         default : cout << "Chud gye guru!!";
//     }
//     return 0;
// }