// Max Sum Subarray of size K
// GFG 

#include <iostream>
using namespace std;

int maxSubarraySum(vector<int>& arr, int k){
    int len = arr.size();

    int low = 0;
    int high = k - 1;
    int res = INT_MIN;
    int sum = 0;
    
    for(int i = 0; i <= high; i ++){
        sum += arr[i];
    }
    while(high < len){
        res = max(res, sum);
        low ++;
        high ++;

        if(high == len)
            break;
        sum = sum - arr[low-1] + arr[high];
    }
    return res;
}
int main(){
    vector<int> number = {100, 200, 300, 400};
    int target = 700;
    int k = 2;
    int ans = maxSubarraySum(number, k);
    cout << ans << endl;
}