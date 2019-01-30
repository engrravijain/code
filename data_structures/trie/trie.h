# define ALFABET_SIZE 26
/**
 * HELP: trie node structure
 */
struct trie
{
    struct trie *childern[ALFABET_SIZE]; // max 25 childrens possible
    bool isEndOfWord; // true if word end
};

/**
 * HELP: creates a new trie node with all it children pointing to null
 */
struct trie *newNode (void)
{
    struct trie *temp = new trie;
    temp->isEndOfWord = false;
    for (int i=0; i<ALFABET_SIZE; i++)
        temp->childern[i] = NULL;
    return temp;
}

/**
 * inserts a string in the trie
 */
void insert (struct trie *root, std::string s)
{
    struct trie *temp = root;
    for (int i=0; i<s.length(); i++)
    {
        int index = s[i]-'a';
        if (!temp->childern[index])
            temp->childern[index] = newNode();
        temp = temp->childern[index];
    }
    temp->isEndOfWord = true;
}

/**
 * returns true if key present in trie
 */
bool search(struct trie *root, std::string s)
{
    struct trie *temp = root;
    for (int i=0; i<s.length(); i++)
    {
        int index = s[i]-'a';
        if (!temp->childern[index])
            return false;
        temp = temp->childern[index];
    }
    return (temp != NULL && temp->isEndOfWord);
}