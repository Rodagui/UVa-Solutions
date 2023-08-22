/*13012 - Identifying tea*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int tea;
	int ans;
	int aux;

	while(cin >> tea){

		ans = 0;

		for (int i = 0; i < 5 ; ++i)
		{
			cin >> aux;
			
			if(aux == tea)
				ans++;
		}

		cout << ans << '\n';
	}

	return 0;
}