#include <stdio.h>

int main(){

	int personas;

	while(scanf("%d\n", &personas) != EOF){
	char cancion[16][10]={{"Happy"}, {"birthday"}, {"to"}, {"you"}, {"Happy"}, {"birthday"}, {"to"}, {"you"}, {"Happy"}, {"birthday"}, {"to"}, {"Rujia"}, {"Happy"}, {"birthday"}, {"to"}, {"you"} } ;
		char invi[personas][25];

	int i, j=0;

	for (i = 0; i < personas; ++i)
	{
		scanf("%s", &invi[i]);
	}

	int a=0, b=0, mod, div, k;

	div = personas / 16;
	mod= personas % 16;
	if(mod!=0){
		div++;
	}

	div *= 16;
	



	while(div--)
	{
		printf("%s: %s\n", invi[a], cancion[b]);
		a++;
		b++;
		if(a==personas){
			a=0;
		}
		if(b==16){
			b=0;
		}
	}

		
	}
	return 0;
}