#include<iostream>
using namespace std;

double readNumber() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

double divide(double x, double y) {
    if (y == 0)
        throw "Division by zero";
    return x / y;
}

int main() {
    double a, b;
    a = readNumber();
    b = readNumber();
    try {
        cout << "Result of division: " << divide(a, b) << endl;
    }
    catch (const char* error) {
        cout << "Error: " << error << endl;
    }
    return 0;
}

