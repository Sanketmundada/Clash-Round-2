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
#define x first
#define y second
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
bool pr[1000007];
void sieve(){pr[0]=1;pr[1]=1;for(int i=2;i*i<(1000007);i++){for(int j=2*i;j<=1000007;j+=i){pr[j]=1;}}}
ll fpow(ll x,ll y){x=x%MOD;ll res=1;while(y){if(y&1)res=res*x;res%=MOD;y=y>>1;x=x*x;x%=MOD;}return res;}
int main(){
	srand(time(0));
	//ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
	ll t = rand()%100000 + 1;
	cout << t << "\n";
	vector< pair< ll,pair<ll,ll> > >a;
	a.pb({3,{4,5}});
	a.pb({5,{12,13}});
	a.pb({8,{15,17}});
	a.pb({7, {24, 25}});
	a.pb({20, {21, 29}});
	a.pb({12, {35, 37}});
	a.pb({9, {40, 41}});
	a.pb({28, {45, 53}});
	a.pb({11, {60, 61}});
	a.pb({33, {56, 65}});
	a.pb({16, {63, 65}});
	a.pb({48, {55, 73}});
	a.pb({36, {77, 85}});
	a.pb({13, {84, 85}});
	a.pb({39, {80, 89}});
	a.pb({65, {72, 97}});
	a.pb({6,{8,10}});
	a.pb({9,{12,15}});
	a.pb({10,{24,26}});
	a.pb({50,{624,626}});
	a.pb({48,{286,290}});
	a.pb({45,{336,339}});
	ll n = a.size();
	while(t--)
	{
		ll type = rand()%2;
		if(type)
		{
			ll ind = rand()%n;
			cout << a[ind].x << " " << a[ind].y.x << " " << a[ind].y.y << "\n";
		}
		else
		{
			ll d = rand()%100000 + 1;
			ll b = rand()%100000 + 1;
			ll c = rand()%100000 + 1;	
			cout << d << " " << b << " " << c << "\n";
		}
	}
	
}
