#include "stdio.h"
int main(){
	unsigned int data = 0x1234;
	data = data>>8|(0x00ff&data)<<8;
	printf("%x",data);
	return 0;
}