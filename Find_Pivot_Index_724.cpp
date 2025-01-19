#include<bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) {
        return -1; // Handle empty array
    }

    vector<int> prefixSum(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefixSum[i + 1] = prefixSum[i] + nums[i];
    }

    for (int i = 0; i < n; ++i) {
        int leftSum = prefixSum[i];
        int rightSum = prefixSum[n] - prefixSum[i + 1];

        if (leftSum == rightSum) {
            return i;
        }
    }

    return -1;
}

int main() {
    // Test cases
    vector<vector<int>> testCases = {
        {1, 7, 3, 6, 5, 6},
        {1, 2, 3},
        {2, 1, -1},
        {}, // Empty array
        {-1,-1,-1,-1,-1,0},
        {-1,-1,-1,0,1,1}

    };

    vector<int> expectedOutputs = {3, -1, 0, -1, 5, 5};

    for (int i = 0; i < testCases.size(); ++i) {
        int result = pivotIndex(testCases[i]);
        if (result == expectedOutputs[i])
        {
            cout << "Test Case " << i + 1 << " Passed" << endl;
        }
        else
        {
            cout << "Test Case " << i + 1 << " Failed. Expected " << expectedOutputs[i] << ", Got " << result << endl;
        }
    }

    return 0;
}