/*12503 - Robot Instructions*/

#include <stdio.h>

int main(){

	int casos;
	scanf("%d", &casos);

	while(casos--)
	{

		int ordenes;
		scanf("%d", &ordenes);
		char ord[ordenes];
		int i=0;
		char pal[10];
		int aux;
		aux=ordenes;
		while(aux--){
			scanf("%s", &pal);
			char as[3];
			int ins;
			if(pal[0]=='S'){
				scanf("%s", &as);
				scanf("%d", &ins);
				
				ord[i] = ord[ins-1];
			}
			else{
				ord[i] = pal[0];
			}

			i++;			
		}

		int pos;

		int x=0;
		for (i = 0; i < ordenes; ++i)
		{
			if(ord[i]=='R'){
				x+=1;
			}
			else{
				x-=1;
			}
		}

		printf("%d\n", x);
	}


	return 0;
}



