#include <iostream>

using namespace std;

int Factorial(int n);

int main() {

    cout << "7! is: " << Factorial(7) << endl;

    cout << "6! is: " << Factorial(6) << endl;

    cout << "5! is: " << Factorial(5) << endl;

    cout << "4! is: " << Factorial(4) << endl;

    cout << "3! is: " << Factorial(3) << endl;

    cout << "2! is: " << Factorial(2) << endl;

    cout << "1! is: " << Factorial(1) << endl;

    cout << "0! is: " << Factorial(0) << endl;

}

int Factorial (int n){
    if(n >= 0) {
        if (n == 1 || n == 0) {
            return 1;
        } else {
            return Factorial(n - 1) * n;
        }
    }
}