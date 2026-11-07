
// Tripletes with smaller Sum
// GFG
//for each i move left and right 
#include<iostream>
using namespace std;


int countTriplets(int target, vector<int>& arr){
    sort(arr.begin(), arr.end());
    int count = 0;


    //take each i 
    for(int i = 0; i < arr.size(); i ++){
        int left = i + 1;
        int right = arr.size() - 1;


        // left and right
        while(left < right){
            int sum = arr[i] + arr[left] + arr[right];
            if(sum >= target)
                right --;
            else{
                if(sum < target)
                    count += (right - left);
                left ++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> arr = {-2, 0, 1, 3};
    int a = countTriplets(2, arr);
    cout << a<< endl;
    return 0;
}
