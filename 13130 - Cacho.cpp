/*13130 - Cacho*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio();
	cin.tie();
	cout.tie();

	int cases;

	cin >> cases;

	string dices;

	//getline(cin, dices);
	vector <int> uno = {1, 2, 3, 4, 5};
	vector <int> dos = {2, 3, 4 ,5, 6};
	vector <int> nvo;
	int aux;

	while(cases--){

		//getline(cin, dices);

		for (int i = 0; i < 5; ++i)
		{
			cin >> aux;
			nvo.push_back(aux);
		}

		if ( nvo == uno or nvo == dos)
			cout << "Y\n";
		else
			cout << "N\n";

		nvo.clear();
		
	}

	return 0;
}