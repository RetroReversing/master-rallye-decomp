typedef struct 
{
  void *unk0;
  void *unk4;
} S_arr_3F6A0;
s32 func_0023F6A0(S_arr_3F6A0 *arg0, s32 arg1);
typedef struct 
{
  void *unkC;
  s32 unk10;
} S_arr_3F6E8;
s32 func_0023F6E8(S_arr_3F6E8 *arg0, s32 arg1)
{
  s32 *v7 = (s32 *) arg0->unkC;
  s32 count = (((s32) arg0->unk10) - ((s32) v7)) >> 2;
  s32 i = 0;
  if (count > 0)
  {
    s32 *p = v7;
    do
    {
      if (arg1 != (*p))
      {
        i++;
        p++;
        if (i < count)
        {
          continue;
        }
        break;
      }
      return i;
    }
    while (1);
  }
  return -1;
}

typedef struct 
{
  void *unk18;
  s32 unk1C;
} S_arr_3F730;
s32 func_0023F730(S_arr_3F730 *arg0, s32 arg1);
