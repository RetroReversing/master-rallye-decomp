void func_00200250(void *arg0) {
    *(int *)((char *)arg0 + 0x20) = 0;
    *(float *)((char *)arg0 + 0x1C) = 1.0f;
    *(int *)((char *)arg0 + 8) = 1;
}

typedef struct FV {
    int b;
    int e;
    int c;
} FV;

void func_002030F8(FV *a, FV *b, float f) {
    int n = (a->e - a->b) >> 2;
    int i = 0;
    if (n > 0) {
        do {
            int off = i * 4;
            float *pa = (float *)(a->b + off);
            float *pb = (float *)(b->b + off);
            i++;
            *pa = *pa + *pb * f;
        } while (i < n);
    }
}

extern void func_00203F80(void *arg0, float x, float y, float z);

void func_00203158(void *arg0, float *arg1) {
    func_00203F80(arg0, arg1[0], arg1[1], arg1[2]);
}

extern int func_00203180(void *arg0, void *arg1);
extern void func_003F94D0(void *arg0, int arg1, int arg2);

typedef struct S36 {
    int data[9];
} S36;

void *func_00203358(void *arg0, void *arg1) {
    S36 sp;
    if (func_00203180(arg1, &sp) == 0) {
        func_003F94D0(&sp, 0, 0x24);
    }
    *(S36 *)arg0 = sp;
    return arg0;
}
