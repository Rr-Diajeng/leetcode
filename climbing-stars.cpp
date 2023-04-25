#include <iostream>

class Solution {
public:
    int climbStairs(int n) {
        if(n == 1||n == 2||n == 3)return n;
        
        int a = 2, b = 3,ans;
        for(int i = 4; i <= n; i++){
            ans = a+b;
            a = b;
            b = ans;
        }
        return b;
    }
};

int main() {
    Solution sol;
    int n = 9;
    std::cout << sol.climbStairs(n) << std::endl;
    return 0;
}
