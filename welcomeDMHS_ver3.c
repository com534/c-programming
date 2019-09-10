#include <stdio.h> 

char* printStringNTimes(char* words) {
  int i=0;
  for(i=1; i<=10;i++){
  		printf("%s\n", words); 
  }
  
  if (i==10) return "good";
  else return "bad";
}

int main(void) 
{ 
  char* returnValue;
  returnValue = printStringNTimes("Welcome to D'Arcy Computer Science");
  if (returnValue == "good") printf("\nGood job!. Sentence is printed 10 times");
  else printf("%s", returnValue); //Why the returnValue is "bad"?
  
  return 0; 
}
