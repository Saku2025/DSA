// longest Palindrom
// LC - 409


#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;


int longestPalindrom(string s){
    int n = s.size();

    unordered_map<char, int> f;
    for(int i = 0; i < n; i ++){
        f[s[i]] ++;
    }

    bool odd = false;
    int res = 0;

    for(auto i : f){
        int val = i.second;
        if(val % 2 == 0)
            res += val;
        else{
            odd = true;
        }
    }
    if(odd == false){
        return res;
    }
    if(odd == true){
        for(auto i : f){
            int val = i.second;
            if(val % 2 == 1)
                res += (val - 1);
        }
    }
    return res + 1;
}

#include <iostream>
using namespace std;

int main(){
    int a = longestPalindrom("a");
    cout << a << endl; 
    return 0;
}

