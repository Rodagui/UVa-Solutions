/*11614 - Etruscan Warriors Never Play Chess*/
#include <stdio.h>
#include <math.h>

int main(){
	
	int casos;
	scanf("%d", &casos);

	while(casos--){
		long long n, raiz, res;

		scanf("%lld", &n);

		raiz = sqrt(1+8*n);

		res = (raiz - 1) /2;

		printf("%lld\n", res);
	}
	return 0;
}