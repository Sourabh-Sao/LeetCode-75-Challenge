#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& nums) {
        int left = 0, maxLength = 0, zeroCount = 0;

        for (int right = 0; right < nums.size(); ++right) {
            if (nums[right] == 0) {
                zeroCount++;
            }

            while (zeroCount > 1) {
                if (nums[left] == 0) {
                    zeroCount--;
                }
                left++;
            }

            maxLength = max(maxLength, right - left);
        }

        return maxLength;
    }

int main(){
    vector<int>arr={0,1,1,1,0,1,1,0,1};
    cout<<longestSubarray(arr);

    return 0;
}