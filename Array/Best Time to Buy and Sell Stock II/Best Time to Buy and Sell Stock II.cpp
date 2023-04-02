class Solution {
public:
    int maxProfit(vector<int>& n) {
        if(n.size()==0) return 0;
        int ans=0;
        int st=n[0],ed=n[0];
        for(int i=0;i<n.size();i++){
            if(n[i]>ed){
                ed=n[i];
            }
            else{
                ans+=(ed-st);
                st=n[i];
                ed=n[i];
            }
        }
        if(ed>st)
            ans+=(ed-st);
        return ans;
        
    }
};
