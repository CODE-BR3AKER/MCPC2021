#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int lengthOfLongestSubstring(char * s)
{
    /* Base condition */
    if(strlen(s) == 1)
        return 1;
    /* Keep the log of all the characters (Total Ascii = 128) */
    int a[128] = {0};
    int max_count = 0;
    /* Maintain a sliding window using 2 pointers/indexes */
    int left = 0, right = 0;

    /* update the right index by 1 as traversing each character */
    for(right = 0; right < strlen(s); right++) {
        /* 
         * If duplicate character is found, keep removing 
         * all the characters from left until the duplicate 
         * character is reached i.e. while loop will run
         * until a[character] = 0 
         * 
        */
        while(a[s[right]] == 1) {
            /* Setting the character occurrence to 0 */
            a[s[left]] = 0;
            /* Increment the left pointer/index */
            left++;
        }
        /* set the bit in the array for a character */
        a[s[right]] = 1;
        /* 
         * The length of the longest substring so far is 
         * right - left + 1 
         * (+1 because left and right are inclusive characters) 
         * 
        */
        if ((right - left + 1) > max_count)
            max_count = right - left + 1;
    }

    return max_count;
}

int main(){
    FILE *file = fopen("wave.in", "r");
    int T = 0;
    fscanf(file, "%d", &T);
    for (int i = 0; i<T; i++){
        char s[255];
        fscanf (file,"%s", &s);
        printf("%d\n", lengthOfLongestSubstring(s));
    }
    fclose(file);
    return 0;
}