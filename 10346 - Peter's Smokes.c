/*10346 - Peter's Smokes*/
#include <stdio.h>

int main(){

	int cig, total, col=0, num, d;

	while(scanf("%d %d", &cig, &num) != EOF){
		
		total = 0; 			
		col= 0; 				

		while(cig>0){
			total += cig;
			col += cig; 
			cig = col / num; 
			col %= num; 
		}

		printf("%d\n", total );

	}

	return 0; 
}