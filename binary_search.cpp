int binary_search(vector<int>& nums, int target) 
{
    int start = 0;
    int it = start + nums.size()/2;
    int end = nums.size() - 1;
    int distance;
    while(start <= end)
    {       
        if (nums[it] == target)
           return it;
        else if(target > nums[it])
        {
            start = ++it;
            it = start + (end-start)/2;
        }
        else //if (target < start)
        {
            end = --it;
            it = start + (end-start)/2;
        }
     }
    return -1;
}
