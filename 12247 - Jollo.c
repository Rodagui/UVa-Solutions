/*12247 - Jollo*/
#include <stdio.h>

void determina(int a, int b, int c, int x, int y, int aux);

int main(){
	
	int a=0, b=0, c=0, x=0, y=0;


	
	while(scanf("%d %d %d %d %d\n", &a, &b, &c, &x, &y) != EOF){
		if(a==0 && b==0 && c==0 && x==0 && y==0){
			break;
		}
	int medp=0, minp=0, aux=0, max=0, med=0, min=0;
/*Esta parte solo determina de menor a mayor los números
de las cartas de la princesita Y ya sé que te enojas peeeeero
los min, med, que tienen p al final hacen referencia a los del principe ñ.ñ*/
if(a>b){
	  if(b>c){
	  	max=a;
	  	med=b;
	  	min=c;
	  }
	  else{
	  	if(a<c){
	  		max=c;
	  		med=a;
	  		min=b;
	  	}
	  	else{
	  		max=a;
	  		med=c;
	  		min=b;
	  	}
	  }
	}
	else{
	 if(c<a){
	   min=c;
	   med=a;
	   max=b;
	 }
	 else{
	   if(c<b){
	      min=a;
	      med=c;
	      max=b;
	   }
	   else{
	      min=a;
	      med=b; 
	      max= c; 
	   }
	 }
	}



		if(x > y){
			medp= x;
			minp= y;
		}
		else{
			medp = y;
			minp = x;
		}

		if(minp < min){
			if(medp <med){ 
				printf("-1\n");
			}
			else{
				if(medp < max){
					printf("-1\n");
				}
				else{
					aux= max+1;

					if(aux==52 && (( a==52 ) || ( b==52 ) || ( c==52 ) || ( x==52 ) || ( y==52 ))){
					printf("-1\n");
					}
					else{

					if(aux >= 53){
						printf("-1\n");
					}
					else{
						determina(min, med, max, minp, medp, aux);
					}
					}


					
				}
			}
		}
		else{
			if(minp < med){

				if(medp<med){
					printf("-1\n");
				}
				else{
					if(medp<max){

						printf("-1\n");
					
					}
					else{
						aux= max +1;
						if(aux==52){

							if(( a==52 ) || ( b==52 ) || ( c==52 ) || ( x==52 ) || ( y==52 )){
								
							printf("-1\n");
							}
							else{
								printf("52\n");
							}
						 
						}
						else{
							if(aux >= 53){
								printf("-1\n");
							}
							else{
							determina(min, med, max, minp, medp, aux);
							}
						}
					}
				}
			}
			else{

				if(minp < max){
					if(medp<max){
						aux= med +1;

						if(aux==52){

							if(( a==52 ) || ( b==52 ) || ( c==52 ) || ( x==52 ) || ( y==52 )){
								
							printf("-1\n");
							}
							else{
								printf("52\n");
							}
						}
						else{

					if(aux >= 53){
						printf("-1\n");
					}
					else{
						determina(min, med, max, minp, medp, aux);
					}
						}
					}
					else{
						aux=med+1;

						if(aux==52){

							if(( a==52 ) || ( b==52 ) || ( c==52 ) || ( x==52 ) || ( y==52 )){
								
							printf("-1\n");
							}
							else{
								printf("52\n");
							}
						}
						else{

					if(aux >= 53){
						printf("-1\n");
					}
					else{
						determina(min, med, max, minp, medp, aux);
					}
						}

					}
				}
				else{

					aux= 1;
					if(aux >= 53){
						printf("-1\n");
					}
					else{
						determina(min, med, max, minp, medp, aux);
					}
				}

				


			}

		}
	}

	return 0;
}

void determina(int a, int b, int c, int x, int y, int aux){
	int A=a, B=b, C=c, X=x, Y=y, AUX=aux;

	if(AUX <= 52 && AUX != A && AUX != B && AUX != C && AUX != X && AUX != Y ){
		printf("%d\n", AUX);
	}
	else{
		AUX++;
		if(AUX>=53){
			printf("-1\n");
			return;
		}
		determina(A, B, C, X, Y, AUX);
	}

}



