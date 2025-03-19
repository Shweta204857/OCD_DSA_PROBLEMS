class Solution {
public:
    int firstUniqChar(string s) {
        int count=0;
        for(int i = 0 ; i<s.size() ; i++){
            count =0;
        for(int j = 0;j<s.size();j++){
        if(s[i]==s[j]){
        count++;
        if(count==2)
        break;
        }
    }
    if(count==1){
    return i;
    }

        }
        return -1;
    }
};
