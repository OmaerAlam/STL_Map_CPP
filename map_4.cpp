//for each loop iterator_1.

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<long long> v={1, 101202020929929, 2828393399390, 101202020929929,1};//index/key
    map<long long, int> cnt; //long long- index/key, int- value.

    for(auto u : v) cnt[u]++; //counting

    for(auto u : cnt ){
        cout<<u.first<<" "<<u.second<<endl; // pair list and sorted based on index value.
    }

return 0;
}



