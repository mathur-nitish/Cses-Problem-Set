#include <iostream>
#include<vector>
using namespace std;
#define ll long long
#define loop for(ll i=0;i<n;i++)

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    int n;
    cin>>n;
    vector <ll> v;


    
    if(n==1){
        cout<<'1'<<endl;
    }
    else if(n<=3 && n!=1){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        for (ll i=2;i<n+1;i+=2){
            v.push_back(i);
        }
        for (ll i=1;i<n+1;i+=2){
            v.push_back(i);
        }
    }

    for(auto x:v){
        cout<<x<<' ';
    }
    
    
    return 0;
}