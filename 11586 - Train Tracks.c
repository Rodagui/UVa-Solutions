/*11586 - Train Tracks*/
#include <string.h>
#include <stdio.h>

int main(){

	int casos;
	scanf("%d\n", &casos);
	char cad[151];
	
	int c1=0, c2=0, T=0, i, cont=0;


	while(casos--){

	for ( i = 0; i < 150 ; i++)
	{
		cad[i] ='K';
	}
		gets(cad);

		for (i = 0; i < 150; ++i)
		{
			if(cad[i]=='K'){
				break;
			}
			
			if(cad[i]=='M' || cad[i]=='F'){
				if(cad[i]=='M'){
					c1++;
					if(cad[i+1]=='M'){
						c2++;
					}
					else{
						c2--;
					}
				}
				else{
					c1--;
					if(cad[i+1]=='M'){
						c2++;
					}
					else{
						c2--;
					}
				}

				i++;
				cont++;
			}

		}


		T=c1+c2;
		if(T==0){
			if(cont == 1){
				printf("NO LOOP\n");
			}
			else{
			printf("LOOP\n");
				
			}
		}
		else{
			printf("NO LOOP\n");
		}
		T=0;
		c1=0;
		c2=0;
		cont=0;

	}

	return 0;

}