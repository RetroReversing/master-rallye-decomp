typedef struct { float key; u8 pad[12]; } E16;

extern void func_002149A0(E16 *p, E16 *end);

static inline s32 less16(E16 *a, E16 *b) {
    return *(float *)b < *(float *)a ? 1 : 0;
}

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_002148F8(E16 *p, E16 value) {
    E16 *q = p - 1;
    while (less16(q, &value)) {
        *p = *q;
        p = q;
        q = p - 1;
    }
    *p = value;
}

void func_00214AB8(E16 *p, E16 *end, s32 unused) {
    for (; p != end; p++) {
        E16 v = *p;
        func_002148F8(p, v);
    }
}

void func_00214B28(E16 *p, E16 *end) {
    if (end - p > 16) {
        E16 *q = p + 16;
        func_002149A0(p, q);
        func_00214AB8(q, end, 0);
    } else {
        func_002149A0(p, end);
    }
}
