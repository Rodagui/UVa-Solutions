/*11389 - The Bus Driver Problem*/
#include <cstdio>
#include <algorithm>
using namespace std;

bool compara(int a, int b);

int main(){

	int n, d, r;

	while(scanf("%d %d %d", &n, &d, &r) != EOF){
		if(n ==0 and d==0 and r==0){
			break;
		}

		int mat[n];
		int vesp[n];
		int i;

		for(i=0; i<n; i++){
			scanf("%d", &mat[i]);
		}

		for ( i = 0; i < n; ++i)
		{
			scanf("%d", &vesp[i]);
		}

		sort(mat, mat+n);

		sort(vesp, vesp+n, compara);

		int suma=0, dif=0, tot=0;

		for (i = 0; i < n; ++i)
		{
			suma = mat[i]+vesp[i];

			if(suma> d){
				dif=suma-d;
				tot+= (r*dif);
			}
		}

		printf("%d\n", tot);
	}

	return 0;
}

bool compara(int a, int b){
	return a>b;
}