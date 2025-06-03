// // C++ program to use cin.fail() method

// #include <iostream>
// #include <limits>
// using namespace std;

// int main()
// {
//     // Declare and initialize integer variables.
//     int i = 0, j = 0;

//     // Infinite loop to continually ask for input until a
//     // valid integer is entered.
//     while (true) {
//         // Ask the user to enter int value.
//         cout << "Enter an Integer: " << endl;

//         i++;

//         // Read input from the user.
//         cin >> j;

//         /* Check if the input operation failed (i.e., input
//         was not an integer).*/

//         if (cin.fail()) {
//             // Clear the error flags on the input stream.
//             cin.clear();

//             // leave the rest of the line
//             cin.ignore(numeric_limits<streamsize>::max(),
//                        '\n');

//             // Ask the user to enter a valid int number only
//             cout << "Wrong input, please enter a number: ";
//         }
//         else {
//             // Print the valid integer entered by the user.
//             cout << "Integer " << i << ": " << j << endl;
//         }
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i<= 10; i++){
        cout << i << endl;
    }
    return 0;
}