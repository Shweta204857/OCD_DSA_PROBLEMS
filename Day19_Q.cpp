Q.1
class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int maximumno=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
                maximumno=max(count,maximumno);
            }
            else if(s[i]==')'){
                count--;
            }
        }
        return maximumno;
    }
};



Q.2
class Solution {
public:
    int val(char ch){
        if(ch=='M') return 1000;
        else if(ch=='D') return 500;
        else if(ch=='C') return 100;
        else if(ch=='L') return 50;
        else if(ch=='X') return 10;
        else if(ch=='V') return 5;
        else return 1;
    }
    int romanToInt(string s) {
        int sum=0;
        int i=0;
        while(i<s.size()){
            if(val(s[i])>=val(s[i+1])&& i!=s.size()-1){
                sum+=val(s[i]);
                i++;
            }
            else if(val(s[i])<val(s[i+1])&& i!=s.size()-1){
                
                 sum+=(val(s[i+1])-val(s[i]));
                 i=i+2;

            }
            else if(i==s.size()-1){
                  sum=sum+val(s[i]);
                i++;  
                
            }
      
    }
     return sum;
    }
};
