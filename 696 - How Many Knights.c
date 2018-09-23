/*696 - How Many Knights*/

#include <stdio.h>

int main(){


	int m,n, x=0, y=0, mod=0, tot=0;

	while(scanf("%d %d", &m, &n) != EOF){
		int  cta=0, i=1;

		if(m==0 && n==0)
			break;


						if((m==0)||(n==0)){
							printf("0 knights may be placed on a %d row %d column board.\n", m, n);
						}
						else if((m==1)||(n==1)){
							if(m>=n)
								printf("%d knights may be placed on a %d row %d column board.\n", m, m, n);
							else
								printf("%d knights may be placed on a %d row %d column board.\n", n, m, n);
						}
						else if((m==2)||(n==2)){
							
							y= m*n; 
							tot=y/8*4;
							mod= y%8;
							if(mod<=4){
								tot+=mod;
							}
							else{
								tot += 4;
							}

							printf("%d knights may be placed on a %d row %d column board.\n", tot, m, n);

						}
						else{


						if((m%2)==0){
							cta=(m/2)*n;
						}
						else{
							while(i <= n){
								if((i%2)==1){
									cta += (m/2) +1;
								}
								else{
									cta += (m/2);
								}
							i++;
							}
						}

						printf("%d knights may be placed on a %d row %d column board.\n", cta, m, n);
					}
	}

	return 0;
}