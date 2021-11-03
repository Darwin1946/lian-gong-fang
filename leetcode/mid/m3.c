#include<string.h>
int lengthOfLongestSubstring(char * s){
    int len = strlen(s);
    int first=0;
    int last=0;
    int num;
    for (int i = 0; i < len ; i++)
    {
        char f = s[i];
        num = 1;
        for (int j = i+1; j < len; j++)
        {
            
            char l = s[j];
            if (l==f)
            {
                return num;
            }
            num++;
            
        }
        
    }
    return num;
    

}