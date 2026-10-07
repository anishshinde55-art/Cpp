class Solution {
public:
bool isFreqSame(int freq1[],int freq2[]){
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {   
        int freq[26]={0};
        for(int i=0;i<s1.length();i++){
            int idx=s1[i]-'a';
            freq[idx]++;
        }

        int windsize=s1.length();

        for(int i=0;i<s2.length();i++){
            int windowIdx=0,idx=i;
            int windFreq[26]={0};

            while(windowIdx<windsize&&idx<s2.length()){
                windFreq[s2[idx]-'a']++;
                windowIdx++;idx++;
            }
            if(isFreqSame(freq,windFreq)){
                return true;
            }
        }
        return false;
        
    }
};