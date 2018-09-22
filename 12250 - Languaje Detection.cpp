/*12250 - Language Detection*/

#include <iostream>

using namespace std;

int main(){
	
	string pal;
	int k=1;

	while(cin>>pal){
	if(pal=="#")
		break;

	if(pal=="HELLO")
		cout<<"Case "<<k<<": ENGLISH\n";
	else if(pal =="HOLA")
		cout<<"Case "<<k<<": SPANISH\n";
	else if(pal=="HALLO")
		cout<<"Case "<<k<<": GERMAN\n";
	else if(pal=="BONJOUR")
		cout<<"Case "<<k<<": FRENCH\n";
	else if(pal=="CIAO")
		cout<<"Case "<<k<<": ITALIAN\n";
	else if(pal=="ZDRAVSTVUJTE")
		cout<<"Case "<<k<<": RUSSIAN\n";
	else
		cout<<"Case "<<k<<": UNKNOWN\n";
	
	k++;
	}

	return 0;
}