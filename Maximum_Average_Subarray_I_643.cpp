#include<bits/stdc++.h>

using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    int n = nums.size();
    if (n < k || k <= 0) {
        return 0.0; // Handle invalid input
    }

    // Calculate the sum of the first k elements
    double currentSum = 0;
    for (int i = 0; i < k; ++i) {
        currentSum += nums[i];
    }

    // Initialize the maximum sum
    double maxSum = currentSum;

    // Slide the window and update the maximum sum
    for (int i = k; i < n; ++i) {
        currentSum += nums[i] - nums[i - k];
        maxSum = max(maxSum, currentSum);
    }

    // Calculate and return the average
    return maxSum / k;
}

int main() {
    // Example usage
    vector<int> nums1 = {1, 12, -5, -6, 50, 3};
    int k1 = 4;
    cout << fixed << setprecision(5) << findMaxAverage(nums1, k1) << endl; // Output: 12.75000

    vector<int> nums2 = {5};
    int k2 = 1;
    cout << fixed << setprecision(5) << findMaxAverage(nums2, k2) << endl; // Output: 5.00000

     vector<int> nums3 = {0,4,0,3,2};
    int k3 = 1;
    cout << fixed << setprecision(5) << findMaxAverage(nums3, k3) << endl; // Output: 4.00000

    return 0;
}