//How can unique of vector.
//unordered map

#include<bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<int , bool> vis;

    vector<int> v={2,2,1,1,3};

    for(auto u : v ) vis[u]=1;// n* log2(n)

    for(auto u : vis ) cout<<u.first<<" "<<u.second<<endl;

return 0;
}






