/*11687 - Digits*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cuenta(int num);

int main(){
	

	char cad[1000001];
	int i;

	while(gets(cad)!= NULL){
		int cont=1, dig=0, num=0;

		if(cad[0]=='E'){
			break;
		}

		dig= strlen(cad);
		
		num=atoi(cad);

		if(dig==1 && num != 1){
			printf("2\n");
			continue;
		}

		while(num != dig){
			cont++;
			num = dig;
			dig = cuenta(dig);
		}

		printf("%d\n", cont);
	}
	return 0;
}

int cuenta(int num){
	int x, d=0;
	x=num;

	while((x/10)>0){
		x/=10;
		d++;
	}

	return d;
}