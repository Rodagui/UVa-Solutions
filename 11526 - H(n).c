/*11526 - H(n)*/
#include <stdio.h>
#include <math.h>

int main(){
	
	int casos;

	long long i;

	scanf("%d", &casos);

	for (i = 0; i < casos ; i++){

		long long raizn=0, n=0, tot=0, sum=0, s1=0, j;

		scanf("%lld", &n);
		
		raizn=sqrt(n);

		for ( j = 1; j <= raizn; j++){

			sum= sum+ (n/j);
		}
		
		raizn*=raizn;

		s1 = sum-(raizn);

		tot = sum + s1 ;

		printf("%lld\n", tot);


	}

	return 0;
}