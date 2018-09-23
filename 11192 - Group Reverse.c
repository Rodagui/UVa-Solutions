/*11192 - Group Reverse*/

#include <stdio.h>
#include <string.h>

int main(){

	int g;
	char cad[101];

	while(scanf("%d ", &g)!= EOF){
		if(g==0){
			break;
		}

		scanf("%s", &cad);
		
		int i, div, tam, up, dwn, aux;
		
		tam = strlen(cad);
		div =  tam / g;

		up = div;
		dwn = 0;
		while(up<=tam){

			aux = up - 1;
			
			for (i = aux; i >= dwn ; --i)
			{
				printf("%c", cad[i]);
			}
			up += div;
			dwn += div;
		}

		printf("\n");
	
		
	}

	return 0;
}