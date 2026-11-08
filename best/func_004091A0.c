typedef struct {
    int cnt;
    int max;
    int init;
    int wait;
} SemaParam;

extern int D_004411A8;
extern unsigned char D_0049FF80[];
extern unsigned char D_004A1240[];
extern unsigned char D_004A0BC0[];

extern void func_00406B18(int);
extern void func_00406B48(void);
extern void func_00406C18(void);
extern int CreateSema_2(SemaParam *);
extern int DeleteSema_2(int);
extern int WaitSema_2(int);
extern void func_004055A0(void *, int);
extern int func_00405E90(void *, int, int, void *, int, void *, int, int, int);

int func_004091A0(unsigned char *arg0, unsigned char *arg1, int arg2, unsigned char *arg3, int arg4)
{
    SemaParam sp;
    int result;
    unsigned char *base;
    int i;
    int sid;
    int flag;

    base = D_0049FF80;
    func_00406B18(0x14);
    if (D_004411A8 == 0) {
        func_00406C18();
    }

    {
        unsigned char c = arg0[0];
        i = 0;
        base[0xC] = c;
        if ((c << 24) == 0) {
            flag = (arg4 < 0x401);
        } else {
            flag = (arg4 < 0x401);
            i = 1;
        loop1:
            if (i < 0x400) {
                unsigned char d = arg0[i];
                base[0xC + i] = d;
                if ((d << 24) != 0) {
                    i++;
                    goto loop1;
                }
            } else {
                goto after1;
            }
        }
        if (i == 0x400) {
            base[0x40B] = 0;
        }
    }
after1:

    {
        unsigned char c = arg1[0];
        i = 0;
        base[0x40C] = c;
        if ((c << 24) != 0) {
            unsigned char *dst = base + 0x40C;
            i = 1;
        loop2:
            if (i < 0x400) {
                unsigned char d = arg1[i];
                dst[i] = d;
                if ((d << 24) != 0) {
                    i++;
                    goto loop2;
                }
            }
        }
        if (i == 0x400) {
            base[0x80B] = 0;
        }
    }

    if (flag == 0) {
        func_00406B48();
        return -7;
    }

    if (arg4 > 0) {
        unsigned char *dst = base + 0x80C;
        i = 0;
        do {
            dst[i] = arg3[i];
            i++;
        } while (i < arg4);
        *(int *)(base + 0xC10) = arg4;
    } else {
        *(int *)(base + 0xC10) = arg4;
    }
    *(int *)(base + 0xC0C) = arg2;

    sp.cnt = 1;
    sp.max = 1;
    sp.init = 0;
    sp.wait = 0;
    sid = CreateSema_2(&sp);

    *(int *)(base + 0) = sid;
    *(int *)(base + 4) = (int)&result;
    *(int *)(base + 8) = 4;
    func_004055A0(base, 0xC14);

    if (func_00405E90(D_004A1240, 0x14, 0, base, 0xC14, D_004A0BC0, 4, 0, 0) < 0) {
        DeleteSema_2(sid);
        func_00406B48();
        return -11;
    }

    {
        int v;
        func_00406B48();
        v = *(volatile int *)((unsigned int)D_004A0BC0 | 0x20000000);
        if (v == 0) {
            DeleteSema_2(sid);
            return -11;
        }
    }

    WaitSema_2(sid);
    DeleteSema_2(sid);
    return result;
}
