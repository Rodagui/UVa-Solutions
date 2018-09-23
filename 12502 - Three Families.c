/*12502 - Three Families*/
#include <stdio.h>

int main(){

	int casos;

	scanf("%d", &casos);

	while(casos--){
		int A, B, pay, aux=0;
		double ax=0;
		float tot = 0;
		scanf("%d %d %d", &A, &B, &pay);

		if(A>B){

			aux = A - B;
			ax = (float)pay / (float)(A+B);
			A += aux;
			tot = ax * A;
		}
		else if(A==B){
			tot = pay / 2;
		}
		else{

			aux = B - A;
			ax = (float) pay / (float)(A+B);
			B += aux;
			tot = ax * (float)B;
			tot = (float)pay - tot;
		}

		if(tot < 0){
			tot = 0;
		}
		printf("%d\n", (int)tot);
	}


	return 0;
}