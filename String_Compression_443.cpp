#include<bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size();
    if (n == 0) {
        return 0;
    }

    int write_index = 0;
    int read_index = 0;

    while (read_index < n) {
        char current_char = chars[read_index];
        int count = 0;

        while (read_index < n && chars[read_index] == current_char) {
            read_index++;
            count++;
        }

        chars[write_index++] = current_char;

        if (count > 1) {
            string count_str = to_string(count);
            for (char c : count_str) {
                chars[write_index++] = c;
            }
        }
    }

    return write_index;
}

int main() {
    // Test cases
    vector<vector<char>> test_cases = {
        {'a', 'a', 'b', 'b', 'c', 'c', 'c'},
        {'a'},
        {'a','b','b','b','b','b','b','b','b','b','b','b'},
        {},
        {'a','a','a','b','b','a','a'}
    };

    for (int i = 0; i < test_cases.size(); ++i) {
        vector<char> chars = test_cases[i];
        int new_length = compress(chars);

        cout << "Test Case " << i + 1 << ": ";
        cout << "[";
        for (int j = 0; j < new_length; ++j) {
            cout << "'" << chars[j] << "'";
            if (j < new_length - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
        cout << "New Length: " << new_length << endl << endl;
    }

    return 0;
}