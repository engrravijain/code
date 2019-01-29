# include <bits/stdc++.h>

using namespace std;

int main (void) {
    int t; cin >> t;
    while (t--) {
        int n, c; cin >> n >> c;
        int sum = 0;
        int elephants[n];
        for (int i=0; i<n; i++) {
            cin >> elephants[i];
            sum += elephants[i];
        }
        if (sum <= c) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}