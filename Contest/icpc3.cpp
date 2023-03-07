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

#define   Test    ll tc; cin>>tc; f1(t,tc)
#define   cs      cout << "Case " << t << ": ";

#define   f0(i,e)   for(ll i=0; i<e; i++)
#define   f1(i,e)   for(ll i=1; i<=e; i++)
#define   SpicyWings  return 0;
void vp(vector<ll> &v){for(auto it:v){cout << it <<" ";}}
//=================================================================

int main(){
   FAST;
   
   ll n; cin>>n;
   
   string date, mail, dob, bg;
   
   map <string, string> mail_date;
   map <string, string> mail_year;
   map <string, string> mail_bg;
   
   map <string, ll> dob_count;
   map <string, ll> bg_count;
   
   bg_count["A+"]=0;
   bg_count["A-"]=0;
   bg_count["B+"]=0;
   bg_count["B-"]=0;
   bg_count["AB+"]=0;
   bg_count["AB-"]=0;
   bg_count["O+"]=0;
   bg_count["O-"]=0;

   while(n--){
      
      cin>>date>>mail>>dob>>bg;
      
      auto exist = mail_date.find(mail);
      string y, m, d, h, min, sec;
      string y2, m2, d2, h2, min2, sec2;
      
      string year="";
      year += dob[6];
      year += dob[7];
      year += dob[8];
      year += dob[9];
      
      if(exist != mail_date.end()){
         
           for(ll i=0; i<=18; i++){
              if(i>=0 && i<=1) d.pb( (*exist).second[i] );
              if(i>=3 && i<=4) m.pb( (*exist).second[i] );
              if(i>=6 && i<=9) y.pb( (*exist).second[i] );
              if(i>=11 && i<=12) h.pb( (*exist).second[i] );
              if(i>=14 && i<=15) min.pb( (*exist).second[i] );
              if(i>=17 && i<=18) sec.pb( (*exist).second[i] );
              
              if(i>=0 && i<=1) d2.pb(date[i]);
              if(i>=3 && i<=4) m2.pb(date[i]);
              if(i>=6 && i<=9) y2.pb(date[i]);
              if(i>=11 && i<=12) h2.pb(date[i]);
              if(i>=14 && i<=15) min2.pb(date[i]);
              if(i>=17 && i<=18) sec2.pb(date[i]);
           }
           
           if(y2 < y) continue;           
           if(m2 < m) continue;         
           if(d2 < d) continue;
           if(h2 < h) continue;
           if(min2 < min) continue;        
           if(sec2 < sec) continue;
           
           auto itt = mail_year.find(mail);
           auto ittt = mail_bg.find(mail);
             
           dob_count[ (*itt).second ]--;
           bg_count[ (*ittt).second ]--;
           
      }
      
      
      mail_date[mail] = date;
      mail_bg[mail] = bg;
      mail_year[mail] = year;
      
      dob_count[year]++;
      bg_count[bg]++;
       
   }
   
  /* for(auto p:mail_date){
      cout << p.first << " " << p.second << endl;
   }*/
   
   for(auto it : bg_count){
      cout << it.first << " " << it.second << endl;
   }
   
   for(auto it : dob_count){
      cout << it.first << " " << it.second << endl;
   }
   
   SpicyWings;
}

















