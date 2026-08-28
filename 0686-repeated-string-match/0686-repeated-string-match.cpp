class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        vector<int>freq(26,0);
        for(int i=0;i<a.size();i++){
             freq[a[i]-'a']=1;
        }
        for(int i=0;i<b.size();i++){
            if(freq[b[i]-'a']!=1)return -1;
        }
        int count =0;
        string s="";
        while(s.size()<b.size()){
            s+=a;
            count++;
        }
        if(s.find(b)!=string::npos)return count ;
        else{
            s+=a;
            count++;
            if(s.find(b)!=string::npos)return count ;
        }
        return -1;
    }
};