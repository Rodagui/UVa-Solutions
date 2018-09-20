/*272 - TEX Quotes*/

#include <stdio.h>

int main(){

	char letra;
	int cont=1;

	while(scanf("%c", &letra) != EOF){
		int i;

	
			if(letra=='"'){
				if((cont%2)==1){
					printf("``");
					cont++;
				}
				else{
					printf("''");
					cont++;
				}
			}
			else{
				printf("%c", letra);
			}

	}

	return 0;
}