#include <bits/stdc++.h>
using namespace std;

bool closeStrings(string word1, string word2)
{
    // condition1 : we need the size of both strings to be same
    // condition2 : we need freq of char in strings to be same, irrespective of the order
    // if above 2 conditions are satisfied then just swapping will get us the word2 from word1

    if (word1.size() != word2.size())
        return false;

    set<char> s1, s2;
    vector<int> freq1(26, 0), freq2(26, 0);

    for (int i = 0; i < word1.size(); i++)
    {
        s1.insert(word1[i]);
        s2.insert(word2[i]);

        freq1[word1[i] - 'a']++;
        freq2[word2[i] - 'a']++;
    }

    sort(freq1.begin(), freq1.end());
    sort(freq2.begin(), freq2.end());

    if (s1 == s2 && freq1 == freq2)
        return true;
    else
        return false;
}

// Approach 2
// bool closeStrings(string word1, string word2)
// {
//     vector<int> unique1(26, 0), unique2(26, 0);
//     vector<int> freq1(26, 0), freq2(26, 0);

//     for (char c1 : word1)
//     {
//         unique1[c1 - 'a'] = 1;
//         freq1[c1 - 'a']++;
//     }

//     for (char c2 : word2)
//     {
//         unique2[c2 - 'a'] = 1;
//         freq2[c2 - 'a']++;
//     }

//     if (unique1 != unique2)
//         return false;
//     sort(freq1.begin(), freq1.end());
//     sort(freq2.begin(), freq2.end());

//     return freq1 == freq2;
// }

int main()
{
    string word1 = "abc", word2 = "bca";
    cout << closeStrings(word1, word2) << endl;
    return 0;
}