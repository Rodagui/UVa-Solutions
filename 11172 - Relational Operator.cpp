/*11172 - Relational Operator*/

#include <iostream>

using namespace std;

int main(){
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int casos, a, b;
	
	cin>>casos;
	
	while(casos--){
		
		cin>>a>>b;
		
		if(a>b)
		  cout<<">\n";
		if(a<b)
		  cout<<"<\n";
		if(a==b)
		  cout<<"=\n";
		

	}

	return 0;
}
