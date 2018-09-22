/*12279 - Emoogle Balance*/

#include <stdio.h>

int main(){
	
	int casos, cont=1, i;

	while(scanf("%d", &casos) != EOF){
		if( casos==0){
			break;
		}

		int num;
		int tot=0;
		for(i=0; i<casos; i++){
			scanf("%d", &num);
			if(num==0){
				tot--;
			}
			else{
				tot++;
			}
		}
		printf("Case %d: %d\n", cont, tot);
		cont++;
	}

	return 0;
}