    int GetFragment(string s) {
        int n=s.size();
        if(n==0) return 0;
        if(n==1) return 1;
        long long res=0;
        int l=1,cnt=0;
        for(int i=1;i<n;++i){
            if(s[i]==s[i-1]) ++l;
            else{
                ++cnt;
                res+=l;
                l=1;
            }
        }
        if(n>=2&&s[n-1]==s[n-2]){
            ++cnt;
            res+=l;
        }
        return res/cnt;
    }

    int GetFragment(string s) {
        int n=s.size();
        if(n==0) return 0;
        if(n==1) return 1;
        int cnt=0;
        for(int i=1;i<n;++i){
            if(s[i]!=s[i-1]) ++cnt;
        }
        if(n>=2&&s[n-1]==s[n-2]) ++cnt;
        return long long(n)/long long(cnt);
    }


