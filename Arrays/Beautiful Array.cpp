// For some fixed N, an array A is beautiful if it is a permutation of the integers 1, 2, ..., N, such that:
// For every i < j, there is no k with i < k < j such that A[k] * 2 = A[i] + A[j].
// Given N, return any beautiful array A.  (It is guaranteed that one exists.)

class Solution {
public:
    vector<int> beautifulArray(int N) {
        if(N==1)
            return {1};
        vector<int> even=beautifulArray(N/2);
        vector<int> odd=beautifulArray(N-(N/2));
        vector<int> beautiful_array;
       
        for(int i=0;i<odd.size();i++)
            beautiful_array.push_back(odd[i]*2-1);
        
        for(int i=0;i<even.size();i++)
            beautiful_array.push_back(even[i]*2);
      return beautiful_array;
        
     
    }
};