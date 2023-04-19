#include <unordered_map>
#include <iostream>
#include<string>
using namespace std;

int main(){

    unordered_map<char, int> umap;

    umap['I'] = 1;
    umap['V'] = 5;
    umap['X'] = 10;
    umap['L'] = 50;
    umap['C'] = 100;
    umap['D'] = 500;
    umap['M'] = 1000;

    string s;
    cin>> s;

    /**
     * MCMXCIV
     * 1000
     * 100
     * 1000
     * 10
     * 100
     * 1
     * 5
     * 
     * 1000 + (100 - 1000) + (10 - 100) + (1 - 5)
    */

   /**
    * 1000
    * 900
    * 90
    * 4
   */

    int sum = 0;
    char x = s[0];
    for(int i = 1; i <= s.length(); i++){
        
        if(umap[x] >= umap[s[i]]){
            sum += umap[x];
            x = s[i];

            cout<<"Jika a: "<< sum<<endl;
        }
        else if(umap[x] < umap[s[i]]){
            sum = sum + (umap[s[i]] - umap[x]);
            x = s[i + 1];
            i += 1;

            cout<<"Jika b: "<< sum<<endl;
        }
    }

    cout<< "Total: "<< sum<<endl;;

    return 0;
}