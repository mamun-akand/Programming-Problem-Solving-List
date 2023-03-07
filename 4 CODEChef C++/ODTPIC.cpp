#include<bits/stdc++.h>
using namespace std;

//=================================================================
//TYPES
#define   ll   long long int
#define   ld 	long double	
#define   vll	vector <ll>	
#define   vld	vector <ld>
#define   mp	map <ll,ll>
#define   st	set <ll>

//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   pi      3.1415926535897932384626433832795
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
#define   endl    "\n"
#define   ln      cout<<"\n";
#define   pb      push_back
#define   eb      emplace_back
#define   rn      return 0;

#define   pa      cout<<ans<<endl
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl

#define   Test    ll tc; cin>>tc; cin.ignore(); f1(t,tc)
#define   cs      cout << "Case " << t << ": ";

#define   f0(i,e)   for(ll i=0; i<e; i++)
#define   f1(i,e)   for(ll i=1; i<=e; i++)
#define   SpicyWings  return 0;
void vp(vector<ll> &v){for(auto it:v){cout << it <<" ";}}
//=================================================================


int main(){
   FAST;
   
   int a[100000], b[100000];
   
   int n,m,q;
   scanf("%d %d %d", &n, &m, &q);
   
   for(int i=0; i<n; i++){
      scanf("%d", &a[i]);
   }
   
   for(int i=0; i<m; i++){
      scanf("%d", &b[i]);
   }

   while(q--){
      int c[4001] = {0};
      
      int l1, r1, l2, r2;
      scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

      for(int i=(l1-1); i<r1; i++){
         c[a[i]]++;
      }
      
      for(int i=(l2-1); i<r2; i++){
         c[b[i]]++;
      }
      
      int cnt=0;
      for(int i=0; i<4001; i++){
         if(c[i]&1) cnt++;
      }
      
      printf("%d\n", cnt);
   }
   
   SpicyWings;
}