#include<stdio.h>
#include<stdlib.h>


struct myarray {
    int totalsize; // total size alloted to array 
    int usedsize;   // used size by array 
    int *ptr; // pointer to traverse array 
};

void createarray(struct myarray* a,int tsize, int usize){
    (*a).totalsize= tsize;
    (*a).usedsize= usize;
    (*a).ptr= (int*)malloc(tsize*sizeof(int)); // will return the pointer from heap memory

}

void showarray(struct myarray* a){
    for (int i = 0; i < a->usedsize; i++)
    {
        printf("%d\n",(a->ptr)[i]); // print the array from pointer 1 to used size
    }
    
}

void takeinput(struct myarray* a){
    int n;
    for (int i = 0; i < a->usedsize; i++)
    {
        printf("enter the element: ","%d",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
    
}

int main(){
    struct myarray marks;
    createarray(&marks,20,5);
    takeinput(&marks);
    showarray(&marks);

    return 0;
}