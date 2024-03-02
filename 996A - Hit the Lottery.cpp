//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int amt;
    cin >> amt;
    int ans = 0;
    ans = ans + amt/100;
    amt = amt % 100;
    ans = ans + amt/20;
    amt = amt %20;
    ans = ans + amt/10;
    amt = amt %10;
    ans = ans + amt/5;
    amt = amt %5;
    ans = ans + amt/1;
    amt = amt %1;
    cout << ans;
    return 0;
}
