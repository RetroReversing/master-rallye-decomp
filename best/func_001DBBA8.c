extern f32 func_003F2F50(f32);
extern f32 func_003F3140(f32);

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

void func_001DBBA8(void *arg0, f32 fparg0) {
    f32 rad;
    f32 c;
    f32 s;
    Vec3 *p;
    Vec3 *end;

    rad = (fparg0 * 3.1415927f) / 180.0f;
    c = func_003F2F50(rad);
    s = func_003F3140(rad);
    p = *(Vec3 **)arg0;
    end = *(Vec3 **)((u8 *)arg0 + 4);
    if (p != end) {
        do {
            f32 y = p->y;
            f32 z = p->z;
            f32 ny = (y * c) - (z * s);
            f32 nz = (y * s) + (z * c);
            p->y = ny;
            p->z = nz;
            p++;
            end = *(Vec3 **)((u8 *)arg0 + 4);
        } while (p != end);
    }
}

extern void func_001DCC78(void *, s32, s32, void *);

void func_001DC508(void *arg0, void *arg1) {
    s32 row = 0;
    s32 rows = *(s32 *)((u8 *)arg0 + 0x10);
    if (rows > 0) {
        do {
            s32 col = 0;
            s32 cols = *(s32 *)((u8 *)arg0 + 0xC);
            if (cols > 0) {
                do {
                    func_001DCC78(arg0, col, row, arg1);
                    col++;
                } while (col < *(s32 *)((u8 *)arg0 + 0xC));
            }
            row++;
        } while (row < rows);
    }
}
