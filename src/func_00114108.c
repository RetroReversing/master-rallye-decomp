extern void func_00114160(void *, s32);
void func_00114108(void *o) {
    if (*(s32 *)((char *)o + 0x30) == 0) {
        func_00114160(o, 1);
        *(s32 *)((char *)o + 0x28) = func_001E3650(func_001E4280(), (char *)o + 0x40);
    } else {
        func_00114160(o, 0);
    }
}
