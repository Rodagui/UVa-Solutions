/*12405 - Scarecrow*/
#include <stdio.h>

int main(){ 
	
	int casos, n=1;
	scanf("%d\n", &casos);
	
	while(casos--){
		
		int i, sp=0, tam, mod;
		scanf("%d\n", &tam);
		char arr[tam];
		for(i=0; i<tam; i++){
			scanf("%c", &arr[i]);
		} 
		i=0;
		while(i<tam){
			if(arr[i]=='.'){
				i+=3;
				sp++;
			}
			else{
				i+=1;
			}
		}
		printf("Case %d: %d\n", n, sp);
		n++;
	}
	return 0;
}