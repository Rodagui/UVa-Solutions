/*11479 - Is this the easiest problem?*/
#include <stdio.h>

int main(){

	long long a, b, c;
	int i=1, casos;

	scanf("%d", &casos);

	while(casos --){
		scanf("%lld %lld %lld", &a, &b, &c);



		if((a<(b+c)) && (b < (a+c)) && (c <(a+b))){
			
			/*Caso para los equilateros (todos iguales)*/

			if(a==b){
				if(b==c){
					printf("Case %d: Equilateral\n", i);

				}
			}
				/*caso para solo dos lados iguales ISOSCELES*/

			if(a==b){
					if(a!=c){
						printf("Case %d: Isosceles\n", i); 

					}
				}

			if(a==c){
				if(a!=b){
						printf("Case %d: Isosceles\n", i); 

					}
			}

			if(b==c){
				if(a!=b){
						printf("Case %d: Isosceles\n", i); 

					}
			}

			/*caso para todos diferentes*/
			if((a != b) && (a != c) && (b!= c)){
				printf("Case %d: Scalene\n", i);
			}


		}
		
		else{
			printf("Case %d: Invalid\n", i);
		
		}

		i++;
	}

	return 0;
}