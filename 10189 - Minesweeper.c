/*10189 - Minesweeper*/

#include <stdio.h>

int main(){

	int r=0, c=0, i=0, j=0;

	const int mov[8][2] = {
		{-1, -1},
		{-1, 0},
		{-1, 1},
		{0, -1},
		{0, 1},
		{1, -1},
		{1, 0},
		{1, 1}
	};

	int  caso=1;

	while(scanf("%d %d\n", &r, &c) !=EOF ){

		if(r==0){
			break;
		}

		char min[r][c];
		int num[r][c];


		for(i=0; i<r; i++){
			for(j=0; j<c; j++){
				num[i][j]=0;
			}

			
		}


		for(i=0; i<r; i++){
			for(j=0; j<c; j++){
				scanf("%c", &min[i][j]);
			}
			scanf("\n");
			
		}


		for(i=0; i<r; i++){
			for(j=0; j<c; j++){

				if((min[i][j])== '*'){
					num[i][j] = 9;
				}
				else{
					num[i][j]= 0;
				}

			}

		}

	int v, x, y;

	for(i=0; i<r; i++){
			for(j=0; j<c; j++){

				if(num[i][j] == 9 ){

					for(v = 0; v < 8; ++v){
						x = i + mov[v][0];
						y = j + mov[v][1];
						if(x >= 0 && x < r && y >= 0 && y < c && num[x][y] != 9){
							++num[x][y];	
						}
					}	

				}




			}
		}

		if(caso > 1)
			printf("\n");
		printf("Field #%d:\n", caso);
		for(i=0; i<r; i++){
			for(j=0; j<c; j++){
				if(num[i][j] == 9){
					printf("*");
				}
				else{
					printf("%d", num[i][j]);
				}
					
			}
			printf("\n");
		}

		caso++;


	}


	return 0;
}