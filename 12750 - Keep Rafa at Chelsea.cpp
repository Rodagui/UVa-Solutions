/*12750 - Keep Rafa at Chelsea*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	char result;
	int matches;
	bool fired;
	int cases;
	int lives;
	int ans;
	int kse = 1;

	cin >> cases;

	while(cases--){

		lives = 3;
		ans = 0;

		fired = false;

		cin >> matches;

		for (int i = 0; i < matches; ++i)
		{

			cin >> result;

			if(fired == false){

				ans++;
				
				if(result == 'W')
					lives = 3;
			
				if(result == 'L' or result == 'D')
					lives--;
			}
			
			
			if(lives == 0)
				fired = true;

		}

		if(fired)
			cout <<"Case " << kse <<": "<< ans << '\n';
		else
			cout <<"Case " << kse <<": Yay! Mighty Rafa persists!\n";

		kse++;
	}

	return 0;
}