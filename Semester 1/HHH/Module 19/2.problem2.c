// N. Sum of a Matrix
#include<stdio.h>
int row,col;
int arr1[100][100],arr2[100][100],result[100][100];
void sum(int r1,int c1){
	
	if(r1 == row || c1 == col){
		return;
	}
	if(c1<col-1){ // 2 2
		sum(r1,c1+1);
	} else {
		sum(r1+1,0);
	}
	result[r1][c1] = arr1[r1][c1] + arr2[r1][c1];
}
int main(){
	scanf("%d %d",&row,&col);
	
	for(int i=0;i<row;i++){
		for(int z=0;z<col;z++){
			scanf("%d",&arr1[i][z]);
		}
	}
	for(int i=0;i<row;i++){
		for(int z=0;z<col;z++){
			scanf("%d",&arr2[i][z]);
		}
	}
	sum(0,0);
	for(int i=0;i<row;i++){
		for(int z=0;z<col;z++){
			printf("%d ",result[i][z]);
		}
		printf("\n");
	}
}