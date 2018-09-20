/*11547 Automatic Answer

Este programa hace operaciones con n numero de entradas
y al final regresa el numero de las centenas de dichos
valores finales*/

#include <stdio.h>
#include <math.h>

int main(){
	
	int n, i, num, j, mod;
	scanf("%d", &n);

	for (i = 0; i < n; i++){
		
		num =0;

		scanf("%d", &num);

		num = num * 63;
		num = num + 7492;
		num = num * 5;
		num = num - 498;
		num= num/10;
		mod = num%10;
		mod = fabs(mod);
		printf("%d\n", mod);
	}

	return 0;
}