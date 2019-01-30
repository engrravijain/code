#include <bits/stdc++.h>
#include "trie.h"

int main () {
    std::string keys[] = {"the", "a", "the", "answer", "any", "by", "bye", "their" };
    int n = sizeof(keys)/sizeof(keys[0]);
    struct trie *root = newNode(); 
  
    // Construct trie 
    for (int i = 0; i < n; i++) 
        insert(root, keys[i]);

    // search if key is present
    search (root, "answer") ? std::cout << "YES\n" : std::cout << "NO\n"; 
    return 0;
}