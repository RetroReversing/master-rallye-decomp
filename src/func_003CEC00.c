/* func_003D0020 */
extern int func_003CD948(void *arg0, int arg1, int arg2, int arg3, int arg4);
extern unsigned int func_003FA9B8(void *arg0);

void func_003D0020(void *arg0, int arg1, int arg2, int arg3)
{
    int *p = (int *)arg0;
    int v = *p;
    func_003CD948(arg0, arg1 - v, arg2 - arg1, arg3, (int)func_003FA9B8(arg3));
}

/* func_003D0178 */
extern int func_003CDDB0(int arg0, int arg1, int arg2, int arg3);
extern void func_003CE0D0(void **arg0, int arg1, int arg2);

int func_003D0178(void **arg0, int arg1, int arg2)
{
    void *temp = *arg0;
    int off = arg1 - (int)*arg0;
    func_003CDDB0(off, arg2 - arg1, 0, 0);
    temp = *arg0;
    if ((unsigned int)(*(int *)((unsigned char *)temp - 8)) >= 2U) {
        func_003CE0D0(arg0, *(int *)((unsigned char *)temp - 0x10), 1);
        temp = *arg0;
    }
    *(int *)((unsigned char *)*arg0 - 4) = 1;
    return (int)temp + off;
}

/* func_003D02C8 */
void *func_003D02C8(void **arg0)
{
    void *temp = *arg0;
    void *var3 = (void *)((int)temp - 0x10);
    if ((unsigned int)(*(int *)((unsigned char *)temp - 8)) < 2U) {
        /* skip call */
    } else {
        func_003CE0D0(arg0, *(int *)((unsigned char *)temp - 0x10), 1);
        temp = *arg0;
        var3 = (void *)((int)temp - 0x10);
    }
    *(int *)((unsigned char *)var3 + 0xC) = 1;
    if ((unsigned int)(*(int *)((unsigned char *)var3 + 8)) >= 2U) {
        func_003CE0D0(arg0, *(int *)((unsigned char *)*arg0 - 0x10), 1);
    }
    *(int *)((unsigned char *)*arg0 - 4) = 1;
    return *arg0;
}

/* func_003CEC00 */
extern int func_003CEA50(int arg0, int arg1, int arg2, int arg3);
extern unsigned int func_003FA9B8(void *arg0);

unsigned int func_003CEC00(void *arg0, void *arg1)
{
    unsigned int v = ~func_003CEA50((int)arg1, (int)arg0, 0, (int)func_003FA9B8(arg0));
    return v >> 31;
}
