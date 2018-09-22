/*12289 - One-Two-Three*/

#include <iostream>

using namespace std;

int main(){
	
	int casos;
	cin>>casos;
	string num;

	while(casos--){
		cin>>num;

		if(num.length()==5){
			cout<<"3\n";
			continue;
		}

		if((num[0]=='o' and num[1]=='n') or (num[0]=='o' and num[2]=='e') or (num[1]=='n' and num[2]=='e')){
			cout<<"1\n";
		}
		else{
			cout<<"2\n";
		}

	}

	return 0;
}