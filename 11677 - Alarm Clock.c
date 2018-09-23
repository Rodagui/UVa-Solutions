/*11677 - Alarm Clock*/

#include <stdio.h>

int main(){

	int Ha, Ma, h, m, aux;

	while(scanf("%d %d %d %d", &Ha, &Ma, &h, &m) != EOF){
		int mins=0;
		if(Ha==0 && Ma==0 && h==0 && m==0){
			break;
		}
		
		if(Ha>h){
			mins=60-Ma;
			Ha++;
			aux = 24-Ha;
			mins = mins + (aux*60);
			mins = mins + (h*60) + m;
		}
		else if(Ha==h){
			if(Ma>m){
				mins = 24*60;
				mins = mins - (Ma-m);
			}
			else{
				mins = m-Ma;
			}
		}
		else{
			mins = 60 - Ma;
			Ha++;
			mins = mins + (h-Ha)*60;
			mins = mins + m;
		}

		printf("%d\n",mins );
	}
	return 0;
}