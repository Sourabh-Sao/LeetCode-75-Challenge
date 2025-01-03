#include<bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         int max_candies = *std::max_element(candies.begin(), candies.end());
    std::vector<bool> result(candies.size()); 

    for (int i = 0; i < candies.size(); ++i) {
        result[i] = (candies[i] + extraCandies) >= max_candies;
    }

    return result;
    }

int main(){

     
    vector<int>candies = {2,3,5,1,3};
    int extraCandies = 3;
    vector<bool>ans=kidsWithCandies(candies,extraCandies);
    for(auto val:ans){
        cout<<val;
    }
    return 0;
}