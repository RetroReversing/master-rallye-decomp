#include "context.h"

extern int func_00297500(void);
extern int func_002971F8(int);
extern void func_0029D940(void *, int);
extern void func_0029DA78(void *, int);
extern int func_001E4280(void);
extern void func_001D4040(void *, void *);
extern void func_001E3D10(int, void *, int);
extern char D_0047C0E0[];

typedef struct {
    char pad[0x30];
    int unk30;
    int unk34;
    int unk40;
    int unk14;
} Unk;

void func_0029D6D0(Unk *arg0) {
    char sp[0x60];
    int v0;
    int var18 = 0, var19 = 0;
    int t = func_002971F8(func_00297500());
    if (t == 3) {
        if (arg0->unk34 == 0) {
            func_0029DA78(arg0, 1);
        } else {
            arg0->unk40++;
            if (arg0->unk40 >= 10) {
                func_0029DA78(arg0, arg0->unk14);
                v0 = func_001E4280();
                func_001D4040(sp, D_0047C0E0);
                func_001E3D10(v0, sp, 1);
                arg0->unk34 = var18;
                goto end;
            }
        }
        v0 = func_001E4280();
        func_001D4040(sp, D_0047C0E0);
        func_001E3D10(v0, sp, 1);
        arg0->unk40 = 0;
        arg0->unk34 = var18;
        goto end;
    }
    if (t == 2 || t == 8 || t == 9) {
        if (t == 2) {
            if (arg0->unk30 == 0) {
                var19 = 1;
                func_0029D940(arg0, 1);
                v0 = func_001E4280();
                func_001D4040(sp, D_0047C0E0);
                func_001E3D10(v0, sp, 1);
                arg0->unk40 = 0;
                arg0->unk30 = var19;
                goto end;
            } else {
                arg0->unk40++;
                if (arg0->unk40 >= 10) {
                    func_0029D940(arg0, arg0->unk14);
                    v0 = func_001E4280();
                    func_001D4040(sp, D_0047C0E0);
                    func_001E3D10(v0, sp, 1);
                    arg0->unk40 = 0;
                    arg0->unk30 = var19;
                    goto end;
                }
                arg0->unk40 = arg0->unk40;
            }
        } else if (t == 8) {
            if (arg0->unk30 == 0) {
                var19 = 1;
                func_0029D940(arg0, 1);
                v0 = func_001E4280();
                func_001D4040(sp, D_0047C0E0);
                func_001E3D10(v0, sp, 1);
                arg0->unk40 = 0;
                arg0->unk30 = var19;
                goto end;
            } else {
                arg0->unk40++;
                if (arg0->unk40 >= 10) {
                    func_0029D940(arg0, arg0->unk14);
                    v0 = func_001E4280();
                    func_001D4040(sp, D_0047C0E0);
                    func_001E3D10(v0, sp, 1);
                    arg0->unk40 = 0;
                    arg0->unk30 = var19;
                    goto end;
                }
            }
        } else if (t == 9) {
            if (arg0->unk34 == 0) {
                var18 = 1;
                func_0029DA78(arg0, 1);
                v0 = func_001E4280();
                func_001D4040(sp, D_0047C0E0);
                func_001E3D10(v0, sp, 1);
                arg0->unk40 = 0;
                arg0->unk34 = var18;
                goto end;
            } else {
                arg0->unk40++;
                if (arg0->unk40 >= 10) {
                    func_0029DA78(arg0, arg0->unk14);
                    v0 = func_001E4280();
                    func_001D4040(sp, D_0047C0E0);
                    func_001E3D10(v0, sp, 1);
                    arg0->unk34 = var18;
                    goto end;
                }
            }
        }
        arg0->unk40 = 0;
        arg0->unk34 = var18;
        arg0->unk30 = var19;
        goto end;
    }
    arg0->unk40 = 0;
    arg0->unk34 = var18;
    arg0->unk30 = var19;
end:
    return;
}
