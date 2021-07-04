#include "stdio.h"
int main(){
	int num=200, revNibble=0;
	revNibble = num>>4 | (num&0xf)<<4 ;
	printf("%d",revNibble);
	return 0;
}