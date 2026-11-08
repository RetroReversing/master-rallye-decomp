extern s32 D_00426398, D_004922B0;
void *func_001E5DA8(void *arg0) {
    if (D_00426398 == 0) {
        D_004922B0 = 0;
        D_00426398 = 1;
    }
    if (*(s32 *)((char *)arg0 + 8) == 11) {
        return *(void **)((char *)arg0 + 4);
    }
    return &D_004922B0;
}
