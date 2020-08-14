#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    /**
     * 
     * @param n long长整型 
     * @return int整型
     */
    int Numberofoperations(long long n) {
        // write code here
        unordered_map<long long,long long> m;
        int res=0;
        while(n!=0&&!m[n]){
            ++m[n];
            if((n&1)==1){
                n-=3;++res;
            }else{
                n>>=1;++res;
            }
        }
        return n==0?res:-1;
    }
};

int main(){
    long long n;
    cin>>n;
    Solution sol;
    cout<<sol.Numberofoperations(n);
    return 0;
}