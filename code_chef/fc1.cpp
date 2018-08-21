#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
		string s;
		cin >> s;
		int count=0;
		cout << "strig" << s.length() << " ";
		for(int i=0;i<s.length()-4;i++){
			int flagc=0,flage=0,flagh=0,flagf=0;
			for(int j=0;j<4;j++){
				if(s[i+j]=='c' && flagc==0) flagc=1;
				else if(s[i+j]=='e' && flage==0) flage=1;
				else if(s[i+j]=='h' && flagh==0) flagh=1;
				else if(s[i+j]=='f' && flagf==0) flagf=1;
			}
			if(flagc==1 && flagf==1 && flagh==1 && flage==1) count++;
		}
		if(count==0) cout << "normal" << "\n";
		else cout << "lovely " << count << "\n";
	}
	return 0;
}