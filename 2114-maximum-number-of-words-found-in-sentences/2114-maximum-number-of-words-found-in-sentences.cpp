class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int output, compare=INT_MIN;
        for(auto i:sentences){
            output =1;
            for(int j=0; j<i.length(); j++){
                if(i[j] == ' ')
                    {
                      output++;
                    }
                 }                
            if(output>compare) {compare=output;}
            else {continue;}
        }
        return compare;
    }
};