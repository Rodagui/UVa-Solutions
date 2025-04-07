/*494 - Kindergarten Counting Game*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	string linea;
	int ans = 0;
	bool word = false;

	while(getline(cin, linea)){

		ans = 0;
		
		for (int i = 0; i < linea.size(); ++i)
		{
			if(isalpha(linea[i])){
				word = true;
			}

			if(!isalpha(linea[i]) and word){
				ans++;
				word = false;
			}

		}

		if(word){
			ans++;
			word = false;
		}

		cout << ans << "\n";

	}

	return 0;
}