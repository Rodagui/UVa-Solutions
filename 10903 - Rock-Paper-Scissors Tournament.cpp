/*10903 Rock-Paper-Scissors Tournament*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, k, b=1;
	int win[101];
	int lose[101];

	while(cin>>n>>k){
		
		if(b>1)
			printf("\n");

		if(n==0)
			break;

		int i, r, pos1, pos2, nodef=0;
		string turno1, turno2;
		int w, l;
		double tot;

		for (i = 0; i < 101; i++)
		{
			win[i]=0;
			lose[i]=0;
		}

		r = (k*n*(n-1))/2;

		for ( i = 0; i < r; i++)                
		{
			cin>>pos1>>turno1>>pos2>>turno2;

			if(turno1=="rock" and turno2=="paper"){
				win[pos2]++;
				lose[pos1]++;
			}
			else if(turno1=="rock" and turno2=="scissors"){
				win[pos1]++;
				lose[pos2]++;
			}
			else if(turno1=="paper" and turno2=="rock"){
				win[pos1]++;
				lose[pos2]++;
			}
			else if(turno1=="paper" and turno2=="scissors"){
				win[pos2]++;
				lose[pos1]++;
			}
			else if(turno1=="scissors" and turno2=="rock"){
				win[pos2]++;
				lose[pos1]++;
			}
			else if(turno1=="scissors" and turno2=="paper"){
				win[pos1]++;
				lose[pos2]++;
			}
			
		}


		for (i = 1; i <= n; i++)
		{
			w=win[i];
			l=lose[i];

			if(w==0 and l==0){
				printf("-\n");
			}else{

				tot=(double)w / ((double)w + (double)l);
				printf("%.3f\n", tot );
			}
			
		}

	b++;
	}

	return 0;
}