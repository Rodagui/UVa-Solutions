/*156 - Ananagrams*/

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	map<string, string> diccionario;
	string palabra;
	string copia;
	vector <string> save;
	map<string, bool> anana;

	while(cin>>palabra){
		if(palabra=="#")
			continue; 
		copia=palabra;
		for (int j = 0; j < copia.size() ; ++j)
		{
			copia[j]=tolower(copia[j]);
		}
		
		sort(copia.begin(), copia.end());

		if(diccionario.count(copia)==1){

			string aux = diccionario[copia];
			anana[aux]= true;
			anana[palabra]=true;
		}
		else{
			diccionario[copia]=palabra;
			anana[palabra]=false;
		}

	}

		/*Para recorrer todos los elementos del map*/
	
	map<string, bool>::iterator i;

	for (i = anana.begin(); i != anana.end(); ++i)
	{
		if((i->second)==false){
			cout<<i->first<<'\n';
		}
	}



	return 0;
}