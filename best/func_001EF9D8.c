void func_001DBBA8(s32, f32);

void func_001EF9D8(void *arg0, f32 arg1) {
    void *self = arg0;
    s32 **it = *(s32 **)self;
    s32 **end = *(s32 **)((u8 *)self + 4);
    if (it != end) {
        do {
            func_001DBBA8(*it, arg1);
            it++;
            end = *(s32 **)((u8 *)self + 4);
        } while (it != end);
    }
}
