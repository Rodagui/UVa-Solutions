/*579 - Clock Hands*/
#include <stdio.h>

int main(){

	float h=0.00, m=0.00, gradh=0.00, gradm=0.00, gradt=0.00;

	while(scanf("%f:%f", &h, &m) != EOF){

		if(h==0)
			break;

		gradh = ((h*30)+(m*0.5));
		gradm = m*6;

		if(gradm<=gradh){
			gradt=gradh - gradm;
		}
		else{
			gradt=gradm - gradh;
		}


		if(gradt <= 180){
			printf("%.3f\n", gradt);
		}
		else{
			gradt = 360- gradt;
			printf("%.3f\n", gradt);
		}
		
	}


	return 0;
}