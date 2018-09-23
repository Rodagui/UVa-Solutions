/*1225 - Digit Counting*/

#include <stdio.h>

int main(){

	int casos, i, n, dig, aux;
	int arr[10];
	scanf("%d", &casos);

	while(casos--){
		

		for (i = 0; i < 10; ++i)
		{
			arr[i] = 0;
		}

		scanf("%d", &n);

		for (i = 1; i <= n; ++i)
		{
			aux=i;
			while( aux != 0){
				dig = aux %10;
				arr[dig] = arr[dig]+1;
				aux = aux/10;

			}
		}

		for (i = 0; i < 10; ++i)
		{
			if(i==9){
				printf("%d", arr[9]);
			}
			else{
				
			printf("%d ", arr[i]);
			}

		}
		printf("\n");
	}
	return 0;
}