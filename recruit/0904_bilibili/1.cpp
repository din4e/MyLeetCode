#include <bits/stdc++.h>
using namespace std;
int GetMaxConsecutiveOnes(vector<int>& arr, int k) {
    int n=arr.size();
    vector<int> v;
    int sign,cnt=1,res=0;
    if(arr[0]==0) sign=-1;
    else sign=1;
    for(int i=1;i<n;++i){
        if(arr[i]==arr[i-1]) ++cnt;
        else{
            res=max(res,cnt*sign);
            v.push_back(cnt*sign);
            if(arr[i]==0) sign=-1;
            else sign=1;
            cnt=1;
        }
    }
    if(n>=2&&arr[n-1]==arr[n-2]){
        v.push_back(cnt*sign);
        res=max(res,cnt*sign);
    }
    // for(auto it:v) cout<<it<<" ";
    int i;
    if(v[0]>0) i=1;
    else i=0;
    for(;i<v.size();i+=2){
        int sum=0,l=0,r=0;
        if(i-1>=0) l=v[i-1];
        if(i+1<v.size()) r=v[i+1];
        if(k>=-v[i]) sum=l+r-v[i];
        else sum=k+max(l,r);
        cout<<v[i]<<" "<<l<<" "<<r<<" "<<sum<<"\n";
        res=max(res,sum);
    }
    return res;
}
int main(){
    vector<int> v={0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k=3;
    cout<<GetMaxConsecutiveOnes(v,k);
    return 0;
}