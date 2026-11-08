extern void D_002AD530(s32);
extern s32 D_002AD5A8(s32);
extern void func_003FA8A4(s32, s32);
extern s32 func_003FA9B8(s32);
void func_001D2CD8(s32 *arg0, s32 arg1);
extern s32 func_003FA9B8(s32);
void func_001D2D48(s32 *arg0, s32 arg1, s32 arg2);
extern s32 func_003FA9B8(s32);
void func_001D2E38(s32 *arg0, s32 arg1, long arg2)
{
  s32 len;
  s32 start;
  s32 i;
  if ((*arg0) == 0)
  {
    return;
  }
  len = func_003FA9B8(*arg0);
  arg2 = (len < arg2) ? (len) : (arg2);
  start = (arg1 > (-1)) ? (arg1) : (0);
  if (start < arg2)
  {
    for (i = start; i < arg2; i++)
    {
      u8 c = ((u8 *) (*arg0))[i];
      if (((u32) (c - 0x61)) < 0x1A)
      {
        ((u8 *) (*arg0))[i] = c - 0x20;
      }
    }

  }
}

s32 func_001D3920(void *arg0);
