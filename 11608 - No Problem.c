/*11608 - No Problem*/
#include <stdio.h>

int main(){

	int ini, caso=1;

	while(scanf("%d", &ini) != EOF){
		if(ini <0){
			break;
		}

		printf("Case %d:\n", caso );

		int prod[12];
		int req[12];
		int i, tot;

		for (i = 0; i < 12 ; ++i)
		{
			scanf("%d", &prod[i]);
		}

		for (i = 0; i < 12; ++i)
		{
			scanf("%d", &req[i]);
		}

		tot = ini;

		for (i = 0; i < 12 ; ++i)
		{
			if(req[i]<=tot){
				printf("No problem! :D\n");
				tot -= req[i];
				tot += prod[i];
			}
			else{
				tot+=prod[i];
				printf("No problem. :(\n");
			}
		}
		caso++;


	}
	

	return 0;
}