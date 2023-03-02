class Solution {
public:
    int compress(vector<char>& chars) {
        
        int i = 0;
        int j = 0;

        if(chars.size() == 1){
            return 1;
        }

        int n = chars.size();
        while(i<n){
            int count = 1;
            while(i < n-1 && chars[i] == chars[i+1]){
                count++;
                i++;
            }

            chars[j] = chars[i];
            i++;
            j++;

            if(count>1){

                string cstr = to_string(count);
                for(int i = 0; i<cstr.length(); i++){
                    chars[j++] = cstr[i];
                
                }
            }
        }

        return j;

    }
};
