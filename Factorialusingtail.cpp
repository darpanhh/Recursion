#include<iostream>
using namespace std;


int factorialTail(int n, int result = 1) {
    if (n == 0 || n == 1)
        return result;
    return factorialTail(n - 1, n * result);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0)
        cout << "Factorial is not defined for negative numbers." << endl;
    else
        cout << "Factorial of " << number << " is " << factorialTail(number) << endl;

    return 0;
}
