#include "context.h"
extern void func_001D4040(void *a0, const char *a1);
extern char *func_001D4010(char *a0);
extern void func_003FA310(char *a0, const char *fmt, char *a2, s32 a3);
extern char D_004724C8[];
extern char D_004732E8[];
extern char D_00472030[];
void *func_001A0960(void *arg0)
{
  u32 sp[4];
  s32 *p;
  s32 i;
  u32 val;
  func_001D4040(sp, D_004724C8);
  val = sp[0];
  *((s32 *) arg0) = -1;
  *((char **) (((u8 *) arg0) + 8)) = D_004732E8;
  *((u32 *) (((u8 *) arg0) + 4)) = val;
  p = (s32 *) (((u8 *) arg0) + 0xC);
  i = 3;
  do
  {
    *p = 0;
 do { i--; } while (0);
    p++;
  }
  while (i != (-1));
  return arg0;
}

void func_001A0A08(void *arg0, void *arg1);
