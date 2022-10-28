class Solution {
public:
    int fib(int n) {
        int ans;

        //base case
        if (n == 0)
            return 0;

        if (n == 1)
            return 1;

        //recursive function
         ans = fib(n - 1) + fib(n - 2);

         return ans;       
    }
};
