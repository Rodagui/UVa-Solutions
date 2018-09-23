/*11461 - Square Numbers*/
#include <stdio.h>
#include <math.h>

int main(){
	int a, b;

	while(scanf("%d %d", &a, &b) != EOF){

	if( a==0 && b==0){
	break;
	}
	int i, raiz=0, cta=0;

	if(a==0){
		a++;
	}
	
	for(i = a; i<=b; i++){
		raiz=(int)sqrt(i);

		if((raiz*raiz)==i){
			cta++;
		}
	}

	printf("%d\n", cta);

	}

	return 0;

}