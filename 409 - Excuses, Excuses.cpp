/*409 - Excuses, Excuses!*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	
	int words, ex, k=1;

	while(cin>>words>>ex){


		vector <string> claves;
		vector <string> excusas;
		vector <int> tot(ex);
		vector <int> tam(ex);
		vector <string> copia;
		cin.ignore();

		for (int i = 0; i < words; ++i)
		{
			string pal;
			getline(cin,pal);
			claves.push_back(pal);
		}

		int t;

		for (int i = 0; i < ex; ++i)
		{
			string xc;
			getline(cin,xc);
			tam[i]=xc.size();
			excusas.push_back(xc);
		}

		copia = excusas;
		for (int i = 0; i < ex; ++i)
		{
			for (int j = 0; j < copia[i].size() ; ++j)
			{
				copia[i][j]=tolower(copia[i][j]);
			}
		}


		int pos, d, marq, max=0;

		
		for (int i = 0; i < words; i++)
		{
			string palabra;
			string aux ="";
			palabra = claves[i];

			for (int j = 0; j < excusas.size(); j++)
			{
				d=tam[j];
				aux="";

				for (int m = 0; m < d ; m++)
				{
					if(isalpha(copia[j][m])){
						aux+=copia[j][m];
					}
					else {
						if(palabra==aux)
							tot[j]++;
						aux="";
						

					}

				}

				if(palabra==aux){

					tot[j]++;
					aux="";
				}

			}

		}
	
		for (int i = 0; i < ex; ++i)
		{
			if(tot[i]>max)
				max = tot[i];
		}

		cout<<"Excuse Set #"<<k<<'\n';

		for (int i = 0; i < ex; ++i)
		{
			if(tot[i]==max)
				cout<<excusas[i]<<'\n';
		}

		cout<<'\n';

		
		k++;

	}


	return 0;
}