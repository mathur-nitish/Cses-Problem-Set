#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop for(ll i=0;i<n;i++)

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    ll n;
    cin>>n;
    ll  count=0;
    ll array[n];

    loop{
        cin>>array[i];
    }

    loop{
        if(array[i]>array[i+1]){
        count+=abs(array[i]-array[i+1]);
        array[i+1]=array[i];
        }
    }

    cout<<count<<endl;
    
    return 0;
}
