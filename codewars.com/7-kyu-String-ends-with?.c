#include <stdbool.h>
#include <string.h>


bool solution(const char *string, const char *ending)
{
  int length=strlen(string)-strlen(ending);
  if(length<0){
    return false;
  }else{
    if(strcmp(string+length,ending)==0){
      return true;
    }else{
      return false;
    }
  }
}
