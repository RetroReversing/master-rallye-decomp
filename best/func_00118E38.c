extern void func_001D2488(void *buf, void *ptr);
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
extern void D_002AD390(void *p);

void func_00118E38(s32 a, s32 b, s32 c, void *d) {
    s32 buf[4];
    f32 f20 = 0.0f;
    func_001D2488(buf, d);
    func_001965F0(func_00196E10(), a, buf);
    func_001966C0(func_00196E10(), a, b);
    func_00196860(func_00196E10(), a, c);
    func_00196930(func_00196E10(), a, f20);
    func_00196A00(func_00196E10(), a, f20);
    func_00196AD0(func_00196E10(), a, 0);
    func_00196BA0(func_00196E10(), a, 0);
    func_00196C70(func_00196E10(), a, 0);
    func_00196D40(func_00196E10(), a, 0);
    D_002AD390(*(void**)d);
}
