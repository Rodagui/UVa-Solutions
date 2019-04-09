/*10855 - Rotated square*/

#include <bits/stdc++.h>

using namespace std;

void rotate(vector < vector <char> >& matriz, int tam);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int menor, mayor, a, b;

	while(cin>>mayor>>menor){
		
		if(menor == 0 and mayor== 0)
			break;

		vector < vector <char> > bigArr(mayor,(vector <char> (mayor) ) );
		vector < vector <char> > miniArr(menor,(vector <char> (menor) ) );
		vector <int> freq(4);
		
		
		int mismas = 0;
		int primer = 0;
		int segunda = 0;
		int tercera = 0;
		int cuarta = 0;

		cin.ignore();

		for (int i = 0; i < mayor; ++i){
			for (int j = 0; j <  mayor; ++j){
				cin>>bigArr[i][j];
			}
		}

		for (int i = 0; i < menor; ++i){
			for (int j = 0; j <  menor; ++j){
				cin>>miniArr[i][j];
			}
		}

		int k=0;

		while(k < 4){

			for (int i = 0; i < mayor; ++i)
			{
				for (int j = 0; j < mayor; ++j)
				{
					mismas = 0;

					if(bigArr[i][j] == miniArr[0][0]){

						for (int x = i, a = 0; x < mayor and a < menor; ++x, ++a)
						{
							for (int y = j, b = 0; y < mayor and b < menor ; ++y, ++b)
							{
								if(bigArr[x][y] == miniArr[a][b])
									mismas++;
							}
						}

						if(mismas == (menor*menor))
							freq[k]++;
					}
				}
			}

			rotate(miniArr, menor);
			k++;
		}



		cout<<freq[0]<<' '<<freq[1]<<' '<<freq[2]<<' '<<freq[3]<<'\n';



	}
	return 0;

}


void rotate(vector < vector <char> >& matriz, int tam){

	vector < vector <char> > aux( tam ,(vector <char> (tam) ) );

	aux = matriz;
	int x, y;

	for (int i = 0; i < tam; ++i)
	{
		for (int j = 0; j < tam ; ++j)
		{
			x = j;
			y = (tam - 1) - i;

			matriz[x][y] = aux[i][j];
		}
	}

	return;
}