#include <stdio.h>
#include <stdlib.h>

int main (){

	int mes, entradas, i, j=1;
	float pago, precio, valor, porc;

	while (scanf("%d %f %f %d", &mes, &pago, &precio, &entradas) != EOF){

		if(mes < 0){
			break;
		}

		/* Tamanio 101 ya que el maximo de meses que puede haber es 100 en la entrada lo dice*/
		float *P = (float*)malloc (101 * sizeof(float));

		for(i=0; i< entradas; i++){
			int m;
			float depreciacion;
			scanf("%d %f", &m, &depreciacion);

			/* Asignar desde mes m hasta los 101 meses la depreciacion se va a ir actualizando conforme se leen los siguientes meses*/
			for(j = m; j < 101; ++j)
				P[j] = depreciacion;
		}

		/*Pago mensual*/
		float pago_mensual = precio / mes;

		i = 0;
		valor = (precio + pago) - (precio + pago) * P[0];

		while(valor < precio)
		{
			++i;
			precio -= pago_mensual;
			valor = valor - valor * P[i];
		}

		if(i==1){
				printf("1 month\n");
		}
		else{
				printf("%d months\n", i);
		}

	}

	return 0;
}