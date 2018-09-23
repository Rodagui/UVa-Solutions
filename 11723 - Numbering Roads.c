/*11723 - Numbering Roads*/
#include <stdio.h>

int main(){
	
	int calles, num, caso=1, suf, suff, mod, sufmax, call;
	while(scanf("%d %d", &calles, &num) != EOF){

		if(calles == 0)
			break;

		if(num > calles){
			printf("Case %d: 0\n", caso);
			caso++;
		}

		else {
			
			call = calles - num;
			suf = call / num;
			mod = call % num;
			sufmax = num * 26;
			suff = suf + 1;

			if (call>sufmax){
				printf("Case %d: impossible\n", caso);
				caso++;
			}

			else {

				if(mod == 0){
				printf("Case %d: %d\n", caso, suf);
				caso++;
			}
				else{
					printf("Case %d: %d\n", caso, suff);
					caso++;
				}
			}
		}
	}
	return 0;
}