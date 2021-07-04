#include "stdio.h"
int main(){
	unsigned int num=0x58, count =0;
	while(num>0){
		num>>=1;
		count += 1;
	}
	printf("%d ", count);
}