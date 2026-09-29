#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    // cout << "Hello, World!" << endl;
    // int num1 = 10, num2 = 3;
    // cout << "Number 1: " << num1 << " | Number 2: " << num2 << endl;
    // cout << "Addition: " << num1 + num2 << endl;
    // cout << "Modulus: " << num1 % num2 << endl;

    // double num3, num4;
    
    // cout << "please enter 1 number: " << endl;
    // cin >> num3;
    // cout << "please enter 1 number: " << endl;
    // cin >> num4;
    // cout << "Number 3: " << num3 << " | Number 4: " << num4 << endl;
    // cout << "Addition: " << num3 + num4 << endl;

    // int opcode;
    // double num1, num2;
    // cout << "Please enter 2 numbers: " << endl;
    // cin >> num1 >> num2;
    // cout << "number 1: = " << num1 << " | number 2: " << num2 << endl;
    // cout << "please select the operation you want to perform: 0:+, 1:-, 2:%" << endl;

    // cin >> opcode;
    // if (opcode == 0){
    //         cout << "addition:" << num1 + num2 << endl;
    // }
    // else if (opcode == 1){
    //     cout << "subtraction:" << num1 - num2 << endl;
    // }
    // else if (opcode == 2){
    //     cout << "modulus:" << fmod(num1, num2) << endl;
    // }
    // else{
    //     cout << "invalid operation" << endl;
    // }

    float grade;
    cout << "Please enter your grade: " << endl;
    cin >> grade;
    if (grade >= 101 || grade <0){
        cout << "Invalid grade. Please enter a grade between 0 and 100." << endl;
    }
    else if (grade >= 60 && grade <= 100){
        cout << "You passed!" << endl;
    }
    else{
        cout << "You failed!" << endl;
    }
    return 0;
}