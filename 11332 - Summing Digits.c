/*11332 - Summing Digits*/
#include <math.h>
#include <stdio.h>

int main(){
	
	int num; 

	while(scanf("%d", &num) != EOF){

	int mod=0, sub=0;

		if(num==0){
			break;
		}

		while((num/10) != 0){ 
		sub =0;
			while(num != 0){

				mod = num %10; 
				sub += mod; 
				num = num/10;
			}

			num = sub;
		}

		printf("%d\n", num);
	}
	return 0;
}