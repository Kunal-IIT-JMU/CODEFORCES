//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    //taking input
    int max = INT_MIN;
    int sum = 0;
    for(int i = 0; i<n; i++){
        int k;
        cin >> k;
        sum = sum + k;
        if(k>max){
            max = k;
        }
    }
    cout << max*n - sum;
    return 0;
}
