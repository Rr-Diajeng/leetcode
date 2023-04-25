#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // implementasi fungsi searchInsert
        
        bool status = false;
        int hasil;
        for(int i = 0; i < nums.size(); i++){

            if(nums[i] > target){
                hasil = i;
                status = true;
                break;
            }
            else{
                if(nums[i] == target){
                    status = true;
                    hasil = i;
                    break;
                }
            }
        }

        if(status == false) hasil = nums.size();

        return hasil;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,3,5,6};
    int target = 7;
    int result = sol.searchInsert(nums, target);
    cout << "Index: " << result << endl;
    return 0;
}
