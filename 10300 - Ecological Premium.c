/*10300 - Ecological Premium*/

#include <stdio.h>

int main(){

	int casos;

	scanf("%d", &casos);

	while(casos--){
		int g;
		scanf("%d", &g);
		long long t=0, esp, ani, amab;
		
		while(g--){
			scanf("%lld %lld %lld", &esp, &ani, &amab);
			if(esp==0 || ani==0 || amab==0){
				continue;
			}
			else{

				t += esp*amab;
			}
		}
		printf("%lld\n", t );
	}

	return 0;
}