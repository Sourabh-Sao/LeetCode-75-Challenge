#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    stringstream ss(s);
    string word;
    vector<string> words;

    // Extract words, handling multiple spaces
    while (ss >> word)
    {
        words.push_back(word);
    }

    // Reverse the order of words
    reverse(words.begin(), words.end());

    // Build the reversed string with single spaces
    string reversed_s = "";
    for (size_t i = 0; i < words.size(); ++i)
    {
        reversed_s += words[i];
        if (i < words.size() - 1)
        {
            reversed_s += " ";
        }
    }

    return reversed_s;
}

int main()
{   
    string s = "the sky is blue";
    cout<<reverseWords(s);
    return 0;
}