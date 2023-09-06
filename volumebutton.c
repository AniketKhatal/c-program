//volume problem

#include<stdio.h>
#include<conio.h>
int main(){
	int v1,v2,res;
	
	printf("enter the volume case and volume case 2:\n");
	scanf("%d%d",&v1,&v2);
	if (v2>v1){
			res=v2-v1;
			printf("%d",res);
		}
	else if(v1>v2){
		res=v1-v2;
		printf("%d",res);
	}
	else{
		printf("");
	}

	return 0;
}
