//largestOfThree
//JA 08/20/25

#include <iostream>
using namespace std;

int main() {
    cout << "Hello and welcome to my largest of three program ";
    int num1 = 500;
    int num2 = 1000;
    int num3 = 2000;
    int largest = 0;
    cout << " \nThe value of num1 is " << num1;
    cout << " \nThe value of num2 is " << num2 <<"\n";

    if (num1>num2) {
        cout << "\nnum1 has the value of " <<num1<< " and is greater than num2";
    }
else {
    cout << "\nnum2 has the value of " <<num2<< " and is greater than num1 which has a value of " <<num1;
}

    //Find the largest of three using nested if statements

if (num1 > num2) {
    if (num1 > num3) {
        largest = num1;
        cout << "\nnum1 has the value of " <<num1<< " and is the largest int!";

    }
    else {
        largest = num3;
        cout <<"\nnum3 has the value of " <<num3<< " and is the largest int!";
    }
}else if (num2>num3) {
    cout << "\nnum2 has a value of " <<num2<< " and is the largest int!";
}else {cout << "num3 has a value of "<<num3<< " and is the largest int!";}

    return 0;
}