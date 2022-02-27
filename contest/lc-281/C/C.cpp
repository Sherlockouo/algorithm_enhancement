class Solution {
public:
    string repeatLimitedString(string s, int r) {
        map<char,int,greater<char> > m;
        int n = s.size();
        for(int i = 0; i < n; i++){
            m[s[i]]++;
        }
        string ans;
        while(m.size()){
            auto bg = m.begin();
            char ch = bg->first;
            int freq = bg->second;
            int cnt = 0;
            m.erase(bg);
            while(freq > 0){
                if(++cnt > r){
                    if(m.empty())
                        return ans;
                    auto front = m.begin();
                    ans.push_back(front->first);
                    if(--front->second == 0){
                        m.erase(front);
                    }
                    cnt = 1;
                }
                ans.push_back(ch);
                freq--;
            }
        }
        
        return ans;
    }
};
