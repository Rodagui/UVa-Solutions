/*11875 - Brick Game*/
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){

	int casos, i=1;
	scanf("%d", &casos);

	while(casos--){

		int cap=0, tam=0;

		scanf("%d", &tam);

		int arr[tam];
		int j; 

		for (j = 0; j < tam; ++j)
		{
			scanf("%d", &arr[j]);
		}

		sort(arr, arr+tam);

		cap = (tam / 2);


		printf("Case %d: %d\n", i, arr[cap]);
		i++;
	}


		


	return 0;
}
