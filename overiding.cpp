#include<iostream>
using namespace std;

class sample {
public:
    void get(int x, int y) {
        cout << "the result is " << x / y;
    }
};

int main() {
    int a, b;
    cout << "\nEnter a,b: ";
    cin >> a >> b;
    try {
        if (b == 0)
            throw 'a';
    }
    catch (char) {
        cout << "\nInvalid input: Change the value of b";
        return 1; // Return an error code to indicate failure
    }
    sample s;
    s.get(a, b);
    return 0; // Indicate successful completion
}

