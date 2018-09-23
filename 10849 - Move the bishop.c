/*10849 - Move the bishop*/

#include <stdio.h>
#include <math.h>

int main(){

	int casos;

	scanf("%d", &casos);

	while(casos--){
		int ksos, N;

		scanf("%d %d", &ksos, &N);

		while(ksos--){
			int a, b, c, d, moda, modb, modc, modd, pz=0, pz2=0;

			scanf("%d %d %d %d", &a, &b, &c, &d);

			if(a==c && b==d){
				printf("0\n");
				continue;
			}

			moda = a%2;
			modb = b %2;
			modc = c%2;
			modd = d%2;

			if(moda==modc){
				pz = 1;
			}


			if(modb==modd){
				pz2 = 1;
			}


			if(pz != pz2){
				printf("no move\n");
			}
			else{
				int m1, m2;

				m1 = abs(a-c);
				m2 = abs(b - d);

				if(m1 == m2){
					printf("1\n");
				}
				else{
					printf("2\n");
				}
			}
		}

	}

	return 0;
}