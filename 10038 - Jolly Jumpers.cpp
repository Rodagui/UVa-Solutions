/*10038 - Jolly Jumpers*/

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
	
	int n, dif, jolly, i;
	while(cin>>n){

		jolly=1;

		vector<int> arr(n);
		vector<int> freq(n);

		for (i = 0; i < n; i++)
		{
			cin>>arr[i];
		}

		
		for (i = 0; i < (n-1); i++)
		{
			dif= abs(arr[i]-arr[i+1]);
			if(dif>=n){
				jolly=0;
				break;
			}

			freq[dif]++;
		}

		if(jolly==0){
			cout<<"Not jolly\n";
			continue;
		}

		for (i = 1; i <n ; ++i)
		{
			if(freq[i]==0 or freq[i]>1){
				jolly=0;
				break;
			}
		}

		if (jolly==1)
			cout<<"Jolly\n";
		else
			cout<<"Not jolly\n";


	}

	return 0;
}