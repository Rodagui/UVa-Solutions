/*Sub-prime 11679*/

#include <stdio.h>

int main(){


	int B, N;

	while(scanf("%d %d", &B, &N) != EOF){
		if( B== 0 && N==0){
			break;
		}

		int obli[B];
		int i, casos;
		casos=N;

		for (i = 0; i < B; ++i)
		{
			scanf("%d", &obli[i]);
		}

		int deudor, acree, deuda;

		int deu[B];

		for (i = 0; i < B; ++i)
		{
			deu[i]=0;
		}

		while(casos--){
			scanf("%d %d %d", &deudor, &acree, &deuda);
			obli[acree-1]+=deuda;
			deu[deudor-1] += deuda;
			
			}


			/*for (i = 0; i < B; ++i)
			{
				printf("%d ", obli[i] );
			}

			printf("\n");
			for ( i = 0; i < B; ++i)
			{
				printf("%d ", deu[i]);
			}
			printf("\n");*/

			int reg=1;

			for (i = 0; i < B; ++i)
			{
				if(deu[i]>obli[i]){

					reg=0;
					break;
					
				}
			}

			if(reg==0){
				printf("N\n");
			}
			else{
				printf("S\n");
			}
	}


	return 0;
}