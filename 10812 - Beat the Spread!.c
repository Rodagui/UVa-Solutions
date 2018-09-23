/*10812 - Beat the Spread!*/
#include <stdio.h>

int main(){

	int casos;
	scanf("%d", &casos);

	while(casos != 0){
		
		long long s=0, d=0, x=0, y=0;
		scanf("%lld %lld", &s, &d);

		int mod=0;

		mod = (s-d)%2;

		if(mod!=0){
			printf("impossible\n");
		}
		else{
			x=(s+d)/2; 
	
			y=(s-d)/2;

			if((x<0) || (y<0)){

					printf("impossible\n");
			}
			else{
				printf("%lld %lld\n",x, y);

			}
		}

		casos--;
	}

	return 0;
}