/*11934 - Magic Formula*/
#include <stdio.h>

int main()
{

	int a, b, c, d, L, mod, num=0;

	while(scanf("%d %d %d %d %d", &a, &b, &c, &d, &L) != EOF){
		num=0;
		if(a==0 && b==0 && c==0 && d==0 && L==0){
			break;
		}


		int i, fx;

		for (i = 0; i <=L ; ++i)
		{
			fx=(a*i*i)+(b*i)+c;
			mod = fx %d;
			if (mod==0)
			{
				num++;
			}
		}

	printf("%d\n", num);
	}
	
	return 0;
}