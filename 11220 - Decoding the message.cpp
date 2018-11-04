/*11220 - Decoding the message.*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int casos, k=1;
	cin>>casos;
	cin.ignore();
		cin.ignore();
	while(casos--){
		if (k>1)
			cout<<'\n';
		string linea;
		cout<<"Case #"<<k<<":\n";
		string palabra;
		while(getline(cin, linea) and linea.size() >0){

			istringstream in(linea);
			int it=0;
			while(in>>palabra){
				if(it < palabra.size()){
					cout<<palabra[it];
					it++;
				}
			}
			cout<<'\n';
		}
		
		k++;
	}

	return 0;
}