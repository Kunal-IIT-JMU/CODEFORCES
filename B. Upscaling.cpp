//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int r;
    cin >> r;
    for(int i =0; i<r; i++){
        int n;
        cin >> n;
        int k =1;
        while(k <= n){
            for(int l =0; l<n; l++){
                if(k%2 != 0){
                    if(l%2 == 0)
                    cout << "##";
                    else
                    cout << "..";
                }
                else{
                    if(l%2 == 0){
                        cout << "..";
                    }
                    else{
                        cout << "##";
                    }
                }
            }
            cout << endl;
            for(int l =0; l<n; l++){
                if(k%2 != 0){
                    if(l%2 == 0)
                    cout << "##";
                    else
                    cout << "..";
                }
                else{
                    if(l%2 == 0){
                        cout << "..";
                    }
                    else{
                        cout << "##";
                    }
                }
            }
            cout << endl;
            k++;
        }
    }
    return 0;
}
