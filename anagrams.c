#include <stdio.h>
#include <string.h>

int main () {

   char str1[101];
   char str2[101];
   char temp;
   fgets(str1, 101, stdin);
   fgets(str2, 101, stdin);

   int len1 = strlen(str1);
   int len2 = strlen(str2);

   if( len1 != len2) {    
      printf("Not anagrams\n");
      return 0;
   }

   for (int i = 0; i < len1-1; i++) {
      for (int j = i+1; j < len1; j++) {
         if (str1[i] > str1[j]) {
            temp  = str1[i];
            str1[i] = str1[j];
            str1[j] = temp;
         }
         if (str2[i] > str2[j]) {
            temp  = str2[i];
            str2[i] = str2[j];
            str2[j] = temp;
         }
      }
   }

   for(int i = 0; i<len1; i++) {
      if(str1[i] != str2[i]) {    
         printf("Not anagrams");
         return 0;
      }
   }

   printf("Anagrams\n");
   return 0;
}