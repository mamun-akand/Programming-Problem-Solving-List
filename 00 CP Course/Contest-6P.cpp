//https://www.hackerrank.com/challenges/ctci-bubble-sort/problem
#include<bits/stdc++.h>
using namespace std;

int bubble(int arr[], int n)
{
    int swaps=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j < n-1; j++)
        {
            if(arr[j] > arr[j+1]){
               swap(arr[j], arr[j+1]);
               swaps++;
            }
        }
    }  
    return swaps;
}

int main(){
   
   int n; cin>>n;
   int ara[n];
   for(int i=0; i<n; i++){
      cin>>ara[i];
   }
   
   int swaps = bubble(ara, n);
   
   cout << "Array is sorted in " << swaps << " swaps." << endl;
   cout << "First Element: " << ara[0] << endl;
   cout << "Last Element: " << ara[n-1] << endl;
}

















