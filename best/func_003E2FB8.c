typedef struct {
    void *unk0;
    int unk4;
    int unk8;
    int unkC;
    int unk10;
    void *unk14;
    void *unk18;
} S_3E2FB8;

void func_003E2FB8(S_3E2FB8 *arg0) {
    unsigned char *dst = (unsigned char *)arg0->unk0;
    unsigned char *src1 = (unsigned char *)arg0->unk14;
    unsigned char *src2 = (unsigned char *)arg0->unk18;
    int count1 = arg0->unk8;
    int count2 = arg0->unkC;
    int stride = arg0->unk10;
    int stride2 = stride * 2;
    int mask = -1;
    *(int*)0 = arg0->unk4; // mtsab - not exactly the same
    do {
        do {
            __int128_t a = *(__int128_t*)src1;
            __int128_t b = *(__int128_t*)src2;
            count1--;
            src1 += stride;
            src2 += stride;
            __int128_t c = (__int128_t)b; // placeholder
            __int128_t d = (__int128_t)a;
            __int128_t e = (__int128_t)a;
            *(__int128_t*)dst = d;
            *(__int128_t*)(dst + 0x10) = e;
            dst += stride2;
        } while (count1 > 0);
        src1 += 0x80;
        src2 += 0x80;
        count1 = count2;
        mask = 0;
    } while ((mask & count1) != 0);
}
