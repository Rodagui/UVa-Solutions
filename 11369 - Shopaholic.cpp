/*11369 - Shopaholic*/

#include <cstdio>
#include <algorithm>
using namespace std;


int main(){

	int casos;

	scanf("%d", &casos);

	while(casos--){

		int art, i, mod=0, desc=0, aux;

		scanf("%d", &art);

		int pre[art];

		for (i = 0; i < art; ++i)
		{
			scanf("%d", &pre[i]);
		}

		sort(pre, pre+art);

		mod= art%3;

		if(mod==1){
			aux = 1;
		}
		else if(mod==2){
			aux = 2;
		}
		else if(mod==0){
			aux=0;
		}

		i=aux;

		while (i < art)
		{
			desc += pre[i];
			i+= 3;
		}

		printf("%d\n", desc );

	}


	return 0;
}