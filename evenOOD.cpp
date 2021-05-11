#include<bits/stdc++.h>
using namespace std;
bool isodd(int n){
	return n&1;

}
int main(){
int n;
cin>>n;
if(isodd(n) ==1){
	cout<<"odd";
}else{
	cout<<"even ";
}

}