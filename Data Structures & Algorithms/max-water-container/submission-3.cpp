class Solution {
public:
    int maxArea(vector<int>& h) {
        
        int amt=0;
        int l=0,r=h.size()-1;
        while(l<r){
            int a=(r-l)*min(h[l],h[r]);
            amt=max(amt,a);
            (h[l]<h[r]) ? l++:r--;
        }
        return amt;
    }
};
