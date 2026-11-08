#include "context.h"
void func_00177EE8(void *);
void func_00173768(void *arg0)
{
  s32 count;
  s32 i;
  void **base;
  count = ((*((s32 *) (((u8 *) arg0) + 0x18))) - (*((s32 *) (((u8 *) arg0) + 0x14)))) >> 2;
  i = 0;
  if (count > i)
  {
    i = 0;
    do
    {
      base = *((void ***) (((u8 *) arg0) + 0x14));
      func_00177EE8(base[i]);
      i++;
    }
    while (i < count);
  }
}

