/*11683 - Laser Sculpture*/

#include <cstdio>
#include <cstring>
#include <cmath>
#include <string> 
#include <iostream> 
#include <algorithm>

using namespace std;

int main(){
		
	int alt, lon;

	while(scanf("%d %d", &alt, &lon) != EOF){
		if(alt==0){
			break;
		}

		int i, tot=0;
		int arr[lon];

		for (i = 0; i < lon; ++i)
		{
			cin>>arr[i];
		}
		for ( i = 0; i < lon-1; ++i)
		{
			if(arr[i]<arr[i+1]){
				tot+= arr[i+1]-arr[i];
			}
		}

		if(arr[lon-1]<alt){
			tot+= alt- arr[lon-1];
		}

		cout<<tot<<endl;

	}

	return 0;
}