/*11743 - Credit Check*/

#include <cstdio>
#include <algorithm>
#include <utility>
using namespace std;

int main(){

	int casos;
	scanf("%d", &casos);
	while(casos--){
		int n;
		int num[16];
		int i=0, j, dig, p=0;

		for (i = 0; i < 4; ++i)
		{
			scanf("%d", &n);
			int div=1000;
			for (j = 0; j < 4; ++j) 
			{	
				dig = n / div;    
				num[p]=dig;		
				n-=(dig*div);   
				div/=10;		
				p++;			

			}
		}

		i=1;
		int suma=0;
		while(i<16){
			suma+= num[i];
			i+= 2;
		}

		i=0;
		int zuma=0, dup=0;
		while(i<16){
			dup = num[i]*2;

			if(dup>=10){
				zuma += (dup%10) + (dup/10);
			}
			else{
				zuma+= dup;
			}
			i+= 2;
		}

		int t=0;
		t= zuma+ suma;
		if((t%10)==0){
			printf("Valid\n");
		}
		else{
			printf("Invalid\n");
		}
	}
	return 0;
}