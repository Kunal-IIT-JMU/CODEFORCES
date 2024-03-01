//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

bool check(string year){
    set <int> year1 (year.begin(),year.end());
    if(year1.size() == 4){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int year;
    cin >> year;
    int ans = year + 1;
    while(check(to_string(ans)) == false){
        ans = ans + 1;
    }
    cout << ans;
    return 0;
}
