#include<bits/stdc++.h>
using namespace std;


bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int maxVowels(string s, int k) {
    int n = s.length();
    if (n < k || k <= 0) {
        return 0; // Handle invalid input
    }

    int max_vowels = 0;
    int current_vowels = 0;

    // Calculate initial window
    for (int i = 0; i < k; ++i) {
        if (isVowel(s[i])) {
            current_vowels++;
        }
    }
    max_vowels = current_vowels;

    // Slide the window
    for (int i = k; i < n; ++i) {
        if (isVowel(s[i])) {
            current_vowels++;
        }
        if (isVowel(s[i - k])) {
            current_vowels--;
        }
        max_vowels = max(max_vowels, current_vowels);
    }

    return max_vowels;
}

int main() {
    string s1 = "abciiidef";
    int k1 = 3;
    cout << "Max vowels in substring of \"" << s1 << "\" with length " << k1 << ": " << maxVowels(s1, k1) << endl; // Output: 3

    string s2 = "aeiou";
    int k2 = 2;
    cout << "Max vowels in substring of \"" << s2 << "\" with length " << k2 << ": " << maxVowels(s2, k2) << endl; // Output: 2

    string s3 = "leetcode";
    int k3 = 3;
    cout << "Max vowels in substring of \"" << s3 << "\" with length " << k3 << ": " << maxVowels(s3, k3) << endl; // Output: 2

    string s4 = "tryhard";
    int k4 = 4;
    cout << "Max vowels in substring of \"" << s4 << "\" with length " << k4 << ": " << maxVowels(s4, k4) << endl; // Output: 1

    string s5 = "rhythms";
    int k5 = 4;
    cout << "Max vowels in substring of \"" << s5 << "\" with length " << k5 << ": " << maxVowels(s5, k5) << endl; // Output: 0

    return 0;
}