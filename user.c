#include <string.h>
int password(int id, char password[])
{
  if(id!=1&&id!=2&&id!=3) return 0;
  char *passkey[] = {"sec-r", "cprjt", "plot"};
  int k = 0;
  if (!strcmp(password, passkey[id - 1]))
    k = 1;
  return k;
}