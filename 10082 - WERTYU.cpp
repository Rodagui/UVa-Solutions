/*10082 - WERTYU*/

#include <cstdio>
#include <algorithm>
#include <utility>
#include <iostream>
#include <cstring>
using namespace std;

int main(){

	char letra[105]={'a',
					 'a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a',' ','a','a','a','a','a','a','a','a','a','a','a','M','0',',','.','9','a','1',
					 '2','3','4','5','6','7','8','9','L',';','-','a','a','a','A','V','X','S','W','D','F','G','U','H','J','K','N','B','I','O','Q','E','A','R','Y','C','Q','Z','T','Z','P','a','[','a','a','a','a','a','a','a',};

	int cod;
	char l;
	while(scanf("%c", &l) != EOF){

		if(l=='\n'){
			cout<<endl;
			continue;
		}
		
		cod = (int)l;

		if(cod==49){
				cout<<"`";
			}
			else if(cod==92){
				cout<<"]";
			}
			else if(cod==39){
				cout<<";";
			}
			else{
				cout<<letra[cod];
			}
			
		
		
	}
	return 0;
}