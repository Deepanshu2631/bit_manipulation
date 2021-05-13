// replace N by M 
#include<bits/stdc++.h>
using namespace std;
int clearInRnage(int n  , int  i, int j){
	int ia  = (~0);
	int a = (ia) <<   (j+1);
	int b  = (1<<i)  -  1;
	int mask = a|b;
	int ans  = n & mask;
	return ans;

}
int replaceBit(int n , int m, int i , int j){
	int n_replace = clearInRnage(n , i ,j);
	int an = n_replace | (m<<i);
	return an;
}
int main(){
int n, m ,i , j ;
cin>>n>>m>>i>>j;

n = replaceBit(n,m,i,j);
cout<<n;

}