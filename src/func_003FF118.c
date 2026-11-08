extern s32 func_00401DB0(s64, s64, s64 *);

void func_003FF118(s64 a0, s64 a1, ...) {
    func_00401DB0(a0, a1, (s64 *)((char *)__builtin_next_arg(a1) - 48));
}
