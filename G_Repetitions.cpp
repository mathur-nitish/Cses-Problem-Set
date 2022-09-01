#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin>>s;
    int occurance=1,best=0;

    for (int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            occurance++;
        }
        else{
            best=max(best,occurance);
            occurance=1;
        }

    }
    
    cout<<best<<endl;


    
    return 0;
}
