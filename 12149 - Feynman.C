/*12149 - Feynman*/

#include <stdio.h>

int main(){

	int  n; 

	while(scanf("%d", &n) != EOF){
		if( n==0)
			break;

		int i, tot=0;

		for (i = 1; i <= n ; ++i)
		{
			tot += i*i ;
		}

		printf("%d\n", tot);
	}

	return 0;
}