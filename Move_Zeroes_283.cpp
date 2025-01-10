#include <bits/stdc++.h>
using namespace std;

void moveZeroToEnd(vector<int> &arr)
{
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main()
{
    // vector<int>arr={3,5,0,0,4};
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    // vector<int>arr={0,0};
    moveZeroToEnd(arr);
    for (auto val : arr)
    {
        cout << val << " ";
    }

    return 0;
}