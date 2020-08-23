#include<bits/stdc++.h> // 15
using namespace std;
int main(){
    string s;
    int k;
    cin>>s;
    cin>>k;
    int n=s.size();
    priority_queue<string,vector<string>,less<string> > q;
    unordered_map<string,int> m;
    for(int i=0;i<n;++i){
        for(int j=i+1;j<=n;++j){
            string sub=s.substr(i,j-i);
            if(m[sub]==0){
                q.push(sub);
                if(q.size()>k) q.pop();     
                ++m[sub];         
            }
            //cout<<sub<<" "<<q.top()<<"\n";
        }
    }
    cout<<q.top();
}