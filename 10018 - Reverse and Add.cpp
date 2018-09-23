/*10018 - Reverse and Add*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int casos;
	
	cin>>casos;

	while(casos--)
	{
		int palin=0, i, tam, j, itera=-1;
		long long num, n, aux;
		string cad;
		string nva;

		cin>>num;
		
		if((2*num)<10){
			num=(2*num);
			itera=1;
			cout<<itera<<' '<<num<<'\n'	;
			continue;
		}

		while(palin!=1)
		{

			cad= to_string(num);
			tam= cad.length();
			j=tam-1;

			for(i=0; i<(tam/2); i++)
			{
				if(i==(tam/2)-1 and cad[i]==cad[j] and itera>-1)
				{
					palin=1;
				}
				if(cad[i]!=cad[j])
				{
					break;
				}
				j--;
			}

			if(palin==0)
			{
				reverse(cad.begin(), cad.end());
				n = stoll(cad);
				num+=n;
			}


			itera++;
		}

		cout<<itera<<' '<<num<<'\n'	;

	}


	return 0;
}