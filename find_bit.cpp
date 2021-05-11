#include<bits/stdc++.h>
using namespace std;
int findBit(int n , int i){
	int mask = (1<<i);
	int ans = (n&mask)>0?1:0;
	return ans;

}
int main(){
int n , i;
cin>>n>>i;
cout<<findBit(n ,i);


}