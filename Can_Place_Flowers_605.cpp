#include<bits/stdc++.h>
using namespace std;

 bool canPlaceFlowers(vector<int>& flowerbed, int n) {
       int count = 0;
    int size = flowerbed.size();

    for (int i = 0; i < size; ++i) {
        if (flowerbed[i] == 0) {
            // Combined check for boundary conditions and adjacent plots
            bool canPlant = true;
            if (i > 0 && flowerbed[i - 1] == 1) canPlant = false;
            if (i < size - 1 && flowerbed[i + 1] == 1) canPlant = false;

            if (canPlant) {
                flowerbed[i] = 1;
                count++;
                if (count >= n) return true;
                i++; // Skip the next plot as it's now occupied (key optimization)
            }
        }
    }
    return count >= n;
    }

int main(){
    vector<int> flowerbed={1,0,0,0,1};
    int n=1;
    cout<<canPlaceFlowers(flowerbed,n);
return 0;
}