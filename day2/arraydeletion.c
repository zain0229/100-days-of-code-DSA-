#include<stdio.h>

int show(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}

int deletion(int arr[],int size,int index){
    for (int i = index; i < size-1; i++)    // looping from starting index and assigning the index value to next element 
    {
        arr[i]= arr[i+1];
    }
    return 1;
    
}
int main(){
    int arr[20]= {2,3,4,5,6};
    int size= 5,index= 2;
    printf("before deletion \n");
    show(arr,size);
    printf("after deletion \n");
    deletion(arr,size,index);
    size-=1;
    show(arr,size);

    return 0;
}

