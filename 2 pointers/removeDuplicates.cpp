// Remove Duplicates from Shorted Array
// LC - 26


#include<iostream>
using namespace std;

int removeDuplicates(vector<int>& nums){
    int n = nums.size();
    if(nums.empty())
        return 0;
    int j = 1;

    for(int i = 1; i < n; i ++){
        if(nums[i] != nums[i - 1]){
            nums[j] = nums[i];
            j ++;
        }
    }
    return j;
}

int main(){
    vector<int> nums = {0,0,1,1,9,9,10,10};
    int ans = removeDuplicates(nums);
    cout<<ans<<endl;
    cout<< "Number of Unique Elements ";
    for(int i = 0; i < ans; i ++)
        cout<<nums[i]<<" ";
    return 0;
}