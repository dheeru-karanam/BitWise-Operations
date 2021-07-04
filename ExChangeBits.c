#include "stdio.h"
int main(){
	int num=10, n=1, k=5,nth, kth,nxork;
	nth = ((num>>n)&1);
	kth = ((num>>k)&1);
	nxork = nth^kth;
	num = num^((nxork<<k)|(nxork<<n));
	printf("%d \n", num);
	while(num>0){
		printf("%d ",(num>>1)&1);
		num>>=1;
	}
	return 0;
}