#include<bits/stdc++.h>
using namespace std;


int maxOperations(vector<int>& nums, int k) {
    unordered_map<int, int> count;
    int operations = 0;

    for (int num : nums) {
        int complement = k - num;
        if (count[complement] > 0) { // Direct check if count > 0
            operations++;
            count[complement]--;
        } else {
            count[num]++;
        }
    }

    return operations;
}

int main(){
    vector<int> nums1 = {1, 2, 3, 4};
    int k1 = 5;
    cout << "Max operations for nums1: " << maxOperations(nums1, k1) << endl; 


    return 0;
}