#include <bits/stdc++.h>
using namespace std;

string removeStars(string s)
{
    string c = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '*')
        {
            c.pop_back();
        }
        else
        {
            c += s[i];
        }
    }
    return c;
}

int main()
{
    string s = "leet**cod*e";
    cout << removeStars(s) << endl;
    return 0;
}