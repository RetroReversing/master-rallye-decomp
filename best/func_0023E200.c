/* func_0023DE38 */
f32 func_0023DEC0(void *arg0, s32 idx);
void func_0023DE38(void *arg0)
{
    s32 count;
    s32 i;
    s32 *src;
    f32 *dst;
    
    count = ((s32 *)(arg0 + 0xB4))[0];
    count = (count - ((s32 *)(arg0 + 0xB0))[0]) >> 2;
    if (count > 0) {
        for (i = 0; i < count; i++) {
            src = (s32 *)((s32 *)(arg0 + 0xB0))[0] + i;
            dst = (f32 *)((s32 *)(arg0 + 0x24))[0] + i;
            *dst = func_0023DEC0(arg0, *src);
        }
    }
}

/* func_0023DED0 */
f32 func_0023DF58(void *arg0, s32 idx);
void func_0023DED0(void *arg0)
{
    s32 count;
    s32 i;
    s32 *src;
    f32 *dst;
    
    count = ((s32 *)(arg0 + 0xB4))[0];
    count = (count - ((s32 *)(arg0 + 0xB0))[0]) >> 2;
    if (count > 0) {
        for (i = 0; i < count; i++) {
            src = (s32 *)((s32 *)(arg0 + 0xB0))[0] + i;
            dst = (f32 *)((s32 *)(arg0 + 0x30))[0] + i;
            *dst = func_0023DF58(arg0, *src);
        }
    }
}

/* func_0023E200 */
void func_0023E200(void *arg0)
{
    s32 count;
    s32 i;
    
    count = ((s32 *)(arg0 + 0xB4))[0];
    count = (count - ((s32 *)(arg0 + 0xB0))[0]) >> 2;
    if (count > 0) {
        i = count - 1;
        do {
            i--;
        } while (i != 0);
    }
}

/* func_0023FD28 */
void func_0023F7D8(void);
void func_0023FD78(void *arg1, void *arg2, void *arg0_18);
void func_0023FD28(void *arg0, void *arg1, void *arg2)
{
    func_0023F7D8();
    func_0023FD78(arg1, arg2, (void *)((char *)arg0 + 0x18));
}
