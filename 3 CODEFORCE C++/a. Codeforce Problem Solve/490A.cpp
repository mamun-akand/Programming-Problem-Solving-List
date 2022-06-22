#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int ara[n], cnt[3] = {0, 0, 0};

    for(int i=0 ; i<n ; i++){
        cin >> ara[i];

        if(ara[i]==1) cnt[0]++;
        else if(ara[i]==2) cnt[1]++;
        else cnt[2]++;
    }

    int team = *min_element(cnt, cnt+3);

    if(team==0){
        cout << "0" << endl;
        return 0;
    }

    int t_form[team][3], one=0, two=0, three=0;
    int Count=0;

    for(int i=0 ; ; i++){
        if(Count==team*3) break;

        if(ara[i] == 1 && one < team){
            t_form[one][0]=i;
            one++; Count++; //1 2
        }
        else if(ara[i] == 2 && two < team){
            t_form[two][1]=i;
            two++; Count++; //1
        }
        else if(ara[i] == 3 && three < team){
            t_form[three][2]=i;
            three++; Count++; //1 2
        }
    }

    cout << team << endl;

    for(int i=0 ; i<team ; i++){
        for(int j=0 ; j<3 ; j++){
            cout << t_form[i][j]+1 << " ";
        }
        cout << endl;
    }

    return 0;
}
