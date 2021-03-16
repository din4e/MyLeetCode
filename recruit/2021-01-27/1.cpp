#include<bits/stdc++.h>
using namespace std;
vector<int> func(string s){
    int p1=0,p2=s.find(' ',0);
    vector<int> res;
    while(p2!=string::npos){
        res.push_back(stoi(s.substr(p1,p2-p1)));
        p1=p2+1;
        p2=s.find(' ',p1);
    }
    if(p2==s.size()) res.push_back(stoi(s.substr(p1,s.size()-p1)));
    return res;
}
int main(){
    auto a=func("1 2 3");
    for(auto it:a) cout<<it;
    return 0;
}