// First unique Character in String 
// LC - 387

#include<iostream>
using namespace std;


int firstUniqueChar(string s){
    int n = s.size();
    unordered_map<char, int>f;
    for(int i = 0; i < n; i ++){
        f[s[i]] ++;
    }
    for(int i = 0; i < n; i ++){
        if(f[s[i]] == 1)
            return s[i];
    }
    return -1;
}
int main(){
    char a = firstUniqueChar("abcdeavnfiekvnei");
    cout << a <<" ";
    return 0;
}