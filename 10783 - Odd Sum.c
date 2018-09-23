/*10783 - Odd Sum*/
#include <stdio.h>

int main(){

	int n, min, max, i, suma, j;

	scanf("%d", &n);
	getchar();

	for (i = 1; i <= n; ++i)
	{
		scanf("%d\n%d", &min, &max);
		suma = 0;

		for(j=min; j<=max; j++){
			
			if((j%2) == 1){
				suma= suma + j;
			}

		}

		printf("Case %d: %d\n", i, suma);
	}

	return 0;
}