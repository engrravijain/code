#include <bits/stdc++.h>

# define ll long long int

bool nextPermutation (std::vector <int> &v)
{
    int i = v.size()-1;
    while(i>0 && v[i-1] >= v[i])
        i--;
    // if already the largst permutation
    if (i <= 0)
        return false;
    
    int j = v.size()-1;
    while (v[j] <= v[i-1])
        j--;
    
    // swap pivot and smallest of suffix greaer than pivot
    auto temp = v[i-1];
    v[i-1] = v[j];
    v[j] = temp;

    // reverse the suffix
    j = v.size()-1;
    while (i<j)
    {
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    // for (auto y: v) std::cout << y << " ";
    return true;
}

int main ()
{
    int t; std::cin >> t;
    while (t--)
    {
        ll n; std::cin >> n;
        int x;
        std::vector <int> v;
        for (ll i=0; i<n; i++)
        {
            std::cin >> x;
            v.push_back (x);
        }
        if (nextPermutation(v))
        {
            for (auto i:v) 
            {
                std::cout << i;
            }        
        }
        else
        {
            std::cout << -1;
        }
        std::cout << "\n";
        
    }
    return 0;
}