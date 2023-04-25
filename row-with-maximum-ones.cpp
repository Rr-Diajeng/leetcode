#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {

}

int main() {
    vector<vector<int>> mat = {
        {0, 1},
        {1, 0},
    };
    
    Solution s;
    vector<int> result = s.rowAndMaximumOnes(mat);
    cout << "Row with maximum ones: " << result[0] << endl;
    cout << "Number of ones: " << result[1] << endl;
    return 0;
}