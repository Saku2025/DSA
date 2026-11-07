// LC - 1
// Two Sum
/*
You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
    vector<pair<int, int>> arr;
    for(int i = 0; i < nums.size(); i ++){
        arr.push_back({nums[i], i});
    }
    sort(arr.begin(), arr.end());

    cout<< "This is the shorted pair output--->\n";
    
    for(int i = 0; i < arr.size(); i++){
    cout << "(" << arr[i].first << ", " << arr[i].second << ")" << endl;
    }
   int tsize = arr.size();
   cout << "Size of arr: " << tsize << endl;

    int n = nums.size();
    int start = 0;
    int end = n - 1;
    int sum = 0;

    while(start < end){
        sum = arr[start].first + arr[end].first;

        if(sum == target)
            return {arr[start].second, arr[end].second};

        else if(sum > target)
            end --;
        else
            start ++;
    }
    return {};
}

int main(){
    vector<int> nums = {3,2,4};
    vector<int> ans = twoSum(nums, 7);
    cout<<ans[0] << " " << ans[1] << endl;
    return 0;
}