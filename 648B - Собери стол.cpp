//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[2*n];
    for(int i=0; i<2*n; i++){
        cin >> arr[i];
    }
    sort(arr,arr + 2*n);
    for(int i =0; i<n; i++){
        cout << arr[i] << " " << arr[2*n-i-1] << endl;
    }
    return 0;
}
