/*10050 - Hartals*/
#include <stdio.h>

int main(){

	int casos;
	scanf("%d", &casos);

	while(casos--){

		int tot=0;
		int dias, p;
		scanf("%d\n%d", &dias, &p);
		int h[p];
		char arr[dias];
		int i;

		for (i = 0; i < dias; ++i)
		{
			arr[i]='.';
		}

		
		for ( i = 0; i < p ; ++i)
		{

			scanf("%d", &h[i]);
		}

		int vie, sab, j, saltos, aux;
		for (i = 0; i < p; ++i)
		{
			saltos = h[i];   
			vie = 5;
			sab = 6;
			aux = saltos-1; 
			
			for ( j = 0 ; j < dias; ++j)
			{
				if(j==(saltos-1)){
					arr[j]='x';
					saltos = saltos + h[i];
				}
				if(j==vie){
					vie+=7;
					arr[j]='.';
				}
				if(j==sab){
					sab+=7;
					arr[j]='.';
				}

			}
		}


		for ( i = 0; i < dias; ++i)
		{
			if(arr[i]=='x'){
				tot++;
			}
		}

		printf("%d\n", tot );
	}
	

	return 0;
}