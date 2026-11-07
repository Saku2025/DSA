// Longest Substring with K Uniques
// GFG

#include <iostream>


using namespace std;

int longestKSubstr(string &s, int k) {
    int low = 0;
    int n = s.size();
    int res = -1;

    unordered_map<char, int> feq;

    for (int high = 0; high < n; high++) {

        feq[s[high]]++;

        while (feq.size() > k) {
            feq[s[low]]--;

            if (feq[s[low]] == 0)
                feq.erase(s[low]);

            low++;
        }

        if (feq.size() == k) {
            int len = high - low + 1;
            res = max(res, len);
        }
    }

    return res;
}

int main() {
    string s = "aabacbebebe";

    int ans = longestKSubstr(s, 3);

    cout << ans << endl;

    return 0;
}