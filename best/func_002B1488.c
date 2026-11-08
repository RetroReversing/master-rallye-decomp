extern void func_003F95A0(void *);
extern s32 D_00427D7C;
extern char D_10000[];
extern char D_4D9978[];

void func_002B1488(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    s32 sp[28]; /* 0x70 bytes local area? total frame 0x80 with saves */

    func_003F95A0(sp);
    *arg0 = sp[0];
    *arg1 = sp[7];
    {
        char *v;
        u32 t;
        v = D_10000;
        t = (u32)v;
        if (t > 0x800000U) {
            v = (char *)0x100000;
        }
        *arg2 = 0x02000000 - (s32)D_4D9978 - (s32)v - 0x400;
    }
    *arg3 = D_00427D7C;
}
