// The idea is simple.
// According to Q we need three numbers A[i],A[j] and A[k] such that i<j<k and < < or > > property holds between the elements.
// First lets take A[i]>A[j]>A[k]
// Consider the middle element if any element of the array will be the part of triplet and if we want it in middle then there should be at least one greater element present on right side of it and at least one smaller element on left of it.

// So total triplets with A[j] in middle will be (count of elements>A[j] on left) * (count of elements <A[j] on right)
// Thus we make two arrays Greater and Smaller which will store count of elements greater than A[i] and smaller than A[i] in greater[i] and smaller[i] respectively.

// Now for A[i]<A[j]<A[k] reverse the array and do the same thing
class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n=rating.size();
        int k= count(rating);                           
        reverse(rating.begin(),rating.end());
        k+=(count(rating));                                   
        return k;
        
    }
    
    int count(vector<int>& rating){
        int n=rating.size();
        vector<int> greater(n);             
        vector<int> smaller(n);            
        for(int i=0;i<n;i++){
            int target=rating[i];
            int c=0;
            for(int j=i+1;j<n;j++){
                if(rating[j]>target)
                    c++;
            }
            greater[i]=c;
        }
        
        for(int i=0;i<n;i++){
            int target=rating[i];
            int c=0;
            for(int j=i-1;j>=0;j--){
                if(rating[j]<target)
                    c++;
            }
            smaller[i]=c;
        }        
        //finding total triplets
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=(greater[i]*smaller[i]);                    
        return sum;
        
    }
};