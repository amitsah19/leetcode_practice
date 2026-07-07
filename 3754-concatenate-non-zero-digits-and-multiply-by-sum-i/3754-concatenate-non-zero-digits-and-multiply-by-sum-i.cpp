class Solution {
public:
    long long sumAndMultiply(int n) {
        if (n == 0) return 0;

        long long sum = 0;
        long long number = 0;
        long long place = 1;

        while (n > 0) {
            int digit = n % 10;

            if (digit != 0) {
                sum += digit;
                number += digit * place;
                place *= 10;
            }

            n /= 10;
        }

        return number * sum;
    }
};