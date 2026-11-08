extern void *D_0047FA08;
extern void *D_00476518;
extern void D_002AD390(void *);
extern void func_001DB118(void *);
extern int func_002B8598(void *);
extern void func_002B8768(void *);

void func_002B84E0(void *arg0, int arg1)
{
    void *p;
    *(void **)((char *)arg0 + 8) = &D_0047FA08;
    if (func_002B8598(arg0) != 0) {
        func_002B8768(arg0);
    }
    p = *(void **)((char *)arg0 + 0x10);
    if (p != 0) {
        D_002AD390(p);
    }
    *(void **)((char *)arg0 + 8) = &D_00476518;
    func_001DB118(arg0);
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

extern float func_003F3E80(float);

float func_002A4160(float *arg0)
{
    float x = arg0[0];
    float y = arg0[1];
    float z = arg0[2];
    float len2 = x * x + y * y + z * z;
    float res = 0.0f;
    if (len2 > 1.1920929e-7f) {
        float d = len2 - 1.0f;
        int near1 = 0;
        if (-0.0000011920929f <= d) {
            if (d <= 0.0000011920929f) {
                near1 = 1;
            }
        }
        res = 1.0f;
        if (near1 == 0) {
            float r = len2;
            if (r != r) {
                /* unreachable for normal float compare? keep */
            }
            {
                float s;
                if (len2 == len2) {
                    s = __builtin_sqrtf(len2);
                } else {
                    s = func_003F3E80(len2);
                }
                res = 1.0f / s;
            }
        }
    }
    return res;
}

extern void func_001E2460(void *);
extern void func_001E28F8(void *, const char *, void *);
extern char D_0047C5E0[];
extern char D_0047C5E8[];
extern char D_0047C5F0[];
extern char D_0047C5F8[];

void func_002A2F90(void *arg0)
{
    char ctx[0x10];
    func_001E2460(ctx);
    func_001E28F8(ctx, D_0047C5E0, (char *)arg0 + 8);
    func_001E28F8(ctx, D_0047C5E8, (char *)arg0 + 0xC);
    func_001E28F8(ctx, D_0047C5F0, (char *)arg0 + 0x10);
    func_001E28F8(ctx, D_0047C5F8, (char *)arg0 + 0x14);
}

extern void *D_002AD408(int);
extern void *func_002A2D60(void *);

void *func_002A2E48(void *arg0)
{
    void *r = func_002A2D60(D_002AD408(0x18));
    *(int *)r = *(int *)arg0;
    *(int *)((char *)r + 8) = *(int *)((char *)arg0 + 8);
    *(int *)((char *)r + 0xC) = *(int *)((char *)arg0 + 0xC);
    *(int *)((char *)r + 0x10) = *(int *)((char *)arg0 + 0x10);
    *(int *)((char *)r + 0x14) = *(int *)((char *)arg0 + 0x14);
    return r;
}
