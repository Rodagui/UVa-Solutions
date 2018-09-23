/*11292 - Dragon of Loowater*/
#include <cstdio>
#include <algorithm>
using namespace std;


int main(){

	int c, h;

	while(scanf("%d %d", &c, &h) != EOF){
		if(c==0 and h==0){
			break;
		}

		int i, j=0, tot=0, aux;
		int cab[c];
		int alt[h];

		for (i = 0; i < c; ++i)
		{
			scanf("%d", &cab[i]);
		}

		for (i = 0; i < h; ++i)
		{
			scanf("%d", &alt[i]);
		}

		sort(cab, cab+c);
		sort(alt, alt+h);
		aux=c;
		for (i = 0; i < c; ++i)
		{
			if(cab[i]<=alt[j]){
				tot+=alt[j];
				j++;
				aux--;
			}
			else{
				j++;
				i--;
			}

			if(aux==0){
				break;
			}

			if(j==h and aux > 0){
				tot=0;
				printf("Loowater is doomed!\n");
				break;
			}

		}
		if(tot!=0){
		printf("%d\n", tot );

		}
	}

	return 0;
}
