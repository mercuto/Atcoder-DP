#include<bits/stdc++.h>
using namespace std;

typedef long long int   ll;
#define cases           int t;cin>>t;while(t--)
#define FIO             ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl            "\n"
#define scan(n)         scanf("%d",&n)
#define PI              3.1415926535897932384626433832795
#define int             ll
#define loop0           for(int i=0;i<n;i++)
#define loop1           for(int i=1;i<=n;i++)
#define inpar0(ar)      for(int i=0;i<n;i++)cin>>ar[i];
#define inpar1(ar)      for(int i=1;i<=n;i++)cin>>ar[i];
#define showar0(ar)     for(int i=0;i<n;i++)cout<<ar[i]<<" ";
#define showar1(ar)     for(int i=1;i<=n;i++)cout<<ar[i]<<" ";
#define manu            cout<<(checkerCounter++)<<endl;
int checkerCounter = 1;
int mod=1000000007;
int maxn=200001;
int binpow(int a,int b,int mod){int res=1;while(b>0){if(b%2){res=(res*a)%mod;b--;}a=(a*a)%mod;b/=2;}return res%mod;}
bool isPrime(int n){if(n==1)return false;for(int i=2;i*i<=n;i++){if(n%i==0)return false;}return true;}

signed main(){
    int n;cin>>n;
    int h[n];
    inpar0(h);
    int dp[n];
    for(int i=1;i<n;i++){
        dp[i]=INT_MAX;
    }
    dp[0]=0;
    for(int i=0;i<n-1;i++){
        if(i<n-2){
            dp[i+2]=min(dp[i]+abs(h[i+2]-h[i]),dp[i+2]);
        }
        dp[i+1]=min(dp[i]+abs(h[i+1]-h[i]),dp[i+1]);
    }
    cout<<dp[n-1];
}
