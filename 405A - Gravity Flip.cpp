//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    //taking input in the array
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    //printing the output
    for(int i =0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}