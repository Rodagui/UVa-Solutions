/*492 - Pig-Latin*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string linea;
	while(getline(cin, linea)){
		string palabra="";
		for (int i = 0; i < linea.size(); ++i)
		{
			if((linea[i]>64 and  linea[i]<91) or (linea[i]>96 and linea[i]<123))
				palabra+=linea[i];
			else{
				if(palabra[0]=='a' or palabra[0]=='A' or palabra[0]=='E' or palabra[0]=='e' or palabra[0]=='I' or palabra[0]=='i' or palabra[0]=='o' or palabra[0]=='O' or palabra[0]=='u' or palabra[0]=='U'){
					cout<<palabra<<"ay";
				}
				else{
					if(palabra.size()>0)
						cout<<palabra.substr(1)<<palabra[0]<<"ay";
				}
				palabra="";
				cout<<linea[i];
			}
			
		}

		if(palabra[0]=='a' or palabra[0]=='A' or palabra[0]=='E' or palabra[0]=='e' or palabra[0]=='I' or palabra[0]=='i' or palabra[0]=='o' or palabra[0]=='O' or palabra[0]=='u' or palabra[0]=='U'){
					cout<<palabra<<"ay";
				}
				else{
					if(palabra.size()>0)
						cout<<palabra.substr(1)<<palabra[0]<<"ay";
				}
		cout<<'\n';
	}


	return 0;
}

