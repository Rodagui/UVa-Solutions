/*10963 - The Swallowing Ground*/
#include <bits/stdc++.h>

using namespace std;
int main(){

	int casos, m=1;
	cin>>casos;

	while(casos--){
		if(m>1){
			printf("\n");
		}

		int tam, a, b, i, r, no=0;
		cin>>tam;
		int arr[tam];

		for (i = 0; i < tam ; ++i)
		{
			cin >>a>>b;
			r = a-b;
			arr[i]=r;
		}

		for (i = 1; i < tam; ++i)
		{
			if(arr[i]!=arr[i-1]){
				no=1;
				break;
			}
		}

		if(no==0){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}

		m++;
	}


	return 0;
}