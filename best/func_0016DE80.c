extern s32 D_002AD408(s32);
extern void *func_002662F8(s32, void *);
extern s32 func_00266C38(void *);
void func_0016DE80(void *arg0, s32 *arg1)
{
  void *t;
  void *u;
  s16 off;
  s32 (*fn)(void *);
 do { *((s32 *) (((char *) arg0) + 0)) = *arg1; if ((*((void **) (((char *) arg0) + 4))) == NULL) { t = func_002662F8(D_002AD408(0x1DC), arg0); *((void **) (((char *) arg0) + 4)) = t; u = *((void **) (((char *) t) + 0x14)); off = *((s16 *) (((char *) u) + 0x28)); fn = *((s32 (**)(void *)) (((char *) u) + 0x2C)); fn(((char *) t) + off); *((f32 *) (((char *) (*((void **) (((char *) arg0) + 4)))) + 0x1BC)) = 1.0f; func_00266C38(*((void **) (((char *) arg0) + 4))); } } while (0);
}
