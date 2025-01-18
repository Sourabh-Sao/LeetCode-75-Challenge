#include<bits/stdc++.h>
using namespace std;

int largestAltitude(vector<int>& gain) {
    int altitude = 0;
    int maxAltitude = 0;

    for (int i = 0; i < gain.size(); ++i) {
        altitude += gain[i];
        maxAltitude = std::max(maxAltitude, altitude);
    }

    return maxAltitude;
}

int main(){
    vector<int> gain = {-5, 1, 5, 0, -7};
    cout << largestAltitude(gain) << endl;
    return 0;
}