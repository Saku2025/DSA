// Squares of a Sorted Array
// LC - 977

#include<iostream>
using namespace std;

vector<int> sortedSquares(vector<int>& numbers, int len){
    vector<int>pos;
    vector<int>neg;

    //segrigate
    for(int i = 0; i < len; i ++){
        if(numbers[i] >= 0){
            pos.push_back(numbers[i]);
        }
        else{
            neg.push_back(numbers[i]);
        }
    }

    //if 0 no of negative elements
    if(neg.size() == 0){
        for(int i = 0; i < len; i ++){
            numbers[i] = numbers[i] * numbers[i];
        }
        return numbers;
    }

    // if 0 no of posative elements
    if(pos.size() == 0){
        for(int i = 0; i < len; i ++){
            numbers[i] = numbers[i] * numbers[i];
        }
        reverse(numbers.begin(), numbers.end());
        return numbers;
    }

    // if Both 0 and 1 present 
    int n = pos.size();
    int m = neg.size();
    vector<int> res(n + m);
    int id = 0;
    int i = 0;
    int j = 0;

    for(int i = 0; i < n; i ++){
        pos[i] = pos[i] * pos[i];
    }
    for(int i = 0; i < m; i ++){
        neg[i] = neg[i] * neg[i];
    }
    reverse(neg.begin(), neg.end());

    while(i < n && j < m){
        if(pos[i] <= neg[j]){
            res[id] = pos[i];
            id ++;
            i ++;
        }
        else{
            res[id] = neg[j];
            j ++;
            id ++;
        }
    }
    while(i < n){
        res[id] = pos[i];
        id ++;
        i ++;
    }
    while(j < m){
        res[id] = neg[j];
        id ++;
        j ++;
    }
    return res;
}




// vector<int> sortedSquares(vector<int>& numbers, int len){
//     vector<int> pos;
//     vector<int> neg;

//     // Segrigated the negative and posative elements
//     for(int i = 0; i < len; i ++){
//         if(numbers[i] >= 0)
//             pos.push_back(numbers[i]);
//         else
//             neg.push_back(numbers[i]);
//     }

//     // if zero number of Negative element
//     if(neg.size() == 0){
//         for(int i = 0; i < len; i ++){
//             numbers[i] = numbers[i] * numbers[i];
//         }
//         return numbers;
//     }
    
//     // if zero number of posative Elements
//     if(pos.size() == 0){
//         for(int i = 0; i < len; i ++){
//             numbers[i] = numbers[i] * numbers[i];
//         }
//         reverse(numbers.begin(), numbers.end());
//         return numbers;
//     }

//     // If both Number are presents 
//     int pos_length = pos.size();
//     int neg_length = neg.size();

//     for(int i = 0; i < neg_length; i ++){
//         neg[i] = neg[i]* neg[i];
//     }
//     reverse(neg.begin(), neg.end());

//     for(int i = 0; i < pos_length; i ++){
//         pos[i] = pos[i] * pos[i];
//     }

//     int n = pos_length;
//     int m = neg_length;
//     vector<int> res(n + m);
//     int id = 0;
//     int j = 0;
//     int i = 0;

//     while(i < n && j < m){
//         if(pos[i] <= neg[j]){
//             res[id] = pos[i];
//             id ++;
//             i ++;
//         }
//         else{
//             res[id] = neg[j];
//             id ++;
//             j ++;
//         }
//     }
//     while(i < n){
//         res[id] = pos[i];
//         id ++;
//         i ++;
//     }
//     while (j < m)
//     {
//         res[id] = neg[j];
//         id ++;
//         j ++;
//     }
//     return res;
// }

int main(){
    vector<int> numbers = {-7,-3,2,3,11};
    int len = numbers.size();
    vector<int>ans = sortedSquares(numbers, len);

    for(auto x : ans)
        cout << x << " ";
    cout<<endl;
    return 0;
}

