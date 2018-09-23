/*10714 - Ants*/
#include <cstdio>
#include <algorithm>
using namespace std;

bool compara(int a, int b);

int main(){

	int casos, lar, ants;

	scanf("%d", &casos);

	while(casos--){

		scanf("%d %d", &lar, &ants);
		int pos[ants];
		int i, max, mitad, min, op1, op2;

		max=lar;
		min=0;
		mitad = lar/2;

		for ( i = 0; i < ants; ++i)
		{
			scanf("%d", &pos[i]);

			if(pos[i] < max and pos[i] >mitad){
				max= pos[i];
			}

			if(pos[i] > min and pos[i] <= mitad){
				min = pos[i];
			}
		}

		sort(pos, pos+ants);
		
		int difm;
		difm = lar - max;
		if(difm > min){
			printf("%d ", difm);
		}
		else{
			printf("%d ", min);
		}

		int dif2;

		dif2= lar - pos[ants-1];

		if(dif2 < pos[0]){
			printf("%d\n", pos[ants-1]);
		}
		else{
			printf("%d\n",lar-pos[0] );
		}


	}
		

	return 0;
}

bool compara(int a, int b){
	return a>b;
}