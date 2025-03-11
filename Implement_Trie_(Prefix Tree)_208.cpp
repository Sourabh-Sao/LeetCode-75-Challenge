bool isEnd;
    vector<Trie *> childs;
    Trie()
    {
        isEnd = false;
        childs.resize(26, NULL);
    }     

    void insert(string word) {
        Trie * root = this;
        for(int i=0;i<word.size();i++)
        {
            char first = word[i];
            int index = first-'a';

            if(root->childs[index] == NULL)
            {
                Trie * temp = new Trie();
                root->childs[index] = temp;
            }
            root = root->childs[index];
        }
        root->isEnd = true;
    }
    
    bool search(string word, bool isStartWith = false) {
        Trie * root = this;
        for(int i=0;i<word.size();i++)
        {
            char first = word[i];
            int index = first-'a';

            if(root->childs[index] == NULL)
            {
                return false;
            }
            root = root->childs[index];
        }
        return isStartWith == false ? root->isEnd : true;
    }
    
    // This function almost do same work as search.
    // No need to replicate code.
    bool startsWith(string prefix) {
        return search(prefix, true);
    }