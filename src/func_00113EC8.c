extern s32 func_001E3650(s32, s32);
extern s32 func_001E4280(void);
extern s32 func_00296530(s32, void *);
extern s32 func_00296710(void);
extern void func_00114230(void *, void *);
extern void func_001152F0(void *);
extern void func_00115328(void *, s32);

void func_00113EC8(void *arg0, void *arg1) {
    s32 temp_18;
    void **pp = (void **)((s8 *)arg1 + 0x4C);
    if ((func_001E3650(func_001E4280(), (s32)(arg0 + 0x48)) <= 0) && ((func_00296530(func_00296710(), arg1) == 0) || ((*(s32 *)((s8 *)*pp + 0x78)) & 1))) {
        temp_18 = func_001E3650(func_001E4280(), (s32)(arg0 + 0x4C)) == *(s32 *)((s8 *)arg0 + 0xC);
        if (temp_18 != 0) {
            func_00114230(arg0, arg1);
        }
        func_001152F0(arg0);
        if (*(s32 *)((s8 *)arg0 + 0x2C) == 0) {
            func_00115328(arg0, temp_18);
        }
    }
}
