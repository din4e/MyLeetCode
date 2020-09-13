#include<bits/stdc++.h>
using namespace std;
void func(string &s,int b,int e){
    //cout<<b<<" "<<e<<"\n";
    for(int i=b;i<(e-b)/2+b;++i){
        swap(s[i],s[e-1-(i-b)]);
        //cout<<i<<" "<<e-1-(b-i)<<"\n";
    }
}
int main(){
    int k,n,target;
    string s;
    cin>>k; getchar();
    getline(cin,s);
    n=s.size();
    int i=0;
    for(i=0;i<n;i+=k){
        if(i+k<n) func(s,i,i+k);
        else func(s,i,n);
    }
    cout<<s;
    return 0;
}