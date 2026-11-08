extern s32 func_001D4010(void *);
extern s32 func_003FA580(void *, s32);
typedef struct S_93068
{
  void **unk0;
  void **unk4;
} S_93068;
void *func_00293068(S_93068 *arg0, void *arg1)
{
  void **cur = arg0->unk0;
  void **end = arg0->unk4;
  void **p = cur;
  void *obj;
  void *key = arg1;
  if (p == end)
  {
    return 0;
  }
  obj = *p;
  loop:
  if (func_003FA580(key, func_001D4010(((u8 *) obj) + 0x20)) == 0)
  {
    return *p;
  }

  p++;
  end = arg0->unk4;
  if (p != end)
  {
 do { obj = *p; } while (0);
    goto loop;
  }
  return 0;
}
