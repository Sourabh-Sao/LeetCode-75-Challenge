#include<bits/stdc++.h>
using namespace std;


int longestOnes(vector<int>& nums, int k) {
    int left = 0;
    int right = 0;
    int zeroCount = 0;
    int maxOnes = 0;

    while (right < nums.size()) {
        if (nums[right] == 0) {
            zeroCount++;
        }

        while (zeroCount > k) {
            if (nums[left] == 0) {
                zeroCount--;
            }
            left++;
        }

        maxOnes = max(maxOnes, right - left + 1);
        right++;
    }

    return maxOnes;
}

int main(){

    vector<int>arr={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;
    cout<<longestOnes(arr,k);

    return 0;
}