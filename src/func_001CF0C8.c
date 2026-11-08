#include "context.h"

extern void func_00118BE0(void *arg0);
extern void func_001CEE20(void *, int);
extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern void func_001C3E00(void *);
extern void func_00196EE0(void *, int);
extern u32 D_0040E618[];
extern u32 D_0044DB88;
extern u32 D_0044DBA0;
extern u32 D_0044DCD8;
extern u32 D_00473B10;
extern u32 D_00473AD0;
extern u32 D_00473A50;

/* func_0016D178 - known scheduling artifact (nop after mtc1) under project compiler */
void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

/* func_001CEF20 - destructor pattern */
typedef struct S_CEF20 {
    u32 pad0[2];
    u32 vt;         /* +8 */
    u8 padC[0x64];
    u32 *vecBegin;  /* +0x70 */
    u8 pad74[0x9C];
    u32 *begin;     /* +0x110 */
    u32 pad114;
    u32 *cap;       /* +0x118 */
} S_CEF20;

void func_001CEF20(S_CEF20 *p, int f) {
    u32 *b = p->begin;
    int n = (int)((char *)p->cap - (char *)b) >> 2;
    p->vt = (u32)&D_00473B10;
    if (n != 0) {
        if ((n << 2) != 0) {
            func_002B2028(b);
        } else {
            *b = D_0040E618[-1];
            D_0040E618[-1] = (u32)b;
        }
    }
    func_001CEE20(p->vecBegin, 2);
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
    func_001C3E00(p->p110);
    func_002B2028(p->p110);
    func_001CEE20((u8 *)p + 0x70, 2);
    p->vt = (u32)&D_0044DCD8;
    if (f & 1) D_002AD390(p);
}

/* func_001CF0C8 - destructor pattern */
typedef struct S_CF0C8 {
    u32 pad0[2];
    u32 vt;         /* +8 */
} S_CF0C8;

void func_001CF0C8(S_CF0C8 *p, int f) {
    p->vt = (u32)&D_00473A50;
    func_00196EE0((u8 *)p + 0x24, 2);
    p->vt = (u32)&D_0044DCD8;
    if (f & 1) D_002AD390(p);
}
