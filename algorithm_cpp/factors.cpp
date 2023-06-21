#include <iostream>
#include <vector>

using namespace std;

vector<int> primeFactors(int n) {
    vector<int> factors;

    // Check if 2 is a factor
    while (n % 2 == 0) {
        factors.push_back(2);
        n = n / 2;
    }

    // Check for other prime factors
    for (int i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n = n / i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2) {
        factors.push_back(n);
    }

    return factors;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    vector<int> factors = primeFactors(number);

    cout << "Prime factors of " << number << " are: ";
    for (int factor : factors) {
        cout << factor << " ";
    }

    return 0;
}

