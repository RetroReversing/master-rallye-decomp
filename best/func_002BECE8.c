/* func_003D1290 - needs ee-gcc-2.95.3 -O1 -G0 per existing notes/suggestions */
void func_003F94D0(void *, int);
void func_003D1290(void *arg0, char *arg1) {
    func_003F94D0(arg0, (int)*arg1);
}

/* func_002BEDD8 */
extern void SignalSema_2(int);
void func_002BEDD8(int *arg0, int arg1) {
    int count;

    if (*arg0 != -1) {
        count = arg1 - 1;
        if (count != -1) {
            do {
                count--;
                SignalSema_2(*arg0);
            } while (count != -1);
        }
    }
}

/* func_002BEDA0 */
extern int ReferSemaStatus_2(int, void *);
int func_002BEDA0(int *arg0) {
    int sema;
    int result;

    sema = *arg0;
    result = 0;
    if (sema != -1) {
        ReferSemaStatus_2(sema, &result);
    }
    return result;
}

/* func_002BECE8 */
extern int ReferSemaStatus_2(int, void *);
extern void func_003F9698(void *, void *, ...);
extern char D_00480CC0[];
extern char D_00480D08[];
extern char D_00480D10[];
extern char D_00480D68[];

typedef struct {
    int unk0;
    char *unk4;
} S_func_002BECE8;

void func_002BECE8(S_func_002BECE8 *arg0) {
    int sema;
    char *name;
    int status[4];

    sema = arg0->unk0;
    if (sema != -1) {
        if (ReferSemaStatus_2(sema, status) == sema) {
            name = arg0->unk4;
            if (name == 0) {
                name = D_00480D08;
            }
            func_003F9698(D_00480CC0, name, sema, status[0], status[1], status[3]);
        } else {
            name = arg0->unk4;
            if (name == 0) {
                name = D_00480D08;
            }
            func_003F9698(D_00480D10, name, sema);
        }
    } else {
        name = arg0->unk4;
        if (name == 0) {
            name = D_00480D08;
        }
        func_003F9698(D_00480D68, name, -1);
    }
}
