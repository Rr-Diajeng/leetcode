#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        // implementasi fungsi lengthOfLastWord

        bool status = false;
        int ukur = s.length();
        int hasil = 0;
        for(int i = ukur - 1; i >= 0; i--){
            if(s[i] == 32){
                if(status == false) continue;
                else break;
            }
            else{
                status = true;
                hasil++;
            }
        }

        return hasil;
    }
};

int main() {
    Solution sol;
    string s = " hello wooorld   ";
    int result = sol.lengthOfLastWord(s);
    cout << "Length of last word: " << result << endl;
    return 0;
}
