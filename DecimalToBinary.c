#include "stdio.h"
int main(){
	int num=10,a[10],i=0,j=0;
	while(num>0){
		a[i]=((num>>=1)&1);
		i++;
	}
	for(j=0;j<i;j++){
		printf("%d", a[j]);
	}
	return 0;
}