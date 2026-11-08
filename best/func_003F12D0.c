void func_003F0F58(void) {
    unsigned int *p = (unsigned int *)0x80000000;
    unsigned int target = (unsigned int)0x003F0FD4 | 0x80000000;
    do {
        if (p[0] == target) {
            unsigned int v = p[-1];
            if (v != 0 && v == p[-2] && v == p[-3]) {
                p[0] = v;
                return;
            }
        }
        p += 1;
    } while ((unsigned int)p != 0x80008000);
    return;
}

typedef struct {
    unsigned int count;
    unsigned int attr;
    unsigned int option;
    unsigned int initCount;
} SemaParam;

extern int CreateSema_2(SemaParam *, int, int, int);
extern int SetAlarm_2(int, void *, int);
extern int WaitSema_2(int);
extern int DeleteSema_2(int);
extern void func_003F12A8(void);

void func_003F12D0(unsigned int arg0) {
    SemaParam sp;
    int sema;
    sp.count = 1;
    sp.attr = 0;
    sp.option = 0;
    sp.initCount = 0;
    sema = CreateSema_2(&sp, 1, 0, 0);
    SetAlarm_2(arg0 & 0xFFFF, func_003F12A8, sema);
    WaitSema_2(sema);
    DeleteSema_2(sema);
}

extern int func_003F1DA0(int);
extern void func_0040AF58(void);
extern void func_0040AFA0(void);
extern unsigned int D_0049D580;

int func_003F1338(unsigned int arg0) {
    unsigned int old;
    if (func_003F1DA0(1) == 0) {
        func_0040AF58();
        old = D_0049D580;
        D_0049D580 = arg0;
        func_0040AFA0();
        return old;
    }
    return 0;
}

extern int iSignalSema_2(int);
extern int D_0043E714;
extern int D_0043E720;
extern int D_0043E728;
extern int D_0043E730;
extern int D_0043E754;
extern int D_0043E758;

void func_003F1390(int *arg0) {
    D_0043E754 = *arg0;
    D_0043E758 = D_0043E754;
    if (D_0043E754 == 0xB) {
        D_0043E754 = 0;
        D_0043E730 = 0;
        return;
    }
    iSignalSema_2(D_0043E728);
    if (D_0043E714 != 0 && D_0049D580 != 0) {
        iSignalSema_2(D_0043E720);
    } else {
        D_0043E730 = 0;
    }
    D_0043E754 = 0;
}
