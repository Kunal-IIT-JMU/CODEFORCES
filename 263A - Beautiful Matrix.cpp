//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int matrix[5][5];
    
    int ans;
    
    //taking input in the matrix
    for(int i =0; i<5 ; i++){
        for(int j =0; j<5; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                ans = abs(i-2) + abs(j-2);
            }
        }
    }
    cout << ans;
    return 0;
}
