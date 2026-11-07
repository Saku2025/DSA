// Maximum Number of Balloons
// LC - 1189

#include<iostream>
using namespace std;

int maxNumberOfBallons(string text){
    int n = text.size();

    unordered_map<char, int>have;
    for(int i = 0; i < n; i ++){
        have[text[i]] ++;
    }
    string s = "balloon";

    unordered_map<char, int> need;
    for(int i = 0; i < s.length(); i ++){
        need[s[i]] ++;
    }
    int res = INT_MAX;

    for(auto i : need){
        char c = i.first;
        int fneed = i.second;
        int fhave = have[c];
        int times = fhave / fneed;
        res = min(res, times);
    }
    return res;
}

int main(){

    int n = maxNumberOfBallons("loonbalxballpoon");
    cout << n <<endl; 
    return 0;
}


// find the no of ballons word from given string 