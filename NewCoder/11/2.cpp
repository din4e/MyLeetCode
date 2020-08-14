#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    /**
     * 
     * @param str string字符串 初始字符串
     * @return string字符串
     */
    string solve(string str) {
        // write code here
        string s;
        for(auto c:str){
            if(s.empty()) s+=c;
            else if(c=='0') {
                if (s.back()=='0') {
                    s.back()='1';
                    if(s.size()>1&s[s.size()-2]=='1'){
                        s.pop_back();s.pop_back();
                    }
                }
                else s+=c;
            }
            else{ // 1
                if(s.back()=='1'){
                    s.pop_back();
                }else s+=c;
            }
            if(s.size()>2) 
            cout<<s<<"\n";
        }
        return s;
    }
};

int main(){

    Solution sol;
    cout<<sol.solve("00110001");
    return 0;
}