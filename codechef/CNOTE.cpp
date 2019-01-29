#include <bits/stdc++.h>

using namespace std; 

int main () 
{
    /*
        X -> pages req for poetry
        Y -> pages present
        N -> number of notebooks
        K -> rubles with chef
        pi -> pages in notebook i
        ci -> rubles for notebook i
    */
    int t; cin >> t;
    while (t--) {
        int x, y, k, n; cin >> x >> y >> k >> n;
        int pi, ci;
        int pages_required = x-y;
        while (n--) {
            cin >> pi >> ci;
            if (pi >= pages_required && ci <= k)
                k = -1;    
        }
        if (k==-1)
            cout << "LuckyChef" << endl;
        else
            cout << "UnluckyChef" << endl;
    }
    return 0;
}