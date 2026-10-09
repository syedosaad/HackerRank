int cookies(int k, vector<int> A) {
    int count =0;
    int n = A.size();
    
    //sort(A.begin(),A.end());
    
    
    while((A.size()>=2)&&(A[0]<k)){
        
            int x=0;
            x = (A[0]*1) + (A[1]*2);
            A.erase(A.begin());
            A.erase(A.begin());
            A.insert(A.begin(),x);
            count++; 
    
            sort(A.begin(),A.end());
        if(A[0]>=k){
            break;
        }
        
    }
    if(A[0]<k){
        return -1;
    }
    return count;
}
