/*10945 - Mother bear*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	string frase;
	string nva;
	int tam, i, t, j, k, Npal;

	while(getline(cin, frase)){
		Npal=0;
		nva=frase;
		t=0;
		j=0;

		if(frase=="DONE"){
			break;
		}
		tam = frase.length();
		
		for (i = 0; i < tam; ++i)
		{
			if(frase[i]!='.' and frase[i]!=',' and frase[i]!='!' and frase[i]!='?' and frase[i]!=' ' and frase[i]!='\''){
				frase[i] = tolower(frase[i]);
				t++;
				nva[j]=frase[i];
				j++;
			}
		}

		k=t;

		for (i = 0; i < t/2; ++i)
		{
			if(nva[i]!=nva[k-1]){
				Npal=1;
			}
			k--;
		}

		if(Npal==1){
			cout<<"Uh oh.."<<endl;
		}
		else{
			cout<<"You won't be eaten!"<<endl;
		}


	}
	return 0;
}