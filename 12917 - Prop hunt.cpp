/*12917 - Prop hunt!*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int players;
	int hunters;
	int objects;

	string ans;
	int aux;

	while(cin >> players >> hunters >> objects){

		ans = "Props win!\n";

		aux = objects - players;

		if(hunters - aux > 0){
			ans = "Hunters win!\n";
		}

		cout << ans;

	
	}

	return 0;
}