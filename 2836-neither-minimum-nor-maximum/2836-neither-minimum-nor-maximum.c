int compare(const void *a,const void *b){
    return (*(int *)a)-(*(int *)b);
}

int findNonMinOrMax(int* nums, int n){
    if(n<=2)
    return -1;
qsort(nums,n,sizeof(int),compare);
return nums[1];

}