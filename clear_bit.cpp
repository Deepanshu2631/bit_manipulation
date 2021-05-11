#include<bits/stdc++.h>
using namespace std;
int clearBit(int n , int i){
	int mask =   (-1<<i+1);
	return (n&mask);
}
int main(){
int n, i;
cin>>n>>i;
n = clearBit(n , i);
cout<<n;

}