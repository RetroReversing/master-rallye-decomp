#include "context.h"

extern void func_001D4040(void *, void *);
extern int func_001E3650(int, void *);
extern int func_001E4280(void);
extern int func_00296530(int, void *);
extern int func_00296710(void);
extern void func_0029D6D0(void *, void *);
extern void func_0029D850(void *, void *);
extern int D_00426858;
extern char D_0047AD68[];
extern char D_0047BAE8[];
extern int D_00494B58;

typedef struct {
    char pad[0xC];
    int unkC;
} Unk;

void func_0029D5E8(Unk *arg0, void *arg1) {
    char sp[0x60];
    int v0;
    if (D_00426858 == 0) {
        func_001D4040(&D_00494B58, D_0047AD68);
        D_00426858 = 1;
    }
    if (func_001E3650(func_001E4280(), &D_00494B58) <= 0) {
        if (func_00296530(func_00296710(), arg1) != 0) {
            v0 = func_001E4280();
            func_001D4040(sp, D_0047BAE8);
            if (func_001E3650(v0, sp) == arg0->unkC) {
                func_0029D6D0(arg0, arg1);
            }
            func_0029D850(arg0, arg1);
        }
    }
}
