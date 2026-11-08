/* identical to func_001CA568 (matched), with its names changed by decompdecomp */
void func_0033F298(f32 *m, f32 *v, f32 *out) {
    f32 v0 = v[0];
    f32 v1 = v[1];
    f32 v2 = v[2];
    
    f32 t0 = v0 * m[0] + v1 * m[4] + v2 * m[8] + m[12];
    f32 t1 = v0 * m[1] + v1 * m[5] + v2 * m[9] + m[13];
    f32 t2 = v0 * m[2] + v1 * m[6] + v2 * m[10] + m[14];
    
    out[0] = t0;
    out[1] = t1;
    out[2] = t2;
}
