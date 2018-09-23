/*10469 - To Carry or not to Carry*/
#include <stdio.h>
#include <math.h>

int main(){
	
	int arr[33];
	int brr[33];
	long long bin[]={4294967296,2147483648,1073741824,536870912,268435456,134217728,67108864,33554432,16777216,8388608,4194304,2097152,1048576,524288,262144,131072,65536,32768,16384,8192,4096,2048,1024,512,256,128,64,32,16,8,4,2,1,};

	int i;



	int a, b, r;

	while(scanf("%d %d", &a, &b) != EOF){
			for (i = 0; i < 33; ++i)
	{
		arr[i]=0;
		brr[i]=0;
	}
	i=32;
	while(a != 0){
		r= a % 2;
		arr[i] = r;
		i--;
		a = a/2;
	}

	i=32;

	while(b != 0){
		r= b % 2;
		brr[i] = r;
		i--;
		b = b/2;
	}

	for (i = 0; i < 33; ++i)
	{
		if(arr[i] == 1 && brr[i]== 1){
			arr[i] = 0;
		}
		else if((arr[i]==1 && brr[i]==0)|| (arr[i]==0 && brr[i]==1)){
			arr[i] = 1;
		}
	}
	
	long long total=0;

	for (i = 0; i < 33; ++i)
	{
		if(arr[i]==1){
			total += bin[i];
		}
	}

	printf("%lld\n", total);

}
	return 0;
} 