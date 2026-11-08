typedef int s32;
typedef short s16;
void *D_002AD408(s32);
void *func_0024F208(void *, void *);
void *func_00233B70(void *arg0, void *arg1)
{
  void **a0 = (void **) arg0;
  void **a1 = (void **) arg1;
  void *old;
  void *newp;
  *(((s32 *) arg0) + 3) = -1;
  *(((s32 *) arg0) + 4) = 1;
  *(((void **) arg0) + 1) = 0;
  a0[0] = 0;
  *(((void **) arg0) + 2) = 0;
  *(((float *) arg0) + 1) = *(((float *) arg1) + 1);
  newp = func_0024F208(D_002AD408(12), a1[0]);
  old = a0[0];
  if (old != newp)
  {
    if (old != 0)
    {
      s32 ref = (*((s32 *) old)) - 1;
      *((s32 *) old) = ref;
      if (ref == 0)
      {
        void **vtable = *((void ***) (((char *) old) + 4));
        void (*dtor)(void *, s32, void *) = (void (*)(void *, s32, void *)) vtable[3];
        s16 off = *((s16 *) (((char *) vtable) + 8));
        dtor(((char *) old) + off, 3, old);
      }
    }
    a0[0] = newp;
    if (newp != 0)
    {
      *((s32 *) newp) = (*((s32 *) newp)) + 1;
    }
  }
  return arg0;
}

