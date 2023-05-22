pair<long,long> helper(vector<long long>&nums,int s,int e,int t){
     
    int mid=s+(e-s)/2;
    if(s>e)return make_pair(-1,-1);
    if(nums[mid]==t){
        int first = mid;
        int last = mid;

        // Find the first occurrence
        while (first > s && nums[first - 1] == t) {
            first--;
        }

        // Find the last occurrence
        while (last < e && nums[last + 1] == t) {
            last++;
        }

        return make_pair(first, last);
    }
    else if(nums[mid]<t) helper(nums,mid +1,e,t);
    else helper(nums,s,mid-1,t);
    }
    pair<long,long> indexes(vector<long long> v, long long x)
    {
       return helper(v,0,v.size()-1,x);
    }
