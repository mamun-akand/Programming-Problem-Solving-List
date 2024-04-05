// URL: https://codeforces.com/contest/1941/problem/D
#include<bits/stdc++.h>
using namespace std;

//====================================================================
//TYPES
#define   ll    long long int
#define   ld    long double	
#define   vll   vector <ll>	
//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
//#define   endl    '\n'
#define   debug(x)   cout << #x << " : " << x << endl;
#define   SpicyWings return 0;
 
#define   ln      cout<<'\n';
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl
 
#define   Test    ll tc; cin>>tc; for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<' ';}ln;
//=====================================================================

ll n, m, x;
ll MoveClock(ll prev, ll step){
	prev += step;
	prev %= n;
	if(prev != 0) return prev; 
	else return n;
}
ll MoveAntiClock(ll prev, ll step){
	step %= n;
	prev -= step;
	if(prev <= 0){
		prev += n; 
	}
	return prev; 
}

const ll MAX = 1009;
vector<ll> val(MAX);
vector<char> dir(MAX);

ll dp[MAX][MAX];

ll solve(ll start, ll move){
	if(move == m){
		if(start == x) return true;
		else return false;
	}
	
	if(dp[start][move] != -1) return dp[start][move];
	
	if(dir[move] == '0'){
		ll new_pos = MoveAntiClock(start, val[move]);
		return dp[start][move] = solve(new_pos, move+1);
	}
	else if(dir[move] == '1'){
		ll new_pos = MoveClock(start, val[move]);
		return dp[start][move] = solve(new_pos, move+1);
	}
	else{
		ll new_pos1 = MoveClock(start, val[move]);
		ll new_pos2 = MoveAntiClock(start, val[move]);
		bool path1 = solve(new_pos1, move+1);
		bool path2 = solve(new_pos2, move+1);
		return dp[start][move] = max(path1, path2);
	}
}

int main(){
   FAST;
   
   Test{
		cin>>n>>m>>x;
		for(ll i=0; i<m; i++){
			ll temp; char ch;
			cin>>temp>>ch;
			val[i] = temp;
			dir[i] = ch;
		}
		for(ll i=0; i<=n+2; i++){
			for(ll j=0; j<=m+2; j++){
				dp[i][j] = -1;
			}
		}
		reverse(val.begin(), val.begin()+m);
		reverse(dir.begin(), dir.begin()+m);
		vll ans;
		for(ll i=1; i<=n; i++){
			if(solve(i, 0)) ans.pb(i);
		}
		cout << ans.size() << endl;
		for(auto it:ans){
			cout << it << " ";
		}
		cout << endl;
   }
   
   SpicyWings;
}











