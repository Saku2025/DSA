// Three Sum Closest
// LC - 16

#include<iostream>
using namespace std;

// int threeSumClosest(vector<int>& nums, int target) {
//     int n = nums.size();
//     sort(nums.begin(), nums.end());
//     int max_difference = INT_MAX;
//     int resSum = 0;
//     for(int i = 0; i < n - 2; i ++){
//         int left = i + 1;
//         int right = n - 1;

//         while(left < right){
//             int sum = nums[i] + nums[left] + nums[right];
//             if(sum == target){
//                 return sum;
//             }
//             int diff = abs(sum - target);
//             if(max_difference > diff){
//                 max_difference = diff;
//                 resSum = sum;
//             }
//             else if(sum > target){
//                 right --;
//             }
//             else
//                 left ++;
//         }
//     }
//     return resSum;
// }
int threeSumClosest(vector<int>& nums, int target){
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int max_difference = INT_MAX;
    int resSum = 0;
    for(int i = 0; i < n - 2; i ++){
        int left = i + 1;
        int right = n - 1;

        while(left < right){
            int sum = nums[i] + nums[left] + nums[right];
            if(sum == target)
                return sum;
            int diff = abs(target - sum);
            if(max_difference > diff){
                max_difference = diff;
                resSum = sum;
            }
            else if(sum > target)
                right --;
            else
                left ++;
        }
    }
    return resSum;
}
int main(){
    vector<int> numbers = {-1,2,1,-4};
    int target = 1;
    int ans = threeSumClosest(numbers, target);
    cout << ans << endl;
    return 0;
}