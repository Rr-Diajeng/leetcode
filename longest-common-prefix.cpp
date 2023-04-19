#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {

    sort(strs.begin(), strs.end());
    int ukuran = strs.size();
    string a = strs[0], b = strs[ukuran - 1];
    string hasil = "";

    for(int i = 0; i < a.size(); i++){

        if(a[i] == b[i]){
            hasil += a[i];
        }

        else break;
    }

    return hasil;
}

int main() {
    vector<string> strs = {"cir","car"};
    string result = longestCommonPrefix(strs);
    cout << result << endl;

    return 0;
}
