// 3 Sum 
// LC -  15

#include<iostream>
using namespace std;


// vector<vector<int>> threeSum(vector<int>& numbers){
//     vector<vector<int>> res;

//     int n = numbers.size();
//     sort(numbers.begin(), numbers.end());

//     for(int i = 0; i < n - 2; i ++){
//         //atlest 2 value in the array 
//         if(i > 0 && numbers[i] == numbers[i - 1])
//             continue;
        
//         int left = i + 1;
//         int right = n - 1;
//         // int sum = -1 * numbers[i];

//         while(left < right){
//             int s = numbers[i] + numbers[right] + numbers[left];
//             if(s == 0){
//                 res.push_back({numbers[i], numbers[left], numbers[right]});
//                 left ++;
//                 right --;

//                 while(left < n && numbers[left] == numbers[left - 1])
//                     left ++;
//                 while (right >= 0 && numbers[right] == numbers[right + 1])
//                 {
//                     right --;
//                 }
//             }
//            else if(s < 0)
//                 left ++;
//            else{
//                 right --;
//             }
//         }
//     }
//     return res;
// }

vector<vector<int>>threeSum(vector<int>& numbers){
    vector<vector<int>> res;
    int n = numbers.size();
    sort(numbers.begin(), numbers.end());

    for(int i = 0; i < n - 2; i ++){
        if(i > 0 && numbers[i] == numbers[i - 1])
        continue;
    
        int left = i + 1;
        int right = n - 1;

        while(left < right){
            int s = numbers[i] + numbers[left] + numbers[right];
            if(s == 0){
                res.push_back({numbers[i], numbers[left], numbers[right]});
                left ++;
                right --;

                while(left < n && numbers[left] == numbers[left - 1])
                    left ++;
                while(right >= 0 && numbers[right] == numbers[right + 1])
                    right --;
            }
            else if(s < 0)
                left ++;
            else
                right --;
        }
    }
    return res;
}




int main(){
    vector<int> numbers = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = threeSum(numbers);

    for(auto x : ans){
            for(auto y : x){
                cout<< y <<" ";
            }
        cout<<" ------ "<<endl;
    }
    return 0;
}