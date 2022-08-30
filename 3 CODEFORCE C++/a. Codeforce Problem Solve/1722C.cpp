#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        string a[n], b[n], c[n];
        map <string, int> mp;

        for(int i=0; i<n; i++){
            string s; cin>>s;
            a[i] = s;
            mp[s]++;
        }

        for(int i=0; i<n; i++){
            string s; cin>>s;
            b[i] = s;
            mp[s]++;
        }

        for(int i=0; i<n; i++){
            string s; cin>>s;
            c[i] = s;
            mp[s]++;
        }

        int x=0, y=0, z=0;

        for(int i=0; i<n; i++){
            if(mp[a[i]]==3) x+=0;
            else if(mp[a[i]]==2) x+=1;
            else if(mp[a[i]]==1) x+=3;
        }

        for(int i=0; i<n; i++){
            if(mp[b[i]]==3) y+=0;
            else if(mp[b[i]]==2) y+=1;
            else if(mp[b[i]]==1) y+=3;
        }

        for(int i=0; i<n; i++){
            if(mp[c[i]]==3) z+=0;
            else if(mp[c[i]]==2) z+=1;
            else if(mp[c[i]]==1) z+=3;
        }

        cout << x << " " << y << " " << z << endl;
    }

    return 0;
}
