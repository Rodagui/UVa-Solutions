/*11661 - Burger Time*/
#include <stdio.h>
#include <math.h>

int main(){
	
	int n;
	while(scanf("%d", &n)!= EOF){

		if(n==0)
			break;

		char cad[n];
		int i, numR=0, numD=0, cond=0;

		scanf("\n");

		for (i = 0; i <n; ++i)
		{
			scanf("%c", &cad[i]);
			if(cad[i]=='Z'){
				cond = 1;
				continue;
			}

			if(cad[i]=='R'){
				numR++;
			}

			if(cad[i]=='D'){
				numD++;
			}
			
		}
		
		if(cond==1){
			printf("0\n");
			continue;
		}

		int D[numD];
		int R[numR];
		int j=0, k=0;

		for (i = 0; i < n ; ++i)
		{
			if(cad[i]=='R'){
				R[j]=i+1;
				j++;
			}
			if(cad[i]=='D'){
				D[k]=i+1;
				k++;
			}
		}

		int va=0, min=n, resta=0, l, m=0;

		int MIN[numR];
		k=0;

		for (i = 0; i < numR; ++i)
			{
				for (l = 0; l < numD; ++l)
				{
					resta= R[i]-D[l];
					va = abs(resta);
					if(va<min){
						min = va;
					}

				}

				MIN[k]= min;
				k++;
			}

		int TOTmin=n;

		for(i=0; i< numR; i++){
			if(MIN[i]<TOTmin){
				TOTmin=MIN[i];
			}
		}

		printf("%d\n", TOTmin);




	}

	return 0;
}