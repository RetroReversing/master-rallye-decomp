extern float D_00426508[3];

void *func_00226638(void *arg0) {
    char pad[16];
    float *v1 = (float *)((char *)arg0 + 0xC);
    float *v2 = (float *)((char *)arg0 + 0x18);
    float *s = D_00426508;

    *(int *)arg0 = 0;
    *(int *)((char *)arg0 + 4) = 0;
    *(int *)((char *)arg0 + 8) = 0;

    /* try to get: lwc1 f0; move v0,a0; swc1 f0,0xc */
    {
        float f0 = s[0];
        (void)pad;
        v1[0] = f0;
    }
    v1[1] = s[1];
    v1[2] = s[2];
    v2[0] = s[0];
    v2[1] = s[1];
    v2[2] = s[2];
    return arg0;
}
