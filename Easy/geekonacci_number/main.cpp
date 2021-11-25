#include <iostream>

using namespace std;

int geek_onacci(int a, int b, int c, int n){
	if(n == 4){
		return a + b + c;
	}else if(n == 3){
		return c;
	}else if(n == 2){
		return b;
	}
	else{
		return geek_onacci(a, b, c, n-1) + geek_onacci(a, b, c, n-2) + geek_onacci(a, b, c, n-3);
	}
}
int main(){
	int t, A, B, C, N;
	cin >> t;
	while(t--){
		cin>>A>>B>>C>>N;
		cout<<geek_onacci(A, B, C, N)<<endl;
	}
	return 0;
}