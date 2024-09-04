//Frequency

#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<long long> v={1, 101202020929929, 2828393399390, 101202020929929};
    map<long long, int> cnt; //long long- index/key, int- value.

    for(int i=0;i<v.size();i++){
        cnt[v[i]]++; //counting indexing number.
    }

   cout<<cnt[101202020929929]<<endl;

return 0;
}


