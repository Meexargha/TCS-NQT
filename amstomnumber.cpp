#include <iostream>
using namespace std;

int main() {
    // 1. protom ea num sum temp didgit nilam 
    int num, sum = 0, temp, digit;
    cout << "Enter a number: ";
    cin >> num;

    temp = num;
    // 2. input num ta temp ea nilam 
    while (temp > 0) {
        // 3 simple logic 
        // 4. taking the last digit by modulus 
        digit = temp % 10;
        // sqaure kochi ai khan ea ar sum ea store 
        sum = sum + (digit * digit * digit);
        // remove the last digit
        temp = temp / 10;
    }

    if (sum == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
