#include <iostream>
#include <vector>
using namespace std;

int strStr(string haystack, string needle) {
    
    int n = needle.size();
        if(haystack.size()<n) return -1;
        
        for(int i=0;i<=haystack.size()-n;i++) {
            if(haystack[i]==needle[0]){
                if(haystack.substr(i,n)==needle)return i;
            }
        }
    return -1;
}

int main() {
    string haystack = "mississippi";
    string needle = "issip";
    int result = strStr(haystack, needle);
    cout << result << endl;
    return 0;
}
