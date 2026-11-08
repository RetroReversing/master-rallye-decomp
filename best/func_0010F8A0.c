extern void *func_001189C0(void);
extern s32 func_001E4280(void);
extern void func_001D4040(void *, const char *);
extern void func_001E3EC0(s32, void *, s32);
extern char D_00446420[];
extern char D_00446440[];
extern char D_00446460[];
extern char D_00446480[];
extern char D_004464A0[];
extern char D_004464C0[];
void func_0010F8A0(s32 pad, s32 sel, s32 idx)
{
  char local[16];
  void *base;
  s32 temp_3 = *((s32 *) (((u8 *) (((u8 *) func_001189C0()) + (((u32) idx) * 0x34u))) + 4));
  s32 var_16;
  const char *var_5;
  switch (temp_3)
  {
    case 0:
      if (sel == 0)
    {
      var_16 = func_001E4280();
      var_5 = D_00446420;
    }
    else
    {
      var_16 = func_001E4280();
      var_5 = D_00446440;
    }
      break;

    case 1:
      if (sel == 0)
    {
      var_16 = func_001E4280();
      var_5 = D_00446460;
    }
    else
    {
      var_16 = func_001E4280();
      var_5 = D_00446480;
    }
      break;

    case 2:
      if (sel != 0)
    {
      var_16 = func_001E4280();
      var_5 = D_004464C0;
      func_001D4040(local, var_5);
      func_001E3EC0(var_16, local, idx);
      return;
    }
      var_16 = func_001E4280();
      var_5 = D_004464A0;
      break;

    default:
      return;

  }

  func_001D4040(local, var_5);
  func_001E3EC0(var_16, local, idx);
}

