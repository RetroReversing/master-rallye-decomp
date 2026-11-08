#include "context.h"

extern void func_003F9698(const char *, ...);
extern int func_00405E90(void *a0, int a1, int a2, int a3, void *a4, int a5, void *a6, int a7);
extern int func_0030C2E0(void);
extern int func_0030CB08(int, int);
extern int func_0030D4D0(int);
extern void func_0030E798(void);
extern void func_002B84E0(void);

extern int D_0042D5C4;
extern int D_0042D660;
extern int D_0042D664;
extern void *D_0042D664_2;
extern char D_004848E0[];
extern char D_00484908[];
extern char D_00484930[];
extern char D_00484828[];
extern char D_004A2B78[];
extern char D_004A2BC0[];

int func_0030C300(int arg0, int arg1) {
    func_00405E90(D_004A2B78, arg0, arg1, 0x800, D_004A2BC0, 0x800, func_0030C2E0, 0);
    return 0;
}

void func_0030C350(short arg0) {
    if (D_0042D664 != -1) {
        func_003F9698(D_004848E0);
        func_003F9698(D_00484908, D_0042D664);
        func_003F9698(D_00484930);
    }
    D_0042D664 = arg0;
    D_0042D660 = 0;
}

int func_0030C180(void) {
    func_0030CB08(D_0042D5C4, 0);
    func_0030D4D0(1);
    func_0030E798();
    return 1;
}

void func_0030C148(void *arg0) {
    *(void **)((char *)arg0 + 8) = D_00484828;
    func_002B84E0();
}
