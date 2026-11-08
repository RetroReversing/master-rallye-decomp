int func_00235120(void **arg0, float *arg1, float f12) {
    float *p0 = (float *)arg0[0];
    float x = arg1[0];
    float y = arg1[1];
    float z = arg1[2];
    float w = arg1[3];
    float d0;

    d0 = x * p0[0] + y * p0[1] + z * p0[2] + w;
    if (__builtin_fabsf(d0) < f12) {
        float *p1 = (float *)arg0[1];
        float d1 = x * p1[0] + y * p1[1] + z * p1[2] + w;
        if (__builtin_fabsf(d1) < f12) {
            return 1;
        }
    }
    return 0;
}
