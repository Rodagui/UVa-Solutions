/*12372 - Packing for Holiday*/

#include <stdio.h>

int main(){
	
	int casos, c=1;
	scanf("%d", &casos);

	while(casos--){
		int L, W, H;
		scanf("%d %d %d", &L, &W, &H);

		if(L>20 || W>20 || H>20){
			printf("Case %d: bad\n", c);
		}
		else{
			printf("Case %d: good\n",c );
		}

		c++;

	}
	return 0;
}