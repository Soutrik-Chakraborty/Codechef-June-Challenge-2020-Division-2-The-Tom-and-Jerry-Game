#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
void solve(ll n)
{
	ll res=(n&-n);		//right most set bit = log2(n&-n)
	res<<=1;
	cout<<n/res<<"\n";
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;while(t--)
	{
		
		ll ts;
		cin>>ts;
		if(ts%2==1)
		{
			cout<<ts/2<<"\n";
			continue;
		}
		int res=ts&(ts-1);				//if n is power of 2 then result is zero
		if(res==0)
		{
			cout<<0<<"\n";
			continue;
		}
		else
		{
			solve(ts);
		}
	}
}