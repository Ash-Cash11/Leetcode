class Solution {
public:
    // Returns the sum of squares of the digits of n
    int nextNumber(int n) {
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return sum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = n;

        do {
            slow = nextNumber(slow);                   // Move 1 step
            fast = nextNumber(nextNumber(fast));       // Move 2 steps
        } while (slow != fast);

        return slow == 1;
    }
};