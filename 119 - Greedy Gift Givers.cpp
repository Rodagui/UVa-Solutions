/*Greedy Gift Giver*/

#include <cstdio>
#include <algorithm>
#include <utility>
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int personas, casos=1;

	while(scanf("%d\n", &personas) != EOF){
		if(casos>1){
			cout<<endl;
		}
		
		int dinero[personas];
		int i, j, k, mod, rep;
		int in, r, pos;
		string noms[personas];

		for ( i = 0; i < personas; ++i)
		{
			dinero[i]=0;
		}

		for (i = 0; i < personas ; ++i)
		{
			cin>>noms[i];
		}
		

		string nom, aux;
		


		for (i = 0; i < personas; ++i)
		{
		
			cin>>nom>>in>>r;

			for ( j = 0; j < personas; ++j)
			{
				if(nom==noms[j]){
					pos = j;
					break;
				}
			}

			dinero[pos] -= in;

			if(r != 0){

				mod= in % r;
				dinero[pos]+= mod;
				
			}else{
				dinero[pos]+=in;
			}

			
			for (j = 0; j < r; ++j)
			{
				cin>>aux;

				for ( k = 0; k < personas; ++k)
				{
					if(aux==noms[k]){
						pos = k;
						break;
					}
				}

				rep = in / r;
				dinero[pos] += rep;
				
			}
			


		}

		for (i = 0; i < personas; ++i)
		{
			cout<<noms[i]<<' '<<dinero[i]<<endl;
		}

		casos++;
	}

	return 0;
}