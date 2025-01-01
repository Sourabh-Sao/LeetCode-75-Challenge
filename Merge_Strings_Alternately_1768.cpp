// string

#include <bits/stdc++.h>
using namespace std;

string mergeAlternately(string word1, string word2)
{
    string merged;
    merged.reserve(word1.size() + word2.size()); // Reserve space for better performance

    for (size_t i = 0; i < max(word1.size(), word2.size()); ++i)
    {
        if (i < word1.size())
            merged += word1[i];
        if (i < word2.size())
            merged += word2[i];
    }

    return merged;
}

int main()
{
    string word1 = "abc", word2 = "pqr";
    cout<<mergeAlternately(word1,word2);

}