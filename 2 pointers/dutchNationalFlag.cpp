//0's and 1's segrigaation 

#include<iostream>
using namespace std;


vector<int>dutchNationalFlag(vector<int>& arr){
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low ++;
            mid ++;
        }
        else if(arr[mid] == 1){
            mid ++;
        }
        else{
            swap(arr[mid], arr[high]);
            high --;
        }
    }
    return arr;
}

int main(){
    vector<int> arr = {2,0,2,1,1,0,0,0};
    vector<int> ans = dutchNationalFlag(arr);
    
    for(int x : ans){
        cout << x << " "; 
    }
}