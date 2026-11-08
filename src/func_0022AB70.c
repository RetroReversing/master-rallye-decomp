void func_0016D178(void *arg0, float *arg1) {
    *arg1 = *(float *)((unsigned char *)arg0 + 0x30) * 2.5f;
}

void func_0022AB30(void *arg0, float *arg1) {
    float tmp[3];
    float *dst;

    tmp[0] = arg1[0];
    tmp[1] = arg1[1];
    tmp[2] = arg1[2];
    dst = *(float **)((char *)arg0 + 4);
    dst[3] = tmp[0];
    dst = dst + 3;
    dst[1] = tmp[1];
    dst[2] = tmp[2];
}

void func_0022AB70(void *arg0, float *arg1) {
    float tmp[3];
    float *dst;

    tmp[0] = arg1[0];
    tmp[1] = arg1[1];
    tmp[2] = arg1[2];
    dst = *(float **)((char *)arg0 + 4);
    dst[6] = tmp[0];
    dst = dst + 6;
    dst[1] = tmp[1];
    dst[2] = tmp[2];
}

extern float func_003F3830(float);
extern int D_004265E0;

void func_0022ADF0(void *arg0) {
    float *p;
    float d1;
    float d2;
    float m;

    p = *(float **)((char *)arg0 + 4);
    d2 = p[8] - p[5];
    d1 = p[6] - p[3];
    m = d2;
    if (m < d1) {
        m = d1;
    }
    D_004265E0 = (int)(func_003F3830(m / *(float *)((char *)arg0 + 0x2C)) * 1.443f);
}
