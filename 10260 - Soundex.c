/*10260 - Soundex*/

#include <stdio.h>
#include <string.h>

int main(){
	
	char nom[20];

	while(scanf("%s", &nom)!=EOF){
		int i;
		int tam;
		int cod[20];
		tam = strlen(nom);

		for (i = tam; i <20 ; ++i)
		{
			nom[i]= 'Y';
		}

		for ( i = 0; i < 20; ++i)
		{
			cod[i]=7;
		}

		for (i = 0; i < 20; ++i)
		{
			if(nom[i]=='B' || nom[i]=='F' || nom[i]=='P' || nom[i]=='V'){
				cod[i]=1;
			}
			else if(nom[i]=='C'||nom[i]=='G'||nom[i]=='J'||nom[i]=='K'||nom[i]=='Q'||nom[i]=='S'||nom[i]=='X'||nom[i]=='Z'){
				cod[i] = 2;
			}
			else if(nom[i]=='D'||nom[i]=='T'){
				cod[i]=3;
			}
			else if(nom[i]=='L'){
				cod[i]= 4;
			}
			else if(nom[i]=='M'||nom[i]=='N'){
				cod[i]=5;

			}
			else if(nom[i]=='R'){
				cod[i]=6;
			}
			else{
				cod[i]=7;
			}
		}
		
		for (i = 0; i < 20; ++i)
		{
			if(cod[i] != cod[i+1] && cod[i]!=7){
				printf("%d", cod[i]);
			}
		}

		printf("\n");





	}

	return 0;
}