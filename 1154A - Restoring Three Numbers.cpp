//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 4;
    int arr[n];
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr,arr + n);
    cout << arr[n - 1] - arr[0] << " " <<  arr[n - 1] - arr[1] << " " << arr[n - 1] - arr[2];
    return 0;
}
