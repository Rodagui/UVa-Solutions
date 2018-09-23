/*694 - The collatz Sequence*/
#include <stdio.h>

int main (){

	long long A=0, limit=0, mod=0; 
	int j=1; 

	while (scanf("%lld %lld", &A, &limit) != EOF){
		

		if(A <0){
			break;
		}

		printf("Case %d: A = %lld, limit = %lld, number of terms = ", j, A, limit);

		int i=1;

		while(A <= limit){

				if(A<=1){
					break;
				}
				mod= A %2;

				if(mod==1){
					A= A*3 +1;
				}
				else{
					A = A/2;
				}
				if(A>limit){
					break;
				}
				i++;

		}
		
		printf("%d\n", i);
		j++;
	}
	

	return 0;
}