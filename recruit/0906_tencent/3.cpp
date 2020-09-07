#include <bits/stdc++.h>
using namespace std;
int main(){
    char*ss="hello,world";
    char*dd=NULL;
    int n=strlen(ss);
    cout<<n<<"\n";
    dd=(char*)malloc(n+1);
    char* d=dd;
    char*s =ss+n-1;
    while(n--!=0){
        (*d++)=(*s--);
    }
    *d='\0';
    printf("%s",dd);
    return 0;
}