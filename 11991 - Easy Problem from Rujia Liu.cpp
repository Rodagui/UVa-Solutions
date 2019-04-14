/*11991 - Easy Problem from Rujia Liu?*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int elements, queries;

	while(cin>>elements>>queries){

		vector <vector <int> > numeros(1000001);
		int pos;

		for (int i = 0; i < elements; ++i){
			cin>>pos;
			numeros[pos].push_back(i+1);
		}

		int aparicion, valor;
		
		for (int i = 0; i < queries; ++i)
		{
			cin>>aparicion>>valor;
			if(aparicion > numeros[valor].size()){
				cout<<"0\n";
			}
			else{
				cout<<numeros[valor][aparicion - 1]<<'\n';
			}

		}

	}

	return 0;
}