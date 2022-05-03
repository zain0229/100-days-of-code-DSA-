#include<stdio.h>
#include<stdlib.h>

// linear search is traversing the whole array and here the time complexity is O(n) 
int linearsearch(int arr[],int size,int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
            
        }
    }
    return -1;
    
}

int main(){
    int arr[10]={1,2,5,3,4,7,8,9};
    int size= 8, element = 7;
    int v= linearsearch(arr,size,element);
    if(v!=-1){
        printf("element found at index: %d",v);
    }
    else{
        printf("element not found");
    }
}