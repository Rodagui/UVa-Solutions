/*11729 - Commando War*/
#include <cstdio>
#include <algorithm>
#include <utility>
using namespace std;

bool ordena(pair<int,int> a, pair<int,int> b);

int main(){

		int casos, kso=1;
		while(scanf("%d", &casos) and casos != 0){
		

			pair<int, int> arr[casos];

			int a,b, i;

			for (i = 0; i < casos; ++i)
			{
				scanf("%d %d", &a, &b);
				arr[i]=make_pair(a,b);
			}

			sort(arr, arr+casos, ordena);

			int total;
			total = arr[0].first + arr[0].second;

			int aux1, aux2;

			for (i = 0; i < casos-1; ++i)
			{
				aux1=arr[i].second - arr[i+1].first;
				aux2 = arr[i+1].second - aux1;
				if(aux2<0){
					arr[i+2].first += aux2;
					aux2=0;
				}
				total+=aux2;
			}

			printf("Case %d: %d\n", kso, total);


			kso++;
		}


		
	return 0;
}

bool ordena(pair<int,int> a, pair<int,int> b){
	if (a.second == b.second){
		return a.first > b.first;
	}
	return a.second > b.second;
}