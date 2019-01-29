#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;
    while (t--) {
        int n,c,x,sum=0;
        cin >> n >> x;
        while (n--) {
            cin >> x;
            sum += x;
            if (sum > c) {
                sum = -1;
                break;
            }
        }
        if (sum == -1)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}