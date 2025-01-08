#include<bits/stdc++.h>
using namespace std;


bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
    if (n < 3) {
        return false;
    }

    // Optimized approach using two variables to track the smallest and second smallest numbers.
    int min1 = INT_MAX;
    int min2 = INT_MAX;

    for (int num : nums) {
        if (num <= min1) {
            min1 = num; // Update the smallest number.
        } else if (num <= min2) {
            min2 = num; // Update the second smallest number.
        } else {
            return true; // Found a number greater than both min1 and min2, so a triplet exists.
        }
    }

    return false; 
}

int main(){
    vector<int>arr={1,2,3,4,5};
    cout<<increasingTriplet(arr);

    return 0;
}