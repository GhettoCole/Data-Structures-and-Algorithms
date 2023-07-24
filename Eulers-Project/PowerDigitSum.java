import java.math.BigInteger;

// Author - Given Lepita

public class PowerDigitSum {
    // Problem Set - Power Digit Sum(Difficulty - 5%)
    /**
     * 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
     * What is the sum of the digits of the number 2^1000.
     */
    public static int powerDigitSum(int base, int power) {
        // Here its easier than C++ as we can implement it the same way we did in python
        // This is fun isn't it? - C++ is a bit more complex so we had to create a custom multiplication function
        BigInteger intSolution = BigInteger.valueOf(base).pow(power);
        String strVersion = intSolution.toString();
        int added = 0;
        for (int i = 0; i < strVersion.length(); i++) {
            added += Character.getNumericValue(strVersion.charAt(i));
        }
        return added;
    }

    public static void main(String[] args) {
        System.out.println(powerDigitSum(2, 1000));
    }
}
