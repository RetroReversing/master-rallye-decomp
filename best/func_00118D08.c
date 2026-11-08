extern void func_001D2458(void *buf, void *str);
extern void *func_00196E10(void);
extern void func_001965F0(void *obj, s32 a, void *buf);
extern void func_001966C0(void *obj, s32 a, s32 b);
extern void func_00196860(void *obj, s32 a, s32 b);
extern void func_00196930(void *obj, s32 a, f32 f);
extern void func_00196A00(void *obj, s32 a, f32 f);
extern void func_00196AD0(void *obj, s32 a, s32 b);
extern void func_00196BA0(void *obj, s32 a, s32 b);
extern void func_00196C70(void *obj, s32 a, s32 b);
extern void func_00196D40(void *obj, s32 a, s32 b);
extern char D_00444878[];

void func_00118D08(void) {
    s32 buf[20];
    s32 var_16 = 0;
    f32 f20 = 0.0f;
    do {
        func_001D2458(buf, D_00444878);
        func_001965F0(func_00196E10(), var_16, buf);
        func_001966C0(func_00196E10(), var_16, 0);
        func_00196860(func_00196E10(), var_16, var_16);
        func_00196930(func_00196E10(), var_16, f20);
        func_00196A00(func_00196E10(), var_16, f20);
        func_00196AD0(func_00196E10(), var_16, var_16);
        func_00196BA0(func_00196E10(), var_16, 0);
        func_00196C70(func_00196E10(), var_16, 0);
        func_00196D40(func_00196E10(), var_16, 0);
        var_16++;
    } while (var_16 < 6);
}
