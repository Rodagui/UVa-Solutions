/*10550 - Combination Lock*/

#include <stdio.h>

int main(){

	int pi, c1, c2, c3;

	while(scanf("%d %d %d %d", &pi, &c1, &c2, &c3) != EOF){
		
		int tot=0;

		if((pi==0) && (c1 == 0) && (c2 == 0) && (c3 ==0)){
			break;
		}

		tot+= 720;

		if(c1 > pi){
			tot+= pi*9 + (40-c1)*9;
		}
		else{
			tot += (pi-c1)*9;
		}

		tot+=360;

		if(c2>=c1){
			tot+= (c2-c1)*9;
		}
		else{
			tot+= (40-c1)*9 + (c2*9);
		}

		if(c3<=c2){
			tot+= (c2-c3)*9;
		}
		else{
			tot+= (40-c3)*9 + (c2*9);
		}
		
		printf("%d\n", tot );
	}

	return 0;
}