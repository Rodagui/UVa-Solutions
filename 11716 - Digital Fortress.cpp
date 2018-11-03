/*11716 - Digital Fortress*/
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main(){

	string linea;
	int casos;
	cin>>casos;
	cin.ignore();

	while(casos--){
		int tam, r;
		
		getline(cin, linea);	
		tam=linea.size();
		r = sqrt(tam);

		if((r*r)!= tam){
			cout<<"INVALID\n";
			continue;
		}

		int cont, x, y;
		cont=0;
		x=(-r);
		y=0;

		while(y<r){
			x+=r;
			cout<<linea[x];
			cont++;
			if(cont==r){
				x= (-r);
				y++;
				x+=y;
				cont=0;
			}
		}
		cout<<"\n";
	
	}

	return 0;
}