int minimumOperations(int* nums, int numsSize) {
    int count=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]%3!=0){
            /*if(nums[i]-1==0 ) 
            count++;*/
            if( (nums[i]-1 )% 3==0 )
            count++;
            if( (nums[i]+1 )%3==0)
            count++;
        }
    }
    return count;
}