#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int l=0, u=0, i;

    for(i=0 ; i<s.size() ; i++){

        if(s[i] >= 'a' && s[i] <= 'z') l++;
        else u++;

    }

    for(i=0 ; i<s.size() ; i++){

        if( l >= u && !(s[i] >= 'a' && s[i] <= 'z') )
            s[i] += 32;

        else if ( l < u && s[i] >= 'a' && s[i] <= 'z' )
            s[i] -= 32;

    }

    cout << s << endl;

    return 0;

}
