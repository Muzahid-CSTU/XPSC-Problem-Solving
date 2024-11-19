class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        vector<int> ans;
        queue<int> q;
        int n = arr.size();
        int  l = 0, r = 0;
        while(r<n){
            if(arr[r] < 0){
                q.push(arr[r]);
            }
            if(r-l+1 == k){
                if(!q.empty()){
                    int a = q.front();
                    ans.push_back(a);
                    if(a==arr[l]){
                        q.pop();
                    }
                }
                else{
                    ans.push_back(0);
                }
                l++;
            }
            r++;
        }
        return ans;
    }
};