//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t ;
    cin >> t;
    for(int i =0; i<t; i++){
        int n;
        cin >> n;
        int arr[n];
        for(int j =0; j<n; j++){
            cin >> arr[j];
        }
        int m = *min_element(arr,arr+n);
        int ans = 0;
        for(int k =0; k<n; k++){
            ans = ans + arr[k] - m;
        }
        cout << ans << endl;
    }
    return 0;
}
