#include <stdio.h>
int main(){
	int target,i,j;
	int return[2];
	target = 9;	
	int SIZE=4;
	int nums[4]={2,7,11,15};
	for (i=0;i<SIZE;i++){
		for (j=i+1;j<SIZE;j++){
			if(nums[i]+nums[j]==target){
			target_return[0]=i;
			target_return[1]=j;
			}
		}
	}
	for (i=0;i<2;i++){
	printf("%d ",return[i]);
	}
	return 0;
}