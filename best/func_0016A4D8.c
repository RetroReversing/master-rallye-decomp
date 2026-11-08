void *func_00168378(void *);
extern float fabsf(float);

float func_0016A4D8(void *arg0, float a1, float a2) {
    void *p;
    float f21, f22, f0;
    float r;

    p = func_00168378(arg0);
    f21 = *(float *)((char *)p + 0x5C);
    p = func_00168378(arg0);
    f22 = *(float *)((char *)p + 0x60);
    p = func_00168378(arg0);
    f0 = *(float *)((char *)p + 0x64);

    if ((f21 < fabsf(a2)) && (f22 < a1)) {
        r = ((float (*)(float, float, float))(void *)func_0015ACE0)(a1 * f0, 0.0f, 1.0f);
        return r;
    }
    return 0.0f;
}
