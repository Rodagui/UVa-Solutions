/*11877 The Coco-Cola Store*/

#include <cstdio>
#include <cstring>
#include <cmath>
#include <string> 
#include <iostream> 
#include <algorithm>

using namespace std;

int main()
{
	int bot, tot, obt;

	while(scanf("%d", &bot)!=EOF){
		if(bot==0){
			break;
		}
		tot=0;
					
		while(bot>2){
			obt=bot/3;  
			bot = bot % 3; 
			tot += obt; 
			bot += obt;
		}

		if(bot==2){
			tot++;
		}
		cout<<tot<<endl;
	}
	
	return 0;
}