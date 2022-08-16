class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        set<int> map;
        int siz=max(n,m);
        for(int i=0;i<siz;i++){
            if(i<n) map.insert(a[i]);
            if(i<m) map.insert(b[i]);
        }
        return map.size();
    }
};
