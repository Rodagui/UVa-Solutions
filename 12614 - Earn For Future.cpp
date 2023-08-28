/*12614 - Earn For Future*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int cases;
	int cards;
	int ans;
	int num;
	int kse = 1;

	cin >> cases;

	while(cases--){

		cin >> cards;
		ans = 0;

		for (int i = 0; i < cards; ++i)
		{
			cin >> num;
			if(num > ans)
				ans = num;
		}

		cout << "Case " << kse << ": " << ans << "\n";
		kse++;
	}

	return 0;
}