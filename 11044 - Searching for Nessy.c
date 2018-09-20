/*11044 - Searching for Nessy*/
#include <stdio.h>

int main(){

	int casos;

	scanf("%d", &casos);

	while(casos--){

		int n, m, largo=0, ancho=0, cta=1, qta=1, cuad=3, quad=3, tot=0;
		scanf("%d %d", &n, &m);

		largo= n-2;
		ancho = m-2;

		while(cuad<ancho){
			cuad += 3;
			cta++;
		}

		while(quad<largo){
			quad +=3;
			qta++;
		}

		tot = cta*qta;

		printf("%d\n", tot);


	}


	return 0;
}