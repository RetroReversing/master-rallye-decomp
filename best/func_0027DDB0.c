extern void func_001D4040(void *, const char *);
extern void *D_002AD408(s32);
extern char D_00479FB8[];
extern char D_0047A088[];

void *func_0027DDB0(void *arg0) {
    void *obj;
    u32 k;
    s32 vt;
    s32 f8;
    u32 k2;

    obj = D_002AD408(12);
    func_001D4040(&k, D_00479FB8);
    vt = (s32)D_0047A088;
    f8 = *(s32 *)((u8 *)arg0 + 8);
    k2 = k;
    *(s32 *)((u8 *)obj + 4) = vt;
    *(u32 *)obj = k2;
    *(s32 *)((u8 *)obj + 8) = f8;
    return obj;
}
