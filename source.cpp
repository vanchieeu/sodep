#include<bits/stdc++.h>
using namespace std;

bool check(int a){
    int sum=0,res=0,temp=a;
    while(a!=0){
        res = res*10 + a%10;
        sum+=a%10;
        a/=10;
    }
    return (res==temp && sum%10==0) ? true : false;
}

void solve(){
    int l,r;
    while(cin >> l >> r){
        int res=0;
    for(int i =l;i<=r;i++)
    if(check(i)) 
        res++;
    cout<<res<<'\n';
}
}

int main()
{
   srand(time(NULL));
    ios_base::sync_with_stdio(false); cin.tie(0);
    solve();
    return 0;
}