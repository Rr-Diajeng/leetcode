#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>

using namespace std;

int maxDivScore(vector<int>& nums, vector<int>& divisors) {

    int mxx = 0;
    for(int i = 0; i < divisors.size(); i++){
        mxx = max(mxx, divisors[i]);
    }

    set<int> s;

    for(int i = 0; i < divisors.size(); i++){
        s.insert(divisors[i]);
    }

    unordered_map<int, int> umap;

    for(auto x: s){
        umap[x] = 0;
    }

    for(int i = 0; i < nums.size(); i++){

        for(auto x: s){

            if((nums[i] % x) == 0){
                umap[x]++;

                // printf("nums: %d divisors(x): %d umap: %d\n", nums[i], x, umap[x]);
            }
        }
    }

    int mx = 0;
    for(auto x: umap){
        mx = max(mx, x.second);
    }

    // printf("max: %d\n", mx);

    int count = 0, flag = 0;
    int hasil, mn = mxx;
    for(auto x: umap){

        if(x.second == mx){

            count++;
            hasil = x.first;
            mn = min(mn, x.first);

            if (count > 1) flag++;
        }

        // printf("hasil: %d\n", hasil);
        // printf("min: %d\n", mn);

    }

    if (flag > 0) return mn;
    else return hasil;
}

int main() {
    vector<int> nums = {24,73,63,76,44,30,11,16,71,87,10};
    vector<int> divisors = {49,32,72,53,89,96,93,27,49,20,53,30,70,70,79,100,99,96,58,51,21};
    int ans = maxDivScore(nums, divisors);
    cout << "Max score: " << ans << endl;
    return 0;
}