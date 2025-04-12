  #include<stdio.h>
  #include<string.h>
  int main ()
  {
      char string[100];
      printf("Enter a string : ");
      scanf("%s",string);
      int len = strlen(string);
      int flag = 0;
      for(int i = 0; i < len/2; i++){
        if(string[i] != string[len-i-1]){
            flag = 1;
            break;
        }
      }
      if(flag == 1){
        printf("%s is not a palindrome\n",string);
      }
      else{
        printf("%s is a palindrome\n",string);
      }
      return 0;
  }
