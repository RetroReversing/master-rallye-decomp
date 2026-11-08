typedef struct { s32 v; } S0;
extern void D_002AD390(s32);

void func_003A4EA0(S0 *arg0) {
    volatile S0 *p = arg0;
    D_002AD390(p->v);
    p->v = 0;
}
