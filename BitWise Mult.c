#include "stdio.h"
int main(){
	int  a =6, b =10, sum=0;
	while(b>0){
		if(b&1 == 1){
			sum += a;
		}
		a<<=1;
		b>>=1;
	}
	printf("%d ", sum);
	return 0;
	
}