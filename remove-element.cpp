#include <vector>
#include <iostream>

using namespace std;

int removeElement(vector<int>& nums, int val) {

    vector<int> tmp;
    int count = 0, erase = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != val){
            tmp.push_back(nums[i]);
            count++;
        } 
        else continue;
        
    }

    for(int i = 0; i < count; i++){
        nums[i] = tmp[i];
    }

    return count;
    
}

int main(){

    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    int length = removeElement(nums, val);
    cout<< length<< endl;

    for (int i = 0; i < length; i++) {
        cout << nums[i] << " ";
    }

    cout<< endl;

    return 0;
}