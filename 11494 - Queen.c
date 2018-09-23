/*11494 - Queen*/
#include <stdio.h>
#include <math.h>

int main(){
	
	int x1, x2, y1, y2, mov, resx, resy;

	while(scanf("%d %d %d %d ", &x1, &y1, &x2, &y2) != EOF){
		if(x1 == 0){
			break;
		}

		if(x1 == x2 || y1 == y2){
			mov = 1;
			if(x1==x2 && y1==y2){
				mov=0;
			} 

		}
		else{
			resx= abs(x1-x2);
			resy = abs(y1-y2);

			if(resx==resy){
				mov=1;
			}
			else{
				mov=2;
			}
		}

		printf("%d\n",mov);
	}

	return 0;
}