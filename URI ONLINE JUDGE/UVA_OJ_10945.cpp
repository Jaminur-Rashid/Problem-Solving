/*//#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
// namespace std;

int main(){
  char s[100];
  char s1[100];
  int i,len;
  while(scanf("%s",s)==1){
    if(s=="DONE"){
      break;
}

     /*   for(i=0;i<s.length();i++){
        if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z'){
            s1.push_back(toupper(s[i]));
        }
    }
   s2=s1;
    reverse(s1.begin(),s1.end());
    if(s1==s2){
      cout<<"You won,t be eaten!"<<endl;
    }
    else{
      cout<<"Uh oh.."<<endl;
    }
    */
/*   strcpy(s1,s);
    strrev(s1);
    if(strcmp(s1,s)==0){
      printf("You wont");
    }
    else{
      printf("Uh oh..");
    }

  }
  return 0;
}
*/
#include <stdio.h>
#include <string.h>

int main()
{
   char a[100], b[100];

   printf("Enter a string to check if it is a palindrome\n");
   gets(a);

   strcpy(b,a);
   strrev(b);

   if (strcmp(a,b) == 0)
      printf("Entered string is a palindrome.\n");
   else
      printf("Entered string is not a palindrome.\n");

   return 0;
}
