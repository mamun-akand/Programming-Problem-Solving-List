// https://codeforces.com/contest/1948/problem/C

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll n; 
vector<string> s(2);
// vector<pair<ll,ll>> bfs_ans;

void bfs(ll s1, ll s2, vector<vector<ll>> &visited){
   queue <pair<ll,ll>> q;
   q.push({s1,s2});
   visited[s1][s2]=1;
      
   while(! q.empty()){
      ll x = q.front().first;
      ll y = q.front().second;
      q.pop();
      // bfs_ans.push_back({x, y});
      
      if(x==0){
      	if(y==0){
      		if(s[x][y+1] == '>' && visited[x][y+2] != 1){ //right
      			q.push({x,y+2});
      			visited[x][y+2]=1;
      		}
      		if(s[x+1][y] == '>' && visited[x+1][y+1] != 1){ //down
	      		q.push({x+1,y+1});
	      		visited[x+1][y+1]=1;
      		}
      	}
      	if(y==n-1){
      		if(s[x][y-1] == '<' && visited[x][y-2] != 1){ //Left
      			q.push({x,y-2});
      			visited[x][y-2]=1;
      		}
      		if(s[x+1][y] == '<' && visited[x+1][y-1] != 1){ //down-left
	      		q.push({x+1,y-1});
	      		visited[x+1][y-1]=1;
      		}
      	}
      	if(y>0 && y<n-1){
      		if(s[x][y-1] == '<' && visited[x][y-2] != 1){ //Left
      			q.push({x,y-2});
      			visited[x][y-2]=1;
      		}
      		if(s[x][y+1] == '>' && visited[x][y+2] != 1){ //right
      			q.push({x,y+2});
      			visited[x][y+2]=1;
      		}
      		if(s[x+1][y] == '<' && visited[x+1][y-1] != 1){ //down-left
	      		q.push({x+1,y-1});
	      		visited[x+1][y-1]=1;
      		}
      		if(s[x+1][y] == '>' && visited[x+1][y+1] != 1){ //down-right
	      		q.push({x+1,y+1});
	      		visited[x+1][y+1]=1;
      		}
      	}
      }
      else if(x==1){
      	if(y==0){
      		if(s[x][y+1] == '>' && visited[x][y+2] != 1){ //right
      			q.push({x,y+2});
      			visited[x][y+2]=1;
      		}
      		if(s[x-1][y] == '>' && visited[x-1][y+1] != 1){ //Up-Right
	      		q.push({x-1,y+1});
	      		visited[x-1][y+1]=1;
      		}
      	}
      	if(y>0 && y<n-1){
      		if(s[x][y-1] == '<' && visited[x][y-2] != 1){ //Left
      			q.push({x,y-2});
      			visited[x][y-2]=1;
      		}
      		if(s[x][y+1] == '>' && visited[x][y+2] != 1){ //right
      			q.push({x,y+2});
      			visited[x][y+2]=1;
      		}
      		
      		if(s[x-1][y] == '>' && visited[x-1][y+1] != 1){ //Up-Right
	      		q.push({x-1,y+1});
	      		visited[x-1][y+1]=1;
      		}
      		if(s[x-1][y] == '<' && visited[x-1][y-1] != 1){ //Up-Left
	      		q.push({x-1,y-1});
	      		visited[x-1][y-1]=1;
      		}
      	}
      }
   }  
}

int main(){
   ll t; cin>>t;
   
   while(t--){
   	cin>>n;
   	cin>>s[0]>>s[1];
   	
   	//bfs
		vector<vector<ll>> visited(2, vector<ll>(n+1, 0));
	   bfs(0, 0, visited);
	   
	   if(visited[1][n-1] == 1) cout << "YES" << endl;
	   else cout << "NO" << endl;
   }  
}