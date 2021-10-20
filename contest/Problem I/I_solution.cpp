#include<bits/stdc++.h>
using namespace std;

bool equal(string a,string b){
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]) return(false);
    }
    return(true);
}
int main(){
    freopen("cipher.in", "r", stdin);
    string old,n;
    getline (cin,old);
    getline (cin,n);
    int l=n.size();
    string s="";
    for(int i=0;i<l;i++){
        if(n[i]!=' '){
            int y=old[i]-n[i];
            if(y<0) y=26+y;
            s+=char('a'+y);
        }
    }
    string ans;
    for(int i=1;i<=s.size();i++){
        string candidate=s.substr(0,i);
        int flag=0;
        for(int j=i;j<s.size();j+=i){
            string k=s.substr(j,i);
            if(k.size()==i){
                if(!equal(k,candidate)){
                    flag=1;
                }
            }
            else{
                for(int c=0;c<k.size();c++){
                    if(k[c]!=candidate[c]) {
                        flag=1;
                    }
                }
            }
        }
        if(flag==0){
            ans=candidate;
            break;
        }
    }
    cout<<ans<<endl;

    return(0);
}