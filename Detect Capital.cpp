bool detectCapitalUse(char * word){
    int l = strlen(word);
 if(isupper(word[0]) && isupper(word[1]))
 {
   for(int i=2 ;i<l;i++)
   {
       if(islower(word[i]))
       {
           return false;
       }
   }
 }
 else if(isupper(word[0]) && l <2)
 {
     return true;
 }

 else 
 {
     for(int i=1;i<l;i++)
     {
         if(isupper(word[i]))
         {
             return false;
         }
     }
 }
 
 return true;

}
