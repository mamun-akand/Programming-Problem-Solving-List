    // Problem: B. MKnez's ConstructiveForces Task
    // URL: https://codeforces.com/problemset/problem/1779/B
    // Memory Limit: 256 MB
    // Time Limit: 1000 ms
     
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
        
       Test{
          ll n; cin>>n; ll sum = 0;
          if(n==3) pn; 
          else if(n%2==1){
            py;
            ll x = n/2;
            ll a = x-1, b = -x;
            for(ll i=1; i<=n; i++){
               if(i%2==1) {cout << a << " "; sum += a;}
               else {cout << b << " "; sum += b;}  
            }
            ln;
            // cout << sum << endl;
          }
          else{
             py;
             for(ll i=1; i<=n; i++){
                if(i%2==1) cout << 1 << " ";
                else cout << -1 << " ";
             }
             ln;
          }
       }
       
       SpicyWings;
    }