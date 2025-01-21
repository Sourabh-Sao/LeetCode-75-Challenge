#include <bits/stdc++.h>
using namespace std;

// approach 1
bool uniqueOccurrences(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    vector<int> v;

    for (int i = 0; i < arr.size(); i++)
    {
        int cnt = 1;

        // Count occurrences of the current element
        while (i + 1 < arr.size() && arr[i] == arr[i + 1])
        {
            cnt++;
            i++;
        }

        v.push_back(cnt);
    }

    sort(v.begin(), v.end());

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
        {
            return false;
        }
    }

    return true;
}

// approach 2
// bool uniqueOccurrences(vector<int> &arr)
// {
//     map<int, int> mp; // Step 1: To count the frequency of each element
//     for (int ele : arr)
//         mp[ele]++;

//     set<int> s; // Step 2: To store unique frequencies
//     for (auto pair : mp)
//         s.insert(pair.second);

//     // Step 3: Compare sizes of the map and the set
//     return mp.size() == s.size();
// }

int main()
{   
    vector<int>arr={1,2,2,1,1,3};
    cout<<uniqueOccurrences(arr);

    return 0;
}