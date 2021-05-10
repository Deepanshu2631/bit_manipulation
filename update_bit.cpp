#include<bits/stdc++.h>
using namespace std;
int clearbit(int n , int i){
	int mask = ~(1<<i);
	int bit  = (n&mask);
	return bit;

}
void updatebit(int &n , int i , int v){
	int mask = ~(1<<i);
	int cleared_n  = n&mask;
	n = cleared_n| (v<<i);
}
int main(){
int n;


cin>>n;
updatebit(n , 2 ,0 );
updatebit(n , 1 , 1);
cout<<n;
}