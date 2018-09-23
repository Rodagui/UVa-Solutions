/*278 - Chess*/

#include <stdio.h>

int main(){

	int m,n, casos, tot=0, cta=1, i=0;
	char pieza;

	scanf("%d\n", &casos);

	while(casos--){

		scanf("%c %d %d\n", &pieza, &n, &m);
		
		switch (pieza){


			case 'r':
					if(n<=m){
						printf("%d\n", n);
					}
					else{
						printf("%d\n", m );
				}
				break;


			case 'k':	
						cta=0;
						i=1;
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

						printf("%d\n", cta );
				break;
				
			case 'Q':
						if(n==m){
							printf("%d\n",m );
						}
						else{
							if(n<m){
								printf("%d\n", n);
								}
							else{
								printf("%d\n",m );
							}
						}
				break;
			case 'K':
						if((n%2)==0){
							if((m%2)==0){
								tot = (n/2)*(m/2);
								}
							else{
								tot = (n/2)*((m/2)+1);
								}
							}
						else{
							if((m%2)==0){
								tot = ((n/2)+1)*(m/2);
								}
							else{
								tot = ((n/2)+1)*((m/2)+1);
								}
							}

						printf("%d\n", tot);
				break;

			default:
				break;

		}



	}



	return 0;
}