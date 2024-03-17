#include <iostream>
using namespace std;

int main() {
    int r;
    cin >> r;
    for (int i = 0; i < r; i++) {
        int n;
        cin >> n;
        int ans = 1;
        int count = 0;
        while (count < n) {
            if (ans % 3 != 0 && ans % 10 != 3) {
                count++;
            }
            ans++;
        }
        cout << ans - 1 << endl;
    }
    return 0;
}
