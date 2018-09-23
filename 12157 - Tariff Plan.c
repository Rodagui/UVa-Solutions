/*12157 - Tariff Plan*/

#include <stdio.h>

int main(){

	int casos, cont=1;

	scanf("%d", &casos);

	while(casos--){

		int kso, i, num=0, aux, totM=0, totJ=0;

		scanf("%d", &kso);

		for(i=0; i<kso; i++){
			scanf("%d", &num);
			num+=1;
			aux=num; 

			int M=0, J=0;

			while(aux>0){
				aux -=30; 
				M++;
			}

			while(num>0){
				num-=60;
				J++;
			}

			totM += M;
			totJ += J;
		}

		totJ *= 15;
		totM *= 10;

		if(totM<=totJ){
			if(totM==totJ){
				printf("Case %d: Mile Juice %d\n", cont, totM);
			}
			else{
				printf("Case %d: Mile %d\n", cont, totM);
			}
		}
		else{
			printf("Case %d: Juice %d\n", cont, totJ);
		}

		cont++;
	}


	return 0;
}