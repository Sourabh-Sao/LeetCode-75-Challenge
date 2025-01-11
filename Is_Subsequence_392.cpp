#include<bits/stdc++.h>
using namespace std;

using namespace std;

bool isSubsequence(string s, string t) {
    int s_ptr = 0;
    int t_ptr = 0;

    while (s_ptr < s.length() && t_ptr < t.length()) {
        if (s[s_ptr] == t[t_ptr]) {
            s_ptr++;
        }
        t_ptr++;
    }

    return s_ptr == s.length();
}

int main() {
    // Test cases
    string s1 = "abc";
    string t1 = "ahbgdc";
    cout << "\"" << s1 << "\" is a subsequence of \"" << t1 << "\": " << isSubsequence(s1, t1) << endl; // Output: true

    string s2 = "axc";
    string t2 = "ahbgdc";
    cout << "\"" << s2 << "\" is a subsequence of \"" << t2 << "\": " << isSubsequence(s2, t2) << endl; // Output: false

    string s3 = "";
    string t3 = "ahbgdc";
    cout << "\"" << s3 << "\" is a subsequence of \"" << t3 << "\": " << isSubsequence(s3, t3) << endl; // Output: true (empty string is always a subsequence)

    string s4 = "abc";
    string t4 = "";
    cout << "\"" << s4 << "\" is a subsequence of \"" << t4 << "\": " << isSubsequence(s4, t4) << endl; // Output: false

    string s5 = "aaaaaa";
    string t5 = "bbaaaa";
    cout << "\"" << s5 << "\" is a subsequence of \"" << t5 << "\": " << isSubsequence(s5, t5) << endl;// Output: true

     string s6 = "acb";
    string t6 = "ahbgdc";
    cout << "\"" << s6 << "\" is a subsequence of \"" << t6 << "\": " << isSubsequence(s6, t6) << endl; // Output: false

    return 0;
}