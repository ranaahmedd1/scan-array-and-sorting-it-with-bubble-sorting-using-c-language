#include <stdio.h>

void main(){
printf("enter 5 numbers to store in array\n");
int arr_1[5]; char space;
//to scan the elments of the user
for(int i=0;i<5;i++)
   {scanf("%d",&arr_1[i]);
    scanf("%c",&space);}
// this cause a problem and reads 6 elments
/*
for(int i=0;i<5;i++)
   scanf("%d\n",&arr_1[i]);
*/
for(int i=0;i<5;i++)
    printf("%d\t",arr_1[i]);

//to find min and max numbers of the ARRAY
int max=arr_1[0]; int position_max=0;
int min=arr_1[0]; int position_min=0;

for(int i=0;i<5;i++)
{   if(arr_1[i]>max)
      {
          max=arr_1[i];
          position_max++;
      }
    if(arr_1[i]<min)
      {
          min=arr_1[i];
          position_min++;
      }
}
printf("\nmax number is:%d at position of:%d\n",max,position_max);
printf("min number is:%d at position of:%d",min,position_min);
int n=5;
//bubble sort
for (int j=0;j<n-1;j++){
    for(int i=0;i<n-j-1;i++){
        if(arr_1[i]>arr_1[i+1]){
            int temp=arr_1[i];
            arr_1[i]=arr_1[i+1];
            arr_1[i+1]=temp;
        }

    }

}
 printf("\n after arranging the array ascending\n");
for(int i=0;i<5;i++)
    printf("\t%d\t",arr_1[i]);


}
