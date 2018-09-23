/*10696 - f91*/
#include <stdio.h>

int main(){


	int num, f;

	while(scanf("%d", &num) != EOF){
		if(num==0){
			break;
		}

		if(num>=101){
			f= num-10;
		}
		else{
			f=91;
		}

		printf("f91(%d) = %d\n",num, f);

	}

	return 0;
}

