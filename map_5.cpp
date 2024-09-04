//for each loop iterator_2.
//Time complexity- bog o(log2(n))
#include<bits/stdc++.h>
using namespace std;

int main(){

    map<string, int> id;//string- index/key, int- value.

    id["omaer"] = 1;
    id["alam"] = 3;
    id["md"] = 7;
    id["mina"] = 9;

    for(auto u : id ) cout<<u.first<<" "<<u.second<<endl;//list pair and sorted based on luxiography smallest.

return 0;
}




