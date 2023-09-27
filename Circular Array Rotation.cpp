// John Watson knows of an operation called a right circular rotation on an array of integers.
// One rotation operation moves the last array element to the first position and shifts all remaining elements right one.
// To test Sherlock's abilities, Watson provides Sherlock with an array of integers. Sherlock is to perform the rotation operation a number of times then determine the value of the element at a given position.

// For each array, perform a number of right circular rotations and return the values of the elements at the given indices.

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {

        // need to right rotate the array k times 
        // k = 1 arr[] = {1,2,3}   ----> answer_arr[] = {3,1,2} 
        
        int n = a.size();
        
        k = k % n;
        
        
        reverse(a,0,n-k-1);
        reverse(a,n-k,n-1);
        reverse(a,0,n-1);
        
        vector<int>ans;
        
        int sizze = queries.size();
        for(int i=0;i<sizze;i++)
        {
            ans.push_back(a[queries[i]]);
        }
        
        return ans;

}
