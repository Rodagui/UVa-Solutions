/*10420 - List of Conquests*/
#include <iostream>
#include <map>

using namespace std;

int main(){

	int casos;
	cin>>casos;
	cin.ignore();
	map<string, int> conquistas;
	
	while(casos--){
		string linea;
		string pais="";
		getline(cin, linea);
		int band=0;
		for (int i = 0; i < linea.size(); ++i)
		{
			if(linea[i]==' ' and band==1)
				break;
			else{
				if(linea[i]!=' '){
					pais+=linea[i];
					band=1;
				}
			}
		}


		if(conquistas.count(pais))
			conquistas[pais]++;
		else
			conquistas[pais]=1;
	}

	map <string, int>::iterator it;
	for (it = conquistas.begin(); it != conquistas.end() ; ++it)
	{
		cout<< it->first<<' '<<it->second<<'\n';
	}

	return 0;
}