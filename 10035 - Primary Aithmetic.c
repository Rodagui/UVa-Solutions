/*10035 - Primary Aithmetic*/
#include <stdio.h>

int main(){
	
	long long a, b;

	while(scanf("%lld %lld", &a, &b) != EOF){
		if (a==0 && b==0){
			break;
		}
		long long up, dwn, mup, mdwn, suma;
		int n=0, acarreos=0;

		if(a>=b){
			up = a;
			dwn = b;
		}
		else{
			up = b;
			dwn = a;
		}

		while(up > 0){

			mup = up % 10;
			mdwn = dwn % 10;
			suma = mup+mdwn+n;
			if(suma > 9){

				acarreos++;
				n = ((mup+mdwn+n) / 10) % 10;
			}
			else{
				n=0;
			}
			up = up / 10;
			dwn = dwn / 10;
		}

		if(acarreos == 0){
			printf("No carry operation.\n");
		}
		else if(acarreos == 1){
			printf("1 carry operation.\n");
		}
		else{
			printf("%d carry operations.\n", acarreos);
		}


	}
	return 0;
}