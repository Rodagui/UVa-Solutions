/*113 - Power of Cryptography*/
#include <stdio.h>
#include <math.h>

int main(){

	double p, n, r;
	
	while(scanf("%lf %lf", &n, &p) != EOF){
		
		r=pow(p, (1.0/n));
		printf("%.0lf\n",r);

	}

	return 0;
}