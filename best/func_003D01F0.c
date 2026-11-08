extern s32 func_003CDDB0(void*,s32,void*,s32,s32);
extern void func_003CE0D0(void**,s32,u32);

void *func_003D01F0(void **arg0, s32 arg1)
{
    (void)func_003CDDB0(*arg0,arg1,0,0,0);
    (void)func_003CE0D0(arg0,arg1,0);
    return (void*)arg1;
}
