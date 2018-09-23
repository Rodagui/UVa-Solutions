/*11764 - Jumping Mario*/

#include <stdio.h>

int main(){
	
	int i, casos, k=1;

	scanf("%d", &casos);
	while(casos--){
		int saltos, big=0, little=0;

		scanf("%d", &saltos);
		int sal[saltos];

		for(i=0; i<saltos; i++)
		{
			scanf("%d", &sal[i]);
		}

		for (i = 0; i < saltos-1; ++i)
		{
			if(sal[i]>sal[i+1]){
				little++;
			}

			if(sal[i] < sal[i+1]){
				big ++;
			}
		}

		printf("Case %d: %d %d\n", k, big, little);
	k++;

	}

	return 0;
}