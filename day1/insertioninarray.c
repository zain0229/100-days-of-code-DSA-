#include<stdio.h>

int show(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
    
}

int insertion(int arr[],int size,int capacity,int element,int index){
    if(size>=capacity){
        return -1;
    }
    for (int  i = size-1; i >= index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
    
}

int main(){
    int arr[20]= {2,3,4,5,6};
    int size= 5,element = 77,index= 2;
    printf("before insertion: ");
    show(arr,size);
    insertion(arr,size,20,element,index);
    size+=1;
    printf("after insertion: ");
    show(arr,size);

    return 0;

}