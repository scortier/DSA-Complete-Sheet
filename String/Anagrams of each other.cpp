// QUARANTINE DAYS..;)
#include <bits/stdc++.h>
using namespace std;
#define endl 		    "\n"
#define test 		    int tt;cin>>tt;while(tt--)
#define fl(i,a,b)       for( int i=a;i<b;i++)
#define bfl(i,a,b)      for( int i=b-1;i>=a;i--)
#define ll 			    long long int
#define pb 			    push_back
#define mp 			    make_pair
#define f 			    first
#define s 			    second
#define MOD 		    1000000007
#define PI 			    acos(-1.0)
#define assign(x,val)   memset(x,val,sizeof(x))
#define prec(val, dig)  fixed << setprecision(dig) << val
#define vi   		    vector < int >
#define pi 			    pair < int , int >
#define pr(gg)          cout<<gg<<endl
#define mk(arr,n,type)  type *arr=new type[n];
const int maxm = 2e6 + 10;

void lage_rho() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
/**********====================########################=================***********/
#define SIZE 256
bool isAnagram(string s1, string s2)
{
	int cnt1[SIZE] = {0};
	int cnt2[SIZE] = {0};
	int index;
	if (s1.size() != s2.size()) return false;
	for (index = 0; s1[index]; index++)
	{
		cnt1[s1[index]]++;
		cnt2[s2[index]]++;
	}
	for (index = 0; index < SIZE; index++)
	{
		if (cnt1[index] != cnt2[index]) return false;
	}
	return true;
}
void solve()
{
	string s1, s2;
	cin >> s1 >> s2;
	if (isAnagram(s1, s2)) pr("yeah");
	else pr("sorry");

}

int32_t main()
{
	lage_rho();
	// test
	solve();
	return 0;
}