/*11850 - Alaska*/
#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	int gas;

	while(scanf("%d", &gas)!=EOF){
		if (gas==0)
		{
			break;

		}

		int i, cta=0, dif=0, tam, fin;
		tam = gas;
		int pos[gas];

		for (i = 0; i < gas; ++i)
		{
			cin>>pos[i];
		}

		sort(pos, pos+gas);
	

		for ( i = 0; i < tam -1; ++i)
		{
			dif=pos[i+1]-pos[i];
			if (dif<=200)
			{
				cta++;
			}
			
		}

		dif=1422-pos[tam-1];


		if (dif<=200)
		{
			cta++;
		}
		fin = 200-dif;

		if (1422-fin <= pos[tam-1])
		{
			cta++;
		}

		if(cta==tam+1){
			cout<<"POSSIBLE"<<endl;
		}
		else{
			cout<<"IMPOSSIBLE"<<endl;
		}


	
	}


	return 0;
}
