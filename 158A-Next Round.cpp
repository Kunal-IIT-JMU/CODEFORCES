//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int k;
    cin>> k;
    
    //taking the input in the array
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    
    //checking the answer
    int count = 0;
    for(int i =0; i < n; i++){
        if(arr[i] >= arr[k-1] && arr[i]!= 0){
            count ++;
        }
    }
    cout << count ;
    return 0;
}
