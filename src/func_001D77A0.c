void func_001D77A0(void *arg0, s32 *arg1, s32 *arg2) {
    s32 i = *arg1;
    if (i >= 0) {
        if (i < *(s32 *)((u8 *)arg0 + 0x18)) {
            s32 j = *arg2;
            if (j >= 0) {
                s32 *cap = *(s32 **)((u8 *)arg0 + 0xC);
                s32 idx = i << 2;
                s32 *cp = (s32 *)((u8 *)cap + idx);
                if (*cp >= j) {
                    s32 *arr = *(s32 **)((u8 *)arg0 + 0);
                    *(s32 *)((u8 *)arr + idx) = j;
                }
            }
        }
    }
}

extern f32 func_003F2F50(f32);
extern f32 func_003F3140(f32);

typedef struct {
    float x, y, z;
} Vec3;

void func_001DBBA8(void *arg0, f32 fparg0) {
    f32 rad = (fparg0 * 3.1415927f) / 180.0f;
    f32 c = func_003F2F50(rad);
    f32 s = func_003F3140(rad);
    Vec3 *p = *(Vec3 **)arg0;
    Vec3 *end = *(Vec3 **)((u8 *)arg0 + 4);

    if (p != end) {
        do {
            f32 y = p->y;
            f32 z = p->z;
            p->z = y * s + z * c;
            p->y = y * c - z * s;
            p++;
        } while (p != end);
    }
}

extern void func_001DCC78(void *, s32, s32, void *);

void func_001DC508(void *arg0, void *arg1) {
    s32 row = 0;
    s32 rows = *(s32 *)((u8 *)arg0 + 0x10);

    if (rows > 0) {
        s32 cols;
        do {
            cols = *(s32 *)((u8 *)arg0 + 0xC);
            if (cols > 0) {
                s32 col = 0;
                do {
                    func_001DCC78(arg0, col, row, arg1);
                    col++;
                } while (col < cols);
            }
            row++;
        } while (row < rows);
    }
}
