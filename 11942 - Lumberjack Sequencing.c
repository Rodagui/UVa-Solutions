/*11942 - Lumberjack Sequencing*/
#include <stdio.h>
#include <math.h>

int main(){

	int casos;
	scanf("%d", &casos);
	printf("Lumberjacks:\n");
	while(casos--){
		int cad[10];
		int m=0, n=0, i;


		for(i=0; i<10; i++){
			scanf("%d", &cad[i]);
		}

		for(i=0; i<9; i++){

			if(cad[i]>cad[i+1]){
				m++;
			}
			if (cad[i]<cad[i+1]){
				m--;
			}

		}

		m = abs(m);

		if(m==9){
			printf("Ordered\n");
		}
		else{
			printf("Unordered\n");
		}
		
	}
	return 0;
}