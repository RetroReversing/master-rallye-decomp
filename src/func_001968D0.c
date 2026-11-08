#include "context.h"
extern void func_00196358(void);
extern void func_001D2900(void *, s32);
extern void func_001D4040(void *, void *);
extern void func_001E3610(s32, void *);
extern void func_001E3E90(s32, void *, float);
void func_0016D178(void *arg0, float *arg1);
void func_001968D0(void *arg0)
{
  s32 tmp;
  char buf[16];
 do { } while (0);
  func_00196358();
  func_001D2900(((char *) arg0) + 0xC, *((s32 *) (((char *) arg0) + 0x1C)));
  tmp = func_001E4280();
  func_001D4040(buf, *((void **) (((char *) arg0) + 0xC)));
  func_001E3650(tmp, (s32) buf);
}

void func_00196930(void *arg0, float arg2);
void func_001969A0(void *arg0);
