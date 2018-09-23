/*1650 - Mirror Clock*/

#include <stdio.h>

int main(){

	int casos;
	scanf("%d", &casos);

	while(casos--){
		int hrs, min, M=0;
		double r, H, l;
		scanf("%d:%d", &hrs, &min);

		if(min==0){
			M=0;
		}
		else{
			M= 60-min;
		}


		if(hrs==11 || hrs == 12){
			if(hrs==11){
				if(min==0){
					H=1;
				}
				else{
					H=12;
				}
			}
			else{
				if(min==0){
					H=12;
				}
				else{
				H=11;
				}
			}
		}
		else{

			r = (5.00/60.00)* (double)min;
			l= (12 - (double)hrs)*5;
			H =(l - r) / 5;
		}

		if(M < 10 || H <10){
			
			if(M<10 &&  H <10){
				printf("0%d:0%d\n",(int) H, M);
			}
			else{
					if(H<10){
						printf("0%d:%d\n",(int) H, M);
					}
					else{
		 				printf("%d:0%d\n",(int) H, M);
					}
			}
				
		}
		else{
			printf("%d:%d\n",(int) H, M);
		}


	}

	return 0;
}