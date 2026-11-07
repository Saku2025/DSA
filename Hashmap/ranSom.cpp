// ransom note 
// LC 383

#include<iostream>
using namespace std;


bool fun(unordered_map<char, int>& have, unordered_map<char, int>& need){
    for(auto i : need){
        char c = i.first;
        
        int fNeed = i.second;
        int fHave = need[c];

        if(fHave <= fNeed){
            return false;
        }
    }
    return false;
}

bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> have;
    unordered_map<char, int> need;

    int i ;
    for(i = 0; i < magazine.size(); i ++){
        have[magazine[i]] ++;
    }
    for(i = 0; i < ransomNote.size(); i ++){
        need[ransomNote[i]] ++;
    }
     return fun(have, need);
}

int main(){

    bool a = canConstruct("acd", "aaac");
    cout << a << endl;
    return 0;
}