/*10919 - Prerequisites?*/
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string> 
#include <iostream> 
#include <algorithm>

using namespace std;

int main(){

	int a, b;

	while(scanf("%d %d", &a, &b) != EOF){
		if(a==0){
			break;
		}
		int cursos[a];
		int i, T=0;
		int aux=b;
		int ax=b;
		int totq=0;
		int k, nec, l, j, qursos, TR=0;

		for (i = 0; i < a ; ++i)
		{
			cin>>cursos[i];
		}
		

		while(ax--){
			T=0;
			cin>>k>>nec;

			for (j = 0; j < k; ++j)
			{
				cin>>qursos;
				
				for (l = 0; l < a; ++l)
				{
					if(qursos==cursos[l]){
						T++;
					}
				}
			}
			
			
			if(nec > T){
				TR=1;
				aux--;
			}
			else{
				TR=0;
			}
			

		}

		if(aux==b){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}



	}

	return 0;
}