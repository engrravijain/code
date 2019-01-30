#include <bits/stdc++.h>

bool isRainbow (int arr[], int n) {
    int i=0, j=n-1;
    if (arr[0] != 1)
        return false;
    for (i=0, j=n-1; i<j; i++, j--) 
    {
        if ( (arr[i] != arr[j]) || (arr[i+1]-arr[i] > 1) || (arr[i+1]-arr[i] < 0) || (arr[i] < 1) || (arr[i] > 7)) 
        {
            break;
        }
    }
    if (i<j || arr[i] != 7)
        return false;
    return true;   
}

int main () {
    int t; std::cin >> t;
    while (t--) 
    {
        int n; std::cin >> n;
        int *arr = new int[n]; int flag = 1;

        // series input
        for (int i=0; i<n; i++) 
            std::cin >> arr[i];
        if (isRainbow (arr, n)) 
            std::cout << "yes" << std::endl;
        else
            std::cout << "no" << std::endl;
    }
    return 0;
}