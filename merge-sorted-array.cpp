#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        // Implementasi solusi

        vector <int> hasil;

        for(int i = 0; i < m; i++){
            hasil.push_back(nums1[i]);
        }

        for(int i = 0; i < n; i++){
            hasil.push_back(nums2[i]);
        }

        nums1.clear();

        for(int i = 0; i < hasil.size(); i++) nums1.push_back(hasil[i]);
        
        sort(nums1.begin(), nums1.end());
        return; 
    }
};

int main() {
    Solution sol;

    // Buat array pertama
    vector<int> nums1 = {2, 3, 1, 0, 0};
    int m = 3;

    // Buat array kedua
    vector<int> nums2 = {1};
    int n = 1;

    // Gabungkan array
    sol.merge(nums1, m, nums2, n);

    // Cetak hasil penggabungan
    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}
