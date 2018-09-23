/*12527 - Different Digits*/

#include <stdio.h>

int main(){

	int a, b, i, j;
	int arr[10];

	while(scanf("%d %d", &a, &b) != EOF){

		for (i = 0; i < 10; ++i)
		{
			arr[i] =0;
		}

		int aux=0, max, min, cont=0, dig=0, j, l;

		if(b>a){

			max = b;
			min = a;
		}
		else{
			max = a;
			min = b;
		}

		for (i = min; i <= max; ++i)
		{	
			aux=i;
			while(aux != 0){
				dig = aux %10;
				arr[dig] = arr[dig]+1;
				if(arr[dig] >= 2){
					break;
				}
				aux=aux/10;
			}

			for (j = 0; j < 10; ++j)
			{
				if (arr[j] >= 2)
				{
					break;
				}
				if(j==9){
					cont++;
				}
			}

			for (j = 0; j < 10; ++j)
			{
				arr[j]=0;
			}



		}

		printf("%d\n", cont);

	}



	return 0;
}