#include <bits/stdc++.h>
using namespace std;
int main() {
    double a = 1.0;  // Lower bound of the interval
    double b = 2.0;  // Upper bound of the interval
    double epsilon = 0.0001;  // Error tolerance
    double c = 0.0;
    int iterations = 0;

    while (abs(b - a) >= epsilon) {
        c = (a + b) / 2;
        double result = pow(c, 3) - c - 1;

        if (result == 0.0) {
            break;
        } else if (result * (pow(a, 3) - a - 1) < 0) {
            b = c;
        } else {
            a = c;
        }
        iterations++;
    }
    cout << "Root found after " << iterations << " iterations." << endl;
    cout << "Approximate root: " << c << endl;

    return 0;
}

