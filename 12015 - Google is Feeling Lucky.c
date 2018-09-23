/*12015 - Google is Feeling Lucky*/

#include <stdio.h>

int main(){

	int casos, kso=1;

	scanf("%d", &casos);
		while(casos--){
			char paginas[10][101];
			int rel[11];
			int i, j, max=0;
			for(i=0; i<10; i++){
				scanf("%s", &paginas[i]);
				scanf("%d", &rel[i]);
				if(rel[i]>max){
					max=rel[i];
				}
			}
			printf("Case #%d:\n", kso);
			for (i = 0; i <10 ; ++i)
			{
				if(rel[i]>= max){
					printf("%s\n", paginas[i] );
				}
			}
			kso++;
		}
	
	return 0;
}