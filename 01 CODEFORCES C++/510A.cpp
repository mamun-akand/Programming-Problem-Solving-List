#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m, cnt=1;
    cin >> n >> m;

    char s1[m], s2[m], s3[m];

    for(int i=0 ; i<=m ; i++){
        s1[i] = '#';
        if(i < m-1) s2[i] = '.';
        else s2[i] = '#';
        if(i==m) s1[i] = s2[i] = '\0';
    }

    strcpy(s3, s2); s3[0]='#' ; s3[m-1]='.' ;

    for(int i=1 ; i<=n ; i++){

        if(i%2==1) printf("%s\n", s1);
        else{
            if(cnt%2==1){
                printf("%s\n", s2);
                cnt++;
            }
            else if (cnt%2==0) {
                printf("%s\n", s3);
                cnt++;
            }
        }

    }

    return 0;

}
