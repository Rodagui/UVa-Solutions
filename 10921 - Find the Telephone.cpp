/*10921 - Find the Telephone*/

#include <iostream>
using namespace std;

int main(){
	
	string linea;
	while(cin>>linea){

		for (int i = 0; i < linea.size(); ++i)
		{
			if(linea[i]=='A' or linea[i]=='B' or linea[i]=='C')
				cout<<"2";
			else if(linea[i]=='D' or linea[i]=='E' or linea[i]=='F')
				cout<<"3";
			else if(linea[i]=='G' or linea[i]=='H' or linea[i]=='I')
				cout<<"4";
			else if(linea[i]=='J' or linea[i]=='K' or linea[i]=='L')
				cout<<"5";
			else if(linea[i]=='M' or linea[i]=='N' or linea[i]=='O')
				cout<<"6";
			else if(linea[i]=='P' or linea[i]=='Q' or linea[i]=='R' or linea[i]=='S')
				cout<<"7";
			else if(linea[i]=='T' or linea[i]=='U' or linea[i]=='V')
				cout<<"8";
			else if(linea[i]=='W' or linea[i]=='X' or linea[i]=='Y' or linea[i]=='Z')
				cout<<"9";
			else
				cout<<linea[i];
		}

		cout<<"\n";
	}

	return 0;
}