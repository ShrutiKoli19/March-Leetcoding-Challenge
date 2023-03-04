class Solution {
public:
    int strStr(string haystack, string needle) {

        int h = haystack.size();
        int n = needle.size();


        for(int window = 0; window <= h-n; window++){

            for(int i = 0; i<n; i++){

                if(needle[i] != haystack[window+i]){
                    break;
                }

                if(i == n-1){
                    return window;
                }
            }
        }


        return -1;
    }
};
