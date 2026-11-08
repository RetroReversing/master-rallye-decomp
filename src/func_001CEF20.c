#include "context.h"

extern void func_001CEE20(void *, int);
extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern void func_001C3E00(void *);
extern u32 D_0040E618[];
extern u32 D_0044DCD8;
extern u32 D_00473B10;
extern u32 D_00473AD0;

/* func_0016D178 - known scheduling artifact (nop after mtc1) under project compiler */
void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

/* func_001CEF20 - destructor pattern */
typedef struct S_CEF20 {
    u32 pad0[2];
    u32 vt;         /* +8 */
    u8 padC[0x10C];
    u32 *cap;       /* +0x118 */
} S_CEF20;

void func_001CEF20(S_CEF20 *p, int f) {
    u32 *b = *(u32 **)((u8 *)p + 0x110);
    u32 *cap = *(u32 **)((u8 *)p + 0x118);
    int n = (int)((char *)cap - (char *)b) >> 2;
    p->vt = (u32)&D_00473B10;
    if (n != 0) {
        if ((n << 2) != 0) {
            func_002B2028(b);
        } else {
            *b = D_0040E618[-1];
            D_0040E618[-1] = (u32)b;
        }
    }
    func_001CEE20((u8 *)p + 0x70, 2);
    p->vt = (u32)&D_0044DCD8;
    if (f & 1) D_002AD390(p);
}

/* func_001CEFE8 - destructor pattern */
typedef struct S_CEFE8 {
    u32 pad0[2];
    u32 vt;         /* +8 */
    u8 padC[0x104];
    void *p110;     /* +0x110 */
} S_CEFE8;

void func_001CEFE8(S_CEFE8 *p, int f) {
    p->vt = (u32)&D_00473AD0;
    func_001C3E00((u8 *)p + 0x110);
    func_002B2028(p->p110);
    func_001CEE20((u8 *)p + 0x70, 2);
    p->vt = (u32)&D_0044DCD8;
    if (f & 1) D_002AD390(p);
}
