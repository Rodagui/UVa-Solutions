/*10055 - Hashmat the Brave Warrior*/

#include <iostream>

using namespace std;
unsigned long a, b;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while(cin>>a>>b){
		switch(a<b){
			case 1:
				cout<<b-a<<"\n";
				break;
				
			default:
				cout<<a-b<<"\n";

		}
	}


	return 0;
}