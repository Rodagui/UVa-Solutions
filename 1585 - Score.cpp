/*1585 - Score*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int ans = 0;
	int cases;
	int cont;

	cin >> cases;

	string cad;

	while(cases--){

		ans = 0;
		cont = 0;

		cin >> cad;

		for (int i = 0; i <cad.size() ; ++i)
		{
			if(cad[i] == 'O'){
				cont++;
			}
			else{
				cont = 0; 
			}
			
			ans += cont;
		}

		cout << ans << '\n';

	}

	return 0;
}