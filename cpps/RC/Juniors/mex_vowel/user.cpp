#include<bits/stdc++.h>
#define mp make_pair
#define f first
#define se second
#define pb push_back
#define ms memset
#define MOD 1000000007
#define sp fixed<<setprecision
#define sz sizeof
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
bool pr[1000007];
void sieve(){pr[0]=1;pr[1]=1;for(int i=2;i*i<(1000007);i++){for(int j=2*i;j<=1000007;j+=i){pr[j]=1;}}}
ll fpow(ll x,ll y){x=x%MOD;ll res=1;while(y){if(y&1)res=res*x;res%=MOD;y=y>>1;x=x*x;x%=MOD;}return res;}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll t;
	cin >> t;
	//t = 1;
	while(t--)
	{
		string s;
		cin>>s;
		map<char,ll>m;
		for(int i=0;i<s.size();i++)
		{
		    m[s[i]]++;
		}
		if(!m['a'])
		cout<<"a\n";
		else if(!m['e'])
		cout<<"e\n";
		 else if(!m['i'])
		cout<<"i\n";
		else if(!m['o'])
		cout<<"o\n";
		else if(!m['u'])
		cout<<"u\n";
		else
		cout<<"Perfect\n";
	}	

	
}
