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
        return (int)old;
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
extern unsigned int D_0049D580;

void func_003F1390(int *arg0) {
    unsigned int t;
    D_0043E754 = *arg0;
    D_0043E758 = D_0043E754;
    t = D_0043E754;
    if (t == 0xB) {
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

extern void func_003F1390(int *);

void func_003F15C8(unsigned int arg0) {
    unsigned int p = arg0 | 0x20000000;
    unsigned int *base = (unsigned int *)p;
    unsigned int count1 = base[0];
    if (count1 > 0) {
        unsigned char *dst = (unsigned char *)(base[2]);
        unsigned int i = 0;
        unsigned char *src = (unsigned char *)(p + 0x10);
        while (i < count1) {
            dst[i] = src[i];
            i++;
        }
    }
    unsigned int count2 = base[1];
    if (count2 > 0) {
        unsigned char *dst = (unsigned char *)(base[3]);
        unsigned int i = 0;
        unsigned char *src = (unsigned char *)(p + 0x50);
        while (i < count2) {
            dst[i] = src[i];
            i++;
        }
    }
    func_003F1390((int *)&D_0043E754);
}

typedef struct {
    int count;
    int attr;
    int option;
    int initCount;
} SemaParam;
extern int CreateSema_2(SemaParam *, int, int, int);
extern int D_0043E720;
extern int D_0043E728;
extern int D_0043E72C;
extern int D_0043E730;

void func_003F1668(void) {
    SemaParam sp;
    if (D_0043E728 == -1) {
        sp.count = 1; sp.attr = 1; sp.option = 0; sp.initCount = 0;
        D_0043E728 = CreateSema_2(&sp, 1, 1, 0);
        sp.count = 1; sp.attr = 0; sp.option = 0; sp.initCount = 0;
        D_0043E72C = CreateSema_2(&sp, 1, 0, 0);
        sp.count = 1; sp.attr = 0; sp.option = 0; sp.initCount = 0;
        D_0043E720 = CreateSema_2(&sp, 1, 0, 0);
        D_0043E730 = 0;
    } else if (D_0043E72C == -1) {
        sp.count = 1; sp.attr = 1; sp.option = 0; sp.initCount = 0;
        D_0043E72C = CreateSema_2(&sp, 1, 1, 0);
    }
}
