/* 311 - Packets*/
#include <stdio.h>

int main(){

	int a, b, c, d, e, f, aux, aux1, cajas=0, aux2;

	while(scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF){
		if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0){
			break;
		}
		cajas=0;
		if(f !=0){
			cajas+= f;
		}

		if(e !=0){
			aux= 11*e;
			cajas += e;
			if(a > aux){
				a-= aux;
			}
			else{
				a=0;
			}
		}

		if(d!=0){
			aux= d*5;
			cajas += d;
			aux1=0;
			if(b>aux){
				b -= aux;
			}
			else{
				aux1 = (aux - b)*4;
				b=0;
			}

			if(a > aux1){
				a -= aux1;
			}
			else{
				a=0;
			}
		}

		if( c!= 0){

			aux= c/4;
			cajas += aux;
			int mod;
			mod = c%4;
			if( mod == 1){
				if(b > 5){
					b -= 5;
				}
				else{
					aux1 = (5-b)*4;
					b = 0;
				}

				if(a> (aux1+7)){
					a -= aux1 + 7;
				}
				else{
					a=0;
				}
				cajas++;
			}
			else if(mod==2){
				if(b > 3){
					b -= 3;
				}
				else{
					aux1 = (3-b)*4;
					b = 0;
				}

				if(a> (aux1+6)){
					a -= aux1 + 6;
				}
				else{
					a=0;
				}
				cajas++;
			}
			else if(mod==3){
				if(b > 1){
					b -= 1;
				}
				else{
					aux1 = (1-b)*4;
					b = 0;
				}

				if(a> (aux1+5)){
					a -= aux1 + 5;
				}
				else{
					a=0;
				}
				cajas++;
			}

		}

		if(b!=0){
			aux = b/9;
			cajas += aux;
			int mod;
			mod = b%9;
			if(mod != 0){
				cajas++;
				aux1 = (9-mod)*4;
				if(a> aux1){
					a-= aux1;
				}
				else{
					a=0;
				}

			}
		}

		if(a != 0){
			aux= a/36;
			cajas+=aux;
			int mod;
			mod= a%36;
			if(mod != 0){
				cajas++;
			}
		}
		printf("%d\n", cajas );
	}
	return 0;
}