#include <bits/stdc++.h>

int main ()
{
    int t; std::cin >> t;
    while (t--)
    {
        int n; std::cin>>n;
        int i=0; 
        int *hash = new int[26];
        while (i<n)
        {
            char *str;
            std::cin >> str;
            int j=0;
            // int *hash_temp = new int[26];
            while (str[j])
            {
                // std::cout << str[j] << " \n";
                // if (hash_temp[str[j]-'a'] == 0)
                // {
                //     hash_temp[str[j]-'a'] = 1;
                    hash[str[j]-'a'] += (i+1);
                // }
                j++;
            }
            i++;
        }
        std::cout << "Hash\n";
        for (int i=0; i<26; i++)
            std::cout << hash[i] << " ";
        std::cout << "\n";
    }
    return 0;
}