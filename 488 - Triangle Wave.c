/*488 - Triangle Wave*/
#include <stdio.h>
#include <stdlib.h>

int main(){

	int n, i, ampli, freq, j, k, l;

	scanf("%d\n", &n);

	for (l=0; l<n; l++){

		scanf("%d\n%d\n", &ampli, &freq); /**/

		if(l>0){/**/
			printf("\n"); /**/
		}
		
		for (k=1; k<=freq; k++){

			if(k>1){/**/
				printf("\n");
			}
			
			for (i=1; i <= ampli; ++i){
				for(j=1; j<=i; j++){
				printf("%d", i);
				}
			printf("\n");
			}

			for (i=(ampli-1); i >= 1; --i){
				for(j=1; j<=i; j++){
					printf("%d", i);
				}
			printf("\n");

			}
		}
	}


	return 0;
}