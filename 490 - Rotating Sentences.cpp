/*490 - Rotating Sentences*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	
	vector <string> texto;
	vector <int> tam;
	int max=-1;;
	string linea;
	while(getline(cin, linea)){
		int t;
		t=linea.size();

		if(t>max)
			max = linea.size();
		
		tam.push_back(linea.size());
		texto.push_back(linea);
	}

	for (int j = 0; j < max; ++j)
	{
		for (int i = texto.size()-1; i >=0; --i)
		{
			if(j>=tam[i])
				cout<<' ';
			
			else
				cout<<texto[i][j];
			

		}
		cout<<'\n';
	}
	

	return 0;
}