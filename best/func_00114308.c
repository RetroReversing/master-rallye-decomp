typedef struct { char *begin; char *end; char *cap; } V;

extern void func_00114568(void *);
extern void func_001D2488(s32 *, void *);
extern void func_001D4040(void *, const char *);
extern s32 func_001E3650(s32, s32);
extern void *func_001E37E8(s32, s32);
extern s32 func_001E3EC0(s32, void *, s32);
extern s32 func_001E3FB0(s32, void *, void *);
extern s32 func_001E4280(void);
extern void func_002623F0(s32, void *);
extern s32 func_00262838(void);
extern void D_002AD390(void *);
extern char D_00446648[];
extern char D_00446660[];

void func_00114308(void *arg0) {
    char *p44 = (char *)arg0 + 0x44;
    V *v = (V *)func_001E37E8(func_001E4280(), (s32)((char *)arg0 + 0x3C));
    if (v != 0) {
        char *idx = (char *)arg0 + 0x40;
        s32 res = func_001E3650(func_001E4280(), (s32)idx);
        s32 n = res - 1;
        if (res > 0) {
            s32 cnt = (s32)(v->end - v->begin);
            cnt = cnt >> 2;
            if ((u32)n < (u32)cnt) {
                func_001E3EC0(func_001E4280(), idx, n);
                s32 ui = func_00262838();
                int buf[4];
                func_001D4040(buf, D_00446660);
                func_002623F0(ui, buf);
                s32 x = func_001E4280();
                s32 val;
                func_001D2488(&val, (void *)(v->begin + (n << 2)));
                func_001D4040(buf, (const char *)(void *)val);
                func_001E3FB0(x, p44, buf);
                D_002AD390((void *)val);
                func_00114568(arg0);
            }
        } else {
            s32 ui = func_00262838();
            int buf[4];
            func_001D4040(buf, D_00446648);
            func_002623F0(ui, buf);
        }
    }
}
