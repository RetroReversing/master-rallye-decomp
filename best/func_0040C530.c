typedef signed int s32;
typedef signed long long s64;
typedef float f32;

s64 func_0040C660(f32);

s64 func_0040C530(f32 arg0) {
    if (!(arg0 < 0.0f)) {
        return func_0040C660(arg0);
    }
    return -func_0040C660(-arg0);
}
