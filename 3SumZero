bool isAllZeroes(vector<int>& A){
    for(int i = 0; i<A.size(); i++) if(A[i]!=0) return false;
    return true;
}
bool isAllPos(vector<int>& A){
    for(int i = 0; i<A.size(); i++) if(A[i]<=0) return false;
    return true;
}
bool isAllNeg(vector<int>& A){
    for(int i = 0; i<A.size(); i++) if(A[i]>=0) return false;
    return true;
}
vector<vector<int> > Solution::threeSum(vector<int>& A) {
    set<vector<int>> res;
    if(A.size()<3 || isAllPos(A) || isAllNeg(A)){  
        vector<vector<int>> v;
        return v;
    }
    if(isAllZeroes(A)){
        vector<int> tmp(3, 0);
        vector<vector<int>> v;
        v.push_back(tmp);
        return v;
    }
    sort(A.begin(), A.end());
    int i = 0, sum;
    while(i<A.size()-2){
        int left = i+1;
        int right = A.size()-1;
        while(left<right){
            sum = A[i]+A[left]+A[right];
            if(sum==0){
                res.insert((vector<int>{A[i], A[left], A[right]}));
            }
            if(sum<0)   left++;
            else    right--;
        }
        i++;
    }
    vector<vector<int>>v(res.begin(), res.end());
    return v;
}
