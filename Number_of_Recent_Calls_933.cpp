#include<bits/stdc++.h>
using namespace std;

class RecentCounter {
    private:
    queue<int> q;
public:
    RecentCounter() {
    }
    
    int ping(int t)
    {
        q.push(t);
        while(!q.empty() && q.front() < (t - 3000))
        {
            q.pop();
        }

        return q.size();
    }
};
int main(){
    RecentCounter* obj = new RecentCounter();
    cout<<obj->ping(1)<<endl;
    cout<<obj->ping(100)<<endl;

    return 0;
}