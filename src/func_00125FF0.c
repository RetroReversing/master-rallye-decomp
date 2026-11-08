extern void func_001D4040(void *, const char *);
extern s32 *func_001D2458(void *, const char *);
extern s32 func_001E4280(void);
extern void func_001E3FE0(s32, void *, void *);
extern void D_002AD390(void *);
extern const char D_004486C0[], D_004486D8[], D_00444878[];
extern u8 D_0044D2A8[];
static inline void init(s32 *p, s32 name) {
    p[3] = 0;
    p[6] = 0; p[7] = 0; p[8] = 0; p[9] = 0; p[10] = 0; p[11] = 0;
    p[12] = 0; p[13] = 0; p[14] = 0; p[15] = 0; p[16] = 0; p[17] = 0;
    p[18] = 0; p[19] = 0; p[20] = 0; p[21] = 0; p[22] = 0; p[23] = 0;
    p[24] = 0; p[25] = 0; p[26] = 0; p[27] = 0;
    p[29] = 0;
    p[57] = 0;
    p[4] = 1;
    p[5] = 1;
    p[28] = 1;
    p[1] = name;
    p[0] = -1;
    p[2] = (s32)D_0044D2A8;
}
s32 *func_00125FF0(s32 *p) {
    s32 g;
    s32 name[4], k1[4], k2[4];
    int i;
    s32 *q;
    func_001D4040(name, D_004486C0);
    init(p, name[0]);
    g = func_001E4280();
    func_001D2458(k1, D_004486D8);
    func_001D2458(k2, D_00444878);
    func_001E3FE0(g, k1, k2);
    D_002AD390((void *)k2[0]);
    D_002AD390((void *)k1[0]);
    p[56] = 0;
    q = p + 43;
    for (i = 0; i < 13; i++) {
        q[-13] = 0;
        q[0] = 0;
        q++;
    }
    return p;
}
