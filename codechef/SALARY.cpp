#include <bits/stdc++.h>

int main () 
{
    int t; std::cin >> t;
    while (t--)
    {
        int n; std::cin >> n;
        int *arr = new int[n];
        for (int i=0; i<n; i++)
            std::cin >> arr[i];
        int sum=0, smallest=arr[0];
        for (int i=0; i<n; i++) {
            sum += arr[i];
            if (arr[i] < smallest)
                smallest = arr[i];
        }
        std::cout << sum - (n * smallest) << std::endl;
    }
    return 0;
}