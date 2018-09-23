/*100 - The 3n + 1 problem*/

#include <stdio.h>

int main(){
	
	long long tot, a, b, TOTM, max, min, i, aux;

	while(scanf("%lld %lld", &a, &b) != EOF){


		if(a>b){
			max=a;
			min = b;

		}
		else{
			max=b;
			min=a;
		}

	    TOTM=0;

		for (i = min; i <= max; ++i)
		{
		    	
		tot=1;
			aux = i;
			while(aux >1){
				if((aux%2) ==0){
					aux = aux/2;
				}
				else{
					aux = (3*aux) +1;
				}
				tot++;
			}

			if(tot>TOTM){
				TOTM = tot;
			}

		}

		printf("%lld %lld %lld\n", a, b, TOTM);

	}

	return 0;
}