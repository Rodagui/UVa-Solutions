/*1237 - Expert Enough?*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int agencias;
	int queries;
	string aux;
	int price;
	int cases;
	string ans;
	int cont;
	int limInf;
	int limSup;

	cin >> cases;

	while(cases--){

		ans = "";
		cin >> agencias;

		vector <vector <string>> arr(agencias, vector <string>());

		for (int i = 0; i < agencias; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				cin >> aux;
				arr[i].push_back(aux);
			}

		}

		cin >> queries;

		for (int i = 0; i < queries; ++i)
		{
			cin >> price;
			
			cont = 0;
			ans = "UNDETERMINED";

			for (int j = 0; j < agencias; ++j)
			{	
				limInf = stoi(arr[j][1]);
				limSup = stoi(arr[j][2]);

				if(price >= limInf and price <= limSup){
					cont++;
					ans = arr[j][0];
				}

				if(cont > 1){
					ans = "UNDETERMINED";
					continue;
				}
			}

			cout << ans << "\n";
		}

		if(cases > 0)
			cout << "\n";
	}

	return 0;
}