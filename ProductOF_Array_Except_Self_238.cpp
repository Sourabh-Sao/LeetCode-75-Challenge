#include<iostream>
#include<vector>
using namespace std;

// optimized approach
vector<int>productExceptSelf(vector<int>& nums){
    int n=nums.size();
    vector<int>ans(n,1);
    // prefix=> ans
    for (int i = 1; i < n; i++)
    {
        ans[i]=ans[i-1]*nums[i-1];
    }

    // suffix ko nikal k direct multiply ke de rhe h 
    int suffix=1;
    for (int i = n-2; i >=0 ; i--)
    {
        suffix*=nums[i+1]; //calculating suffix 
        ans[i]*=suffix;    //directly multiplying suffix with ans
    }
    return ans;
}

int main(){
    vector<int> arr={1,2,3,4};
    // int n=arr.size();
    vector<int>ans=productExceptSelf(arr);
    for(int val : ans){
        cout<<val<<" ";
    }
    // vbfyusgbviusenugivnse iuvsiduvbse hgsunvsvd
    return 0;
}
