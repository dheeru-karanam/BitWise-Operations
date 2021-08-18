#include <stdio.h>
enum bool {False=0, True=1};

enum bool IsEven(int num1){
	return num1&1==1?False:True;
}
enum bool OppSigns(int num1, int num2){
	return ((num1^num2)>0)?False:True;
}

void swap(int *p, int *q){
	*p ^= *q;
	*q ^= *p;
	*p ^= *q;
}
void TurnOffKth(int p, int k){
	printf("%d ", p&(~(1<<(k-1))));
}
void TurnOnKth(int p, int k){
	printf("%d ", p|((1<<(k-1))));
}

int KthBit(int num1, int k){
	return (num1>>(k-1))&1;
}

int ToggleKth(int num1, int k){
	return (num1^(1<<(k-1)));
}

int main(){
	int num1, num2;
	num1 = 20;
	num2 = 21;
	printf("%d\n",IsEven(num1));
	printf("%d\n",OppSigns(num1,num2));
	swap(&num1,&num2);
	printf("%d %d\n",num1, num2);
	TurnOffKth(num1,1);
	TurnOnKth(num2,1);
	printf("\n%d \n",KthBit(num1,1));
	printf("%d ",ToggleKth(num1,1));
	return 0;
}
