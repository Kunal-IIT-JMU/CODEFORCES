//Kunal Sharma IIT JAMMU
#include <bits/stdc++.h>

using namespace std;

int main(){
    int s1,s2,s3,s4;
    cin >> s1 >> s2 >> s3 >> s4;
    int arr[] = {s1,s2,s3,s4};
    set <int> nums(arr,arr + 4);
    cout << 4 - nums.size();
    return 0;
}
