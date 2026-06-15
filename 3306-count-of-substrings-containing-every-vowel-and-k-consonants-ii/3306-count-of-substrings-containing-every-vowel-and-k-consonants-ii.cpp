class Solution {
public:
    bool isVowel(char &c){
        return c == 'a' or c=='e' or c=='i' or c=='o' or c=='u';
    }
    long long countOfSubstrings(string word, int k) {
        int n = word.length();
        unordered_map<char,int> mp;
        int lastcons=n;
        vector<int> nxtCons(n);
        for(int i=n-1;i>=0;i--){
            nxtCons[i]=lastcons;
            if(!isVowel(word[i])){
                lastcons=i;
            }
        }
        int i=0,j=0;
        long long c = 0;
        int cons=0;
        while(j<n){
            char ch = word[j];
            if(isVowel(ch)){
                mp[ch]++;
            }else{
                cons++;
            }
            while(i<n and cons>k){
                char ch = word[i];
                if(isVowel(ch)){
                mp[ch]--;
                if(mp[ch]==0) mp.erase(ch);
                }else{
                    cons--;
                }
                i++;
            }
            while(i<n and mp.size()==5 and cons==k){
                int idx = nxtCons[j];
                c += (idx-j);
                char ch = word[i];
                if(isVowel(ch)){
                mp[ch]--;
                if(mp[ch]==0) mp.erase(ch);
                }else{
                    cons--;
                }
                i++;
            }
            j++;
        }
        return c;
    }
};