/*12531 - Hours and Minutes*/

#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

	int ang;
	while(scanf("%d", &ang) != EOF){
		int mod;
		mod=ang%6;

		if(mod==0){
			printf("Y\n");
		}
		else{
			printf("N\n");
		}
	}
	return 0;
}