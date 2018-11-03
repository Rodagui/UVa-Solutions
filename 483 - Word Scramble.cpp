/*483 - Word Scramble*/
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main(){
	
	string linea;
	while(getline(cin, linea)){
		string palabra="";
		for (int i = 0; i < linea.size(); i++)
		{
			if(linea[i]==' '){
				reverse(palabra.begin(), palabra.end());
				cout<<palabra;
				cout<<' ';
				palabra="";
								
			}
			else{
				palabra+=linea[i];

			}
		}
		reverse(palabra.begin(), palabra.end());
				cout<<palabra;
				palabra="";
		cout<<'\n';
	}

	return 0;
}

