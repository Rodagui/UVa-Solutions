/*445 - Marvelous Maze*/
#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main(){
	
	string linea;
	while(getline(cin, linea)){

		if(linea.size()==0){
			cout<<"\n";
			continue;
		}

		int veces;
		int num;
		string letra;
		letra = linea[0];
		
		num=stoi(letra);
		veces = num;

		for (int i = 0; i < linea.size()-1; ++i)
		{
			if(linea[i+1]=='!'){
				if(isalpha(linea[i+1])){
					letra = linea[i+1];
					num = stoi(letra);
					veces = num;
				}
				cout<<'\n';
				continue;
			}

			if(isdigit(linea[i+1])){
				letra = linea[i+1];
				num = stoi(letra);
				veces+=num;
			}
			else{
				for (int j = 0; j < veces ; ++j)
				{
					if(linea[i+1]=='b'){
						cout<<' ';
					}
					else{
						cout<<linea[i+1];
					}
				}

				veces=0;
			}
		}

		cout<<'\n';

		veces=0;

	}

	return 0;
}