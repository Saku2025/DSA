// Two Sum - II 
// LC - 167

#include<iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int>twoSum(vector<int>& numbers, int target){
    int n = numbers.size();
    int start = 0;
    int end = n - 1;

    while(start < end){
        int sum = numbers[start] + numbers[end];
        if(sum == target)
            return {start + 1, end + 1};
        else if(sum > target){
            end --;
        }
        else{
            start ++;
        }
    }
    return {};
}


int main(){
    vector<int> numbers = {2,3,4,6};
    int findSum = 6;
    vector<int> ans = twoSum(numbers, findSum);
    cout<< ans[0] << " " << ans[1] << endl;
    return 0;
}
