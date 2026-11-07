

#include<iostream>
using namespace std;

int fun(int x){
    int sum = 0;
    while(x > 0){
        int d = x % 10;
        x = x / 10;
        sum = sum + (d * d);
    }
    return sum;
}

bool isHappy(int x){
    int slow = x;
    int fast = x;

    while(fast != 1){
        slow = fun(slow);
        fast = fun(fast);
        fast = fun(fast);

        if(slow == fast && fast != 1){
            return false;
        }
    }
    return true;
}

int main(){
    int nums = 19;
    if(isHappy(nums)){
        cout<<nums <<" is Happy Number";
    }
    else{
        cout << nums <<" Not a happy Number";
    }
}