/*573 - The Snail*/
#include <stdio.h>

int main(){

	double u, d, h, f;
	while(scanf("%lf %lf %lf %lf", &h, &u, &d, &f) != EOF && h != 0){

		double ha = 0;
		int dias = 1;
		double fat = u * f / 100.0;

		while(ha >= 0 && ha < h)
		{
			ha += u;
			
			if(u > 0)
				u = u - fat;

			if(ha > h){
				break;
			}
			
			ha -= d;
			
			if(ha < 0)
				break;
			++dias;
		}

		if(ha < 0)
			printf("failure on day %d\n", dias);
		else
			printf("success on day %d\n", dias);

	}
	return 0; 
}