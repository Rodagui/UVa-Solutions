/*12403 - Save Setu*/
#include <stdio.h>

int main(){
	
	int operaciones, tot=0;

	scanf("%d", &operaciones);

	while(operaciones--){

		char op[8];
		int donativo=0;
		getchar();

		scanf("%s", &op);
	
		if(op[0] == 'd'){

			scanf("%d", &donativo);
			tot += donativo;
		}
		else{

			printf("%d\n", tot );
		}

	}

	return 0;
}