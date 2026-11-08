extern void func_00203F80(void *arg0, float a, float b, float c);

void func_00203158(void *arg0, float *arg1) {
    func_00203F80(arg0, arg1[1], arg1[0], arg1[2]);
}

extern float func_003F2F50(float);
extern float func_003F3140(float);

void func_00203E18(void *arg0, float arg1) {
    float c = func_003F2F50(arg1);
    float s = func_003F3140(arg1);
    ((float *)arg0)[8] = c;
    ((float *)arg0)[4] = c;
    ((float *)arg0)[0] = 1.0f;
    ((int *)arg0)[1] = 0;
    ((float *)arg0)[7] = -s;
    ((int *)arg0)[2] = 0;
    ((int *)arg0)[3] = 0;
    ((float *)arg0)[5] = s;
    ((int *)arg0)[6] = 0;
}

void func_00203E90(void *arg0, float arg1) {
    float c = func_003F2F50(arg1);
    float s = func_003F3140(arg1);
    ((float *)arg0)[8] = c;
    ((float *)arg0)[0] = c;
    ((float *)arg0)[4] = 1.0f;
    ((float *)arg0)[6] = s;
    ((float *)arg0)[2] = -s;
    ((int *)arg0)[1] = 0;
    ((int *)arg0)[3] = 0;
    ((int *)arg0)[5] = 0;
    ((int *)arg0)[7] = 0;
}

void func_00203F08(void *arg0, float arg1) {
    float c = func_003F2F50(arg1);
    float s = func_003F3140(arg1);
    ((float *)arg0)[4] = c;
    ((float *)arg0)[0] = c;
    ((float *)arg0)[8] = 1.0f;
    ((float *)arg0)[3] = -s;
    ((float *)arg0)[1] = s;
    ((int *)arg0)[2] = 0;
    ((int *)arg0)[5] = 0;
    ((int *)arg0)[6] = 0;
    ((int *)arg0)[7] = 0;
}
