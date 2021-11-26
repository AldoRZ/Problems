#include <iostream>
#include <map>

using namespace std;

#define ull unsigned long long

string stringIgnorance(string S);

int main(){
	int T;
	string S;

	cin>>T;
	cin.ignore();
	while(T--){
		getline(cin, S);
		cout<<stringIgnorance(S)<<endl;
	}
	return 0;
}

string stringIgnorance(string S){
	string updated_string;
	map<char, int> mp;
	char temp;
	for(ull i = 0; i < S.length(); i++){
		temp = tolower(S[i]);
		mp[temp]++;
		if(mp[temp] & 1) updated_string += S[i];
	}
	return updated_string;
}