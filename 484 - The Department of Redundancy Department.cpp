/*484 - The Department of Redundancy Department*/

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
	
	int clave;
	int valor;
	int pos=1;

	map <int, int> maap;
	vector <int> orden;
	vector<bool> visitado;

	while(cin>>clave){

		if(maap.count(clave)==1){
			maap[clave]++;
		}
		else{
			maap[clave]=1;
			orden.push_back(clave);
		}

	}

	for (int i = 0; i < orden.size(); ++i)
	{
		cout<<orden[i]<<' '<<maap[orden[i]]<<'\n';
	}
	

	/*Para recorrer todos los elementos del map
	map<int, int>::iterator i;

	for (i = maap.begin(); i != maap.end(); ++i)
	{
		cout<<i->first<<' '<<i->second<<'\n';
	}*/

	return 0;
}