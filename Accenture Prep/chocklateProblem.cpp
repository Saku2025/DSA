


#include<iostream>
using namespace std;

int main(){
    vector<int> requirements = {1, 1, 2, 3};
    string c = "RGRGGGGRGGR";
    
    int pos = 0;
    int countStudent = 0;
   

for(int need = 0; need < requirements.size(); need ++){
        while(pos < c.size() && c[pos] == 'R')
            pos ++;

        int countG = 0;

        while(pos < c.size() && c[pos] == 'G'){
            countG ++;
            pos ++;
        }

        if(countG >= need){
            countStudent ++;
            pos -= (countG - need);
        }
        else{
            break;
        }
    }
    cout << countStudent<<endl;

    return 0;
}