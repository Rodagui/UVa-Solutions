/*10324 - Zeros and Ones*/

#include <stdio.h>
#include <string.h>

int main(){
	
	char nums[1000000];
	char cad[]="0 0\0";
	while(scanf("%s", &nums) != EOF){
		if(strcmp(nums, cad)==0){
			break;
		}
		printf("%s\n", nums);
	}

	return 0;
}