/*10976 - Fractions Again?!*/
#include <stdio.h>

int main(){

	int k;
	int sx[10001];
	int sy[10001];
	while(scanf("%d", &k) != EOF)
	{
		int y = 0;


		int i = 0;
		for(y = k + 1; y <= 2 * k ; ++y)
		{
			int p = y * k;
			int q = y - k;

			if(p % q == 0)
			{
				sx[i] = p / q;
				sy[i] = y;
				++i;
			}
		}

		printf("%d\n", i);
		for(int j=0; j<i; j++){
			printf("1/%d = 1/%d + 1/%d\n", k, sx[j], sy[j] );
		}
	}

	return 0;
}