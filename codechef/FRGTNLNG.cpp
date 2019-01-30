#include <bits/stdc++.h>

int main () {
    int t; std::cin >> t;
    while (t--) {
        std::vector <std::string> forgotten;
        std::set <std::string> latest;
        std::string s;
        int n, k; std::cin >>n >> k;
        while (n--) {
            std::cin >> s;
            forgotten.push_back(s);
        }
        while (k--) {
            std::cin >> n;
            while (n--) {
                std::cin >> s;
                latest.insert (s);
            }
        }
        for (auto i=forgotten.begin(); i!=forgotten.end(); i++) {
            if (!(latest.count(*i) == 0))
                std::cout << "YES ";
            else
                std::cout << "NO ";
        }
        std::cout << std::endl;
    }
    return 0;
}