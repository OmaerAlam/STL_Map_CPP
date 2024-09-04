//Mapping Declaration_2

#include<bits/stdc++.h>
using namespace std;

int main(){

    map<string,string>gender; //string- index/key, string- value.

    gender["omaer"]="male";
    gender["alam"]="male";
    gender["mina"]="female";

    cout<<gender["alam"]<<" "<<gender["mina"]<<" "<<gender["omaer"]<<endl;

return 0;
}


