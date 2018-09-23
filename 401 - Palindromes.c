/*401 - Palindromes*/
#include <stdio.h>
#include <string.h>

int main(){

	char cad[21];
	char caracteres[2][43]={{'0','1','2','3','4','5','6','7','8','9','.','.','.','.','.','.','.', 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},
							{'O','1','S','E','.','Z','.','.','8','.','.','.','.','.','.','.','.','A','.','.','.','3','.','.','H','I','L','.','J','M','.','O','.','.','.','2','T','U','V','W','X','Y','5'}};
	int i;

	while(scanf("%s\n", &cad) != EOF){
	
		int tam, mod=0, i, j, pos=0, nocoin=0;
		int mstr=0, mirror=0;
		tam= strlen(cad);
		mod = tam % 2;
		j=tam-1;
		int aux;
		aux = tam/2;

		if(mod==0){
			for (i = 0; i < aux ; ++i)
			{
				pos=(int)cad[i];
				pos -=48;
				
				if(cad[i]==cad[j]){
					if (caracteres[0][pos]==caracteres[1][pos])
					{
						mirror++;
					}
				}
				else{
					if(cad[j]==caracteres[1][pos]){
						mstr++;
						mirror++;
					}
					else{
						nocoin++;
						mstr=0;
						mirror=0;
						break;
					}
				}
				
				j--;

			}

			if (mirror==aux)
			{

				if (mstr>0)
				{
					printf("%s -- is a mirrored string.\n\n",cad);
				}
				else{
				printf("%s -- is a mirrored palindrome.\n\n", cad);
				}
					
			}
			else{
				if(nocoin>0){
					printf("%s -- is not a palindrome.\n\n", cad);
				}
				else{

				printf("%s -- is a regular palindrome.\n\n", cad);
				}
			}



		}
		else{

			for (i = 0; i < aux ; ++i)
				{
					pos=(int)cad[i];
					pos -=48;
				
					if(cad[i]==cad[j]){
						if (caracteres[0][pos]==caracteres[1][pos]){
							mirror++;
						}
					}
					else{
						if(cad[j]==caracteres[1][pos]){
							mstr++;
							mirror++;
							nocoin++;
						}
						else{
							nocoin++;
						}
					}
				
					j--;

				}


				pos=(int)cad[aux];
				pos -=48;

				int esm=0;

				if (caracteres[0][pos]==caracteres[1][pos]){
					esm=1;
				}


			if (mirror==aux && esm ==1)
			{

				if (mstr>0)
				{
					printf("%s -- is a mirrored string.\n\n", cad);
				}
				else{
					printf("%s -- is a mirrored palindrome.\n\n", cad);
				}
					
			}
			else{

				if(nocoin>0){
					printf("%s -- is not a palindrome.\n\n", cad);
				}
				else{
				printf("%s -- is a regular palindrome.\n\n", cad);
				}
			}
		}
	}
	return 0;
}