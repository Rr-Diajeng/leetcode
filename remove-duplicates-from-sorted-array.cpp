#include <iostream>
#include <vector>
#include <set>
#include <cassert>
using namespace std;

int removeDuplicates(vector<int>& nums) {

    set<int> s;

    for(int i = 0; i < nums.size(); i++){
        s.insert(nums[i]);
    }

    int i = 0;
    for(auto x : s){
        nums[i] = x;
        i++;
    }

    return i;
}

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    vector<int> expectedNums = {0,1,2,3,4};

    int k = removeDuplicates(nums);

    assert(k == expectedNums.size());
    for (int i = 0; i < k; i++) {
        assert(nums[i] == expectedNums[i]);
    }

    cout << "Output: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}