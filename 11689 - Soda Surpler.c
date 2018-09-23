/*11689 - Soda Surpler*/

#include <stdio.h>

int main(){

	int casos, e, f, p, i, tot, aux=0;

	scanf("%d", &casos);

	while(casos--){

		scanf("%d %d %d", &e, &f, &p);

		tot = 0;
		e= e+f;

		while(e >= p){
			aux = e/p;
			tot += aux;
			if(e%p != 0){
				aux += (e%p);
			}
			e = aux;
		}

		printf("%d\n", tot);

	}

	return 0; 
}