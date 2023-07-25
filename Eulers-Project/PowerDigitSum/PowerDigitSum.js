// Author - Given Lepita

function powerDigitSum(base, power) {
    // Problem Set - Power Digit Sum(Difficulty - 5%)
    /**
     * 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
     * What is the sum of the digits of the number 2^1000.
     */

    // Here its easier than C++ as we can implement it the same way we did in python
    // This is fun isn't it? - C++ is a bit more complex so we had to create a custom multiplication function
    const intSolution = BigInt(base) ** BigInt(power);
    const strVersion = intSolution.toString();
    let added = 0;
    for (let i = 0; i < strVersion.length; i++) {
        added += parseInt(strVersion[i]);
    }
    return added;
}
