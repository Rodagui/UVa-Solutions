/*13034 - Solve Everything :-)*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio();
	
	cin.tie(0);
	cout.tie(0);

	int problemSet;
	int cont = 1;
	int solve;
	bool ans;

	cin >> problemSet;

	while(problemSet--){

		ans = true;

		for (int i = 0; i < 13 ; ++i)
		{
			cin >> solve;
			if(solve == 0)
				ans = false;
		}

		
		if(ans)
			cout << "Set #" << cont << ": Yes\n";
		else
			cout << "Set #" << cont << ": No\n";

		cont++;
	}

	return 0;
}