// // T. Matrix
// #include <stdio.h>
// int main()
// {
//     long long int number;
//     scanf("%lld", &number);
//     long long int a[number][number];
//     for (int i = 0; i < number; i++)
//     {
//         for (int j = 0; j < number; j++)
//         {
//             scanf("%lld", &a[i][j]);
//         }
//     }

//     long long int sum1 = 0, sum2 = 0;
//     for (int i = 0; i < number; i++)
//     {
//         for (int j = 0; j < number; j++)
//         {
//             if (i == j)
//             {
//                 sum1 = sum1 + a[i][j];
//             }
//             else if (i + j == number - 1)
//             {
//                 sum2 = sum2 + a[i][j];
//             }
//         }
//     }

//     if(sum1-sum2<0){
//         printf("%lld\n",(-1*(sum1-sum2)));
//     }
//     else{
//         printf("%lld\n",sum1-sum2);
//     }
// }
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size;
	scanf("%d",&size);
	int arr[size][size];
	for(int i=0;i<size;i++){ // i = 1
		for(int z=0;z<size;z++){ // 0 1 2 3 4
			scanf("%d",&arr[i][z]);
		}
	}
	long long sum1 = 0;
	long long sum2 = 0;
	for(int i=0;i<size;i++){ // 
		for(int z=0;z<size;z++){ // 
			if(i == z){
				sum1 += arr[i][z];
			}
			if(size - 1 - z == i){
				sum2 += arr[i][z];
			}
		}
	}
    printf("%lld\n",(abs(sum1-sum2)));
}