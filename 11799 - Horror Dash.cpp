/*horror Dash*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
		
	int casos, k=1;
	cin>>casos;

	while(casos--){
		int n, v, may=0;
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>v;
			may=max(v, may);
		}

		cout<<"Case "<<k<<": "<<may<<'\n';
		k++;
	}

	return 0;
}