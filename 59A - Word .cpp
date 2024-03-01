//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int up=0,low=0;
    cin >> s;
    for(int i =0; i< s.length(); i++){
        if(isupper(s[i])){
            up++;
        }
        else{
            low++;
        }
    }
    
    if(up > low){
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    else{
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    cout << s;
    return 0;
}
