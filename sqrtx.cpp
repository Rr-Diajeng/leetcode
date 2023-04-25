#include <iostream>
#include <cmath>

class Solution {
public:
    int mySqrt(int x) {
        // implementasi fungsi mySqrt

        double hasil = sqrt(x);

        return floor(hasil);
    }
};

int main() {
    Solution sol;
    int x = 8;
    std::cout << "Square root of " << x << " is " << sol.mySqrt(x) << std::endl;
    return 0;
}
