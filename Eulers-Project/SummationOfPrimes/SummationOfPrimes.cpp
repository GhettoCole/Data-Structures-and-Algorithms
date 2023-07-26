#include <iostream>
#include <vector>
using namespace std;

//  Author - Given Lepita

/*
 * Problem Set - Summation Of Primes(Difficulty - 5%)

 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 * Find the sum of all the primes below two million.
*/


long sumOfPrimesBelow(int limit) {
    vector<bool> isComposite(limit, false);
    long summedPrime = 0;

    for (int i = 2; i * i < limit; i++) {
        if (!isComposite[i]) {
            for (int j = i * i; j < limit; j += i) {
                isComposite[j] = true;
            }
        }
    }

    for (int i = 2; i < limit; i++) {
        if (!isComposite[i]) {
            summedPrime += i;
        }
    }

    return summedPrime;
}

int main() {
    int limit = 2000000;
    long result = sumOfPrimesBelow(limit);
    cout << "The sum of all the primes below " << limit << " is: " << result << endl;

    return 0;
}
