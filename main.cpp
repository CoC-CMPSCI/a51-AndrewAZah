// Complete the following program.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // TODO: declare variable n for the exponent input
    int n;
    double result = 2.0; 
    // TODO: read n from standard input
    cin >> n;
    // TODO: compute 2 to the power of n using a loop (no cmath pow)
    // For positive n: multiply result by 2, n times
    // For negative n: divide result by 2, |n| times
    if (n > 0) {
        for (int i = 1; i < n; i++) {
            result *= 2;
        }
    } else {
        for (int i = -1; i < -n; i++) {
            result /= 2;
        }
    }
    cout << setprecision(5) << fixed;
    cout << "2 to Power " << n << " is " << result << endl;
}
