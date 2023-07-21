class Solution {
public:
    int fib(int n) {
    if (n <= 0) {
        return 0;  // Base case: fib(0) = 0
    } else if (n == 1) {
        return 1;  // Base case: fib(1) = 1
    } else {
        // Recursive case: fib(n) = fib(n-1) + fib(n-2)
        return fib(n - 1) + fib(n - 2);
    } 
    }
};
