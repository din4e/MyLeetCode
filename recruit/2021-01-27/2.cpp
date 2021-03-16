#include<bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>> v;
void func(vector<int> &res,int a){ // 对每一层进行递归
    if(a==n) { // 跳出条件 
        for(auto &it:res)  cout<<it<<" ";
        cout<<"\n";
        return ;
    }
    for(int i=0;i<v[a].size();i++){ // 对a层的数据进行递归
        res[a]=v[a][i];
        func(res,a+1);
    }
}
int main(){
    n=4;
    vector<int> res(n);
    v.resize(n);
    v[0]={1,3,12,3};
    v[1]={4,5,6};
    v[2]={7,8};
    v[3]={1};
    func(res,0);
    return 0;
}