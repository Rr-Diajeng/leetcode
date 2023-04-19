#include <iostream>
#include <string>
using namespace std;

string mergeAlternately(string word1, string word2) {

    string hasil ="";
    int mx = max(word1.length(), word2.length());

    int a = 0, b = 0;
    for(int i = 0; i < mx * 2; i++){

        if(i % 2 == 0){

            if(a != word1.length()){
                hasil += word1[a];
                a++;
            } 
            else continue;
        } 
        else {

            if(b != word2.length()){ 
                hasil += word2[b];
                b++;
            }
            else continue;
            
        }
    }

    return hasil;
}

int main() {

    string word1 = "abcd";
    string word2 = "pq";
    string result = mergeAlternately(word1, word2);
    cout << result << endl;
    return 0;
}