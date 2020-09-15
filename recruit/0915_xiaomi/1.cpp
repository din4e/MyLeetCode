#include<bits/stdc++.h>
using namespace std;
string s,res;
int main(){
    while(cin>>s){
        if (!s.empty()){
            // cout<<s<<"\n";
            stack<char> sk;
            int f=true;
            for(auto &c:s){
                if(c=='('||c=='['||c=='{') sk.push(c);
                else{
                    if(sk.empty()) f=false;
                    else{
                        switch (c){
                        case ')':
                            if(sk.top()=='(') sk.pop();
                            else f=false;
                            break;
                        case ']':
                            if(sk.top()=='[') sk.pop();
                            else f=false;
                            break;
                        case '}':
                            if(sk.top()=='{') sk.pop();
                            else f=false;             
                            break;
                        }                        
                    }
                    if(!f) break;
                }
            }
            if(f&&sk.empty()) cout<<"true\n";
            else cout<<"false\n";
        }
    }
    return 0;
}