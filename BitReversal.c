#include "stdio.h"
int main(){
	int num = 46, sum = 0;
	while(num>0){
		sum<<=1;
		sum |= num&1;
		num>>=1;
	}
	printf("%d ",sum );
	return 0;
}