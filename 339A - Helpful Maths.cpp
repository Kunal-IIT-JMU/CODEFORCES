//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    
    vector <char> nums;
    
    for(int i =0; i< s.length(); i = i+2){
        nums.push_back(s[i]);
    }
    
    sort(nums.begin(),nums.end());
    
    //printing the string
    for(int i =0; i<nums.size(); i++){
        cout << nums[i] ;
        if(i != nums.size()-1){
            cout << '+';
        }
    }
    ;
    return 0;
}
