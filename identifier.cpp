#include<stdio.h>
#include<stdlib.h>
#include<string.h>
bool isDelimiter(char* str) 
{ 
    if ( *str== ' ' || *str == '+' || *str == '-' || *str == '*' ||  
        *str == '/' || *str == ',' || *str == ';' || *str == '>' ||  
        *str == '<' || *str == '=' || *str == '(' || *str == ')' ||  
        *str == '[' || *str == ']' || *str == '{' || *str == '}') 
        return (true); 
    return (false); 
} 
bool validIdentifier(char* str) 
{ 
    if (str[0] == '0' || str[0] == '1' || str[0] == '2' || 
        str[0] == '3' || str[0] == '4' || str[0] == '5' ||  
        str[0] == '6' || str[0] == '7' || str[0] == '8' ||  
        str[0] == '9' ) 
        return (true); 
    return (false); 
}  

int main()
{char *str=(char *)malloc(sizeof(char));int flag=0,length;
 printf("\n Enter identifier:");
 scanf("%s",str);
 length=strlen(str);
 for(int i=0;i<length;i++)
 {
 if( validIdentifier(str) == true)
        {
		flag=1;
		break;
    }
    else if(isDelimiter(&str[i]) == true)
        {
		  flag=1;
         break;
     }
  else 
     flag=0;
        
 }
        
		
		if(flag==1)
  printf("\n'%s' not a valid Identifier ",str);
  else
  printf("\n is a valid identifier!!!");
  
  return 0;
}
