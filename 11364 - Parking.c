/*11364 - Parking*/

#include <stdio.h>

int main(){
	
	int casos;

	scanf("%d", &casos);

	while(casos--){

		int tiendas;

		scanf("%d", &tiendas);

		int arr[tiendas];

		int i, max=0, min=100, t=0;

		for(i=0; i<tiendas; i++){
			scanf("%d ", &arr[i]);
			if(arr[i]>max){
				max= arr[i];
			}
			if(arr[i]<min){
				min = arr[i];
			}
		}

		t= (max-min)*2;
		printf("%d\n", t);
	}

	return 0;
}