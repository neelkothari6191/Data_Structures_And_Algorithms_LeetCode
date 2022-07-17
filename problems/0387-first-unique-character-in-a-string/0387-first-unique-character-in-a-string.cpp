class Solution {
public:
    int firstUniqChar(string s) {
        int n =s.size();
        vector<int> a(26);
        
        for(int i=0;i<n;i++){
            a[s[i]-'a']++;
        }
         
        for(int i=0;i<n;i++){
            if(a[s[i]-'a']==1){
                
                return i;
            }
            
        }
        return -1;
        
    }
};