/*371 - Ackerman Functions*/
#include <stdio.h>

long determina(long i); 

int main(){


	long a, b;

	while(scanf("%ld %ld", &a, &b) != EOF){

		if (a==0 && b==0){
			break;
		}


		long max, min, i, num=0, v=0, Vmax=0; 
		if(a >= b){
			max = a;
			min = b;
		}
		else{
			max = b;
			min = a;
		}

		for (i = max; i >= min ; i--)
		{
			v = determina(i);
			if (v>=Vmax){
				Vmax = v;
				num = i;
			}
		}

		printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n", min, max, num, Vmax);

	}


	return 0;
}

long determina(long i){

	long long x=i;
	long cont=0;
	int mod;

	if(x == 1){
		return 3;
	}

	while(x != 1){
		mod = (int) x%2;
		if(mod==0){
			x /= 2;

		}
		else{
			x = (3*x) + 1;
		}
		cont++;
	}

	return cont;

}