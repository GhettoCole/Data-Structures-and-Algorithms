//  Author - Given Lepita

/*
 * Problem Set - Summation Of Primes(Difficulty - 5%)

 * The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 * Find the sum of all the primes below two million.
*/

function sumOfPrimesBelow(limit) {
    let isComposite = new Array(limit).fill(false);
    let summedPrime = 0;

    for (let i = 2; i * i < limit; i++) {
        if (!isComposite[i]) {
            for (let j = i * i; j < limit; j += i) {
                isComposite[j] = true;
            }
        }
    }

    for (let i = 2; i < limit; i++) {
        if (!isComposite[i]) {
            summedPrime += i;
        }
    }

    return summedPrime;
}

const limit = 2000000;
const result = sumOfPrimesBelow(limit);
console.log("The sum of all the primes below " + limit + " is: " + result);
