int lengthOfLongestSubstring(char * s){
    int len = strlen(s);
    if(len == 0)
        return 0;
    int S[256] = {0};//通过字符串得ASCII码来计数
    int i, j, m = 0;
    for(i = 0, j = 0; j < len; j++){
        S[s[j]]++;
        while(S[s[j]] > 1){
            S[s[i]]--;
            i++;
        }
        m = fmax(m, j - i + 1);
    }
    return m;
}