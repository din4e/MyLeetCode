#include<bits/stdc++.h>
using namespace std;
inline bool yes(char c){
    return ('a'<=c&&c<='z')||('A'<=c&&c<='Z');
}
int main(){
    int n;
    cin>>n;getchar();
    int res=0;
    string s;
    while(n--){
        //getline(cin,s);
        cin>>s; //100.
        //cout<<s<<'\n';
        if(s.size()<=10){
            res++;
            for(auto& c:s){
                if(!yes(c)){
                    res--;break;
                }
            }
        }
    }
    cout<<res;
    return 0;
}