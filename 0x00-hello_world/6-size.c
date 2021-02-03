#include <stdio.h>
int main(){
  for (int i = 0; i < 11;++i) {
    printf("Size of %s is %u\n",variabletype[i], (unsigned int)(sizeof(variabletype[i])));
  }
  return 0;
}
