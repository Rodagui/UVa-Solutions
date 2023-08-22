/*12798 - Handball*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	int players;
	int matches;
	int score;
	int aux;
	int ans;

	while(cin >> players >> matches){
		ans = 0;

		for (int j = 0; j < players; ++j)
		{
			
			aux = 0;
			
			for (int i = 0; i < matches; ++i)
			{
				cin >> score;

				if(score != 0){
					aux ++;
				}
			}

			if ( aux == matches)
				ans++;
		}

		cout << ans << '\n';
	}

	return 0;
}