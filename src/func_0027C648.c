void func_00205580(void *, void *);
void func_0027C7A0(void *);

void func_0027C648(void *arg0, void *arg1) {
    void *v0 = arg0 + 0xAC;
    void *a1 = arg0 + 0xBC;
    *(f32 *)v0 = *(f32 *)arg1;
    *(f32 *)(v0 + 4) = *(f32 *)(arg1 + 4);
    *(f32 *)(v0 + 8) = *(f32 *)(arg1 + 8);
    *(f32 *)(v0 + 0xC) = *(f32 *)(arg1 + 0xC);
    func_00205580(v0, a1);
    func_0027C7A0(arg0);
}
