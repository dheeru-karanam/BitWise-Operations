#include "stdio.h"
int main(){
	int num=15,count1 =0, count0 =0 ;
	while(num>0){
		if(num&1 == 1){
			count1 = 1;
		}
		if(!(num&1)){
			count0 = 1;
		}
		if(count1 && count0){
			break;
		}
		num>>=1;
	}
	if(count1&count0){
		printf("Bits are both set and unset");
	}
	else if(count1){
		printf("Bits are only set");
	}
	else{
		printf("Bits are only unset");
	}
	return 0;
}