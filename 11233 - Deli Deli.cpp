/*11233 - Deli Deli*/

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main(){
	
	int irre, words;

	cin>>irre>>words;
	//cin.ignore();

	map <string, string> irregulares;

	string clave, valor;
	for (int i = 0; i < irre; ++i)
	{
		cin>>clave>>valor;
		irregulares[clave]=valor;
		//cout<<clave<<" "<<valor<<'\n';
	}

	string pal;
	int t;

	for (int i = 0; i < words; ++i)
	{
		cin>>pal;
		t=pal.size();
		t-=1;

		if(irregulares.count(pal)){
			cout<<irregulares[pal]<<'\n';
		}
		else if (pal[t]=='y' and pal[t-1]!='a' and pal[t-1]!='e' and pal[t-1]!='i' and pal[t-1]!='o' and pal[t-1]!='u')
		{
			for (int j = 0; j < pal.size()-1 ; ++j)
			{
				cout<<pal[j];
			}
			 cout<<"ies\n";
		}
		else if(pal[t]=='o' or pal[t]=='s' or pal[t]=='x' or (pal[t]=='h' and (pal[t-1]=='c' or pal[t-1]=='s'))){
			cout<<pal<<"es\n";
		}
		else{
			cout<<pal<<"s\n";
		}
	}


	return 0;
}