/*661 - Blowing Fuses*/

#include <stdio.h>

int main(){

	int n, op, amp, caso=1;
	
	while(scanf("%d %d %d", &n, &op, &amp)!= EOF){
		if(n==0 && op==0 && amp==0){
			break;
		}
		
		int max=0;
		int disp[n];
		int estado[n];
		int i=0, suma=0;

		for (i = 0; i <n; ++i)
		{
			scanf("%d", &disp[i]);
			estado[i]=0;
		}

		int edo=0;
		int bw=0;

		for(i=0; i<op; i++){
			scanf("%d", &edo);
			
			if(estado[edo-1]==0){
				estado[edo-1]=1;
				suma += disp[edo-1];
			}
			else{
				estado[edo-1]=0;
				suma -= disp[edo-1];
			}

			if(suma>max && suma <= amp){
				max=suma;
			}

			if(suma>amp){
				bw =1;
			}
		}

		if(bw==0){
			printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n", caso, max);
		}
		else{
				
			printf("Sequence %d\nFuse was blown.\n", caso);
		}
		printf("\n");
		caso++;
	}

	return 0;
}

