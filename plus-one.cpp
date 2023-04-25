#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // implementasi fungsi plusOne di sini

        vector<int> ans(digits.size(), 0);

        bool status = true;
        int flag = 0;
        if(digits[digits.size() - 1] == 9){
             ans[digits.size() - 1] = 0;
             status = false;
        }
        else{
            ans[digits.size() - 1] = digits[digits.size() - 1] + 1;
            flag++;
        }

        for(int i = (digits.size() - 2); i >= 0; i--){

            if(digits[i] == 9){

                if(flag > 0) {
                    ans[i] = digits[i];

                    // printf("Masuk sini di dig 9 flag > 0: %d\n", ans[i]);
                }
                else {
                    ans[i] = 0;
                    status = false;
                    flag = 0;
                    // printf("Masuk sini di dig 9 flag = 0: %d\n", ans[i]);
                } 
            }

            else{
                if(status == false){
                    ans[i] = digits[i] + 1;
                    status = true;
                    flag++;
                    // printf("Masuk di stat false: %d\n", ans[i]);
                }
                else{
                    ans[i] = digits[i];
                    flag++;
                    // printf("Masuk di stat true: %d\n", ans[i]);
                }
            }
        }

        if(status == false) ans.insert(ans.begin(), 1);

        return ans;
    }
};

int main() {
    vector<int> digits = {9, 9, 8}; // contoh inputz
    Solution sol;
    vector<int> result = sol.plusOne(digits); // memanggil fungsi plusOne
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " "; // mencetak hasil
    }
    cout << endl;
    return 0;
}
