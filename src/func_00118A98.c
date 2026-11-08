#include "context.h"

extern void func_00118BE0(void *arg0);
extern u32 D_0044DB88;
extern u32 D_0044DBA0;

typedef struct V { u32 a, b, c; } V;
typedef struct O {
    s32 unk0;
    u32 unk4;
    s32 unk8;
    V sub;      /* +0xC */
    s32 unk18;
    s32 unk1C;
    u32 vt;     /* +0x20 */
    u32 vt2;    /* +0x24 */
} O;

static inline V *vi(V *v) {
    v->a = 0;
    v->b = 0;
    v->c = 0;
    return v;
}

O *func_00118A98(O *p) {
    volatile s32 alloc[8];
    p->vt2 = (u32)&D_0044DB88;
    p->vt = (u32)&D_0044DBA0;
    p->unk0 = 0;
    p->unk4 = 0;
    p->unk8 = 0;
    vi(&p->sub);
    p->unk1C = 1;
    func_00118BE0(p);
    return p;
}
