
// Minimum Size Subarray Sum
// LC - 209


#include<iostream>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
     int len = nums.size();
     int low = 0;
     int high = 0;
     int sum = 0;
     int res = INT_MAX;

     while(high < len){
        sum += nums[high];
        while (sum >= target)
        { 
            int le = high -  low  + 1;
            res = min(res, le);
            sum = sum - nums[low];
            low ++;
        }
        high ++;
     }
     return res;
}

int main() {
    vector<int> number = {2,3,1,2,4,3};
    int target = 7;
    int ans = minSubArrayLen(target, number);
    cout << ans << endl;
}