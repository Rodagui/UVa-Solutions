/*642 - Word Amalgamation*/

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	map<string, vector<string> > diccionario;

	string palabra;
	string copia;
	int otras=0;


	while(cin>>palabra){
		
		if(palabra=="XXXXXX"){
			otras=1;
			continue;
		}
		
		if(palabra=="XXXXXX")
			break;

		copia=palabra;		
		sort(copia.begin(), copia.end());
		
		if(otras==0){


			if(diccionario.count(copia)==1)
				diccionario[copia].push_back(palabra); /*agrega un elemento al vector que esta guardado en el 
				valor del map*/

			else
				diccionario[copia].push_back(palabra);	
			
		}

		else{

			if(diccionario.count(copia)==1){
				vector<string> aux = diccionario[copia]; /*crea un vector auxiliar que guarda el vector del valor del map*/
				sort(aux.begin(), aux.end()); /*ordena el vector alfanumericamente*/
				for (int i = 0; i < aux.size(); ++i) { /*imprime los elementos del vector*/
					cout<<aux[i]<<'\n';
				}
	
			}
			
			else
				cout<<"NOT A VALID WORD\n";
			
			cout<<"******\n";
		}

	}

	return 0;
}