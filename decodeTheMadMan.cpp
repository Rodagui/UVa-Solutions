/*10222 - Decode the Mad man*/
#include <iostream>
using namespace std;

int main(){
	string linea;

	while(getline(cin, linea)){

			for (int i = 0; i < linea.size(); ++i)
			{
				if(linea[i]==' ')
					cout<<' ';
				if(linea[i]=='\\')
					cout<<'[';
				if(linea[i]==']')
					cout<<'p';
				if(linea[i]=='[')
					cout<<'o';
				if(linea[i]=='p' or linea[i]=='P')
					cout<<'i';
				if(linea[i]=='o'  or linea[i]=='O')
					cout<<'u';
				if(linea[i]=='i'  or linea[i]=='I')
					cout<<'y';
				if(linea[i]=='u' or linea[i]=='U')
					cout<<'t';
				if(linea[i]=='y'  or linea[i]=='Y')
					cout<<'r';
				if(linea[i]=='t' or linea[i]=='T')
					cout<<'e';
				if(linea[i]=='r'  or linea[i]=='R')
					cout<<'w' ;
				if(linea[i]=='e'  or linea[i]=='E')
					cout<<'q';
				if(linea[i]=='\'')
					cout<<'l';
				if(linea[i]==';')
					cout<<'k';
				if(linea[i]=='l'  or linea[i]=='L')
					cout<<'j';
				if(linea[i]=='k'  or linea[i]=='K')
					cout<<'h';
				if(linea[i]=='j' or linea[i]=='J')
					cout<<'g';
				if(linea[i]=='h' or linea[i]=='H')
					cout<<'f';
				if(linea[i]=='g'  or linea[i]=='G')
					cout<<'d';
				if(linea[i]=='f'  or linea[i]=='F')
					cout<<'s';
				if(linea[i]=='d' or linea[i]=='D')
					cout<<'a';
				if(linea[i]=='.')
					cout<<'m';
				if(linea[i]==',')
					cout<<'n';
				if(linea[i]=='m' or linea[i]=='M')
					cout<<'b';
				if(linea[i]=='n' or linea[i]=='N')
					cout<<'v';
				if(linea[i]=='b' or linea[i]=='B')
					cout<<'c';
				if(linea[i]=='v' or linea[i]=='V')
					cout<<'x';
				if(linea[i]=='c' or linea[i]=='C')
					cout<<'z';

			}	
			cout<<'\n';
		
	}
	
	return 0;
}