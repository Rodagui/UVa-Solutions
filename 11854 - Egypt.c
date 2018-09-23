/*11854 - Egypt*/

#include <stdio.h>

int main(){

	int a, b, c, aux, max, med, min;

	while(scanf("%d %d %d", &a, &b, &c) != EOF){
		
		if(a==0)
			break;

		if(a>b){
			if(a<c){
				min= b;
				med =a;
				max= c;
			}
			else{
				if(b<c){
					max=a;
					min=b;
					med = c;
				}
				else{
					min = c;
					med=b;
					max= a;
				}
			}
		}
		else{
			if(c<a){
				min=c;
				med=a; 
				max = b;
			}
			else{
				if(c<b){
					min=a;
					med = c;
					max = b;
				}
				else{
					min = a;
					med = b;
					max=c;
				}
			}
		}


		
		aux= ((min*min) + (med*med) )/max;
		if(aux==max){
			printf("right\n");
		}
		else{
			printf("wrong\n");
		}
	}

	return 0;
}