typedef struct { s32 v; s32 pad[3]; } Key;
extern const char D_00476B10[], D_00476B28[], D_00476B38[], D_00476B40[], D_00476B58[], D_00476B68[], D_00476B70[], D_00476B80[], D_00476B88[], D_00476B98[], D_00476BB0[];
extern void func_001D4040(void *, const char *);
extern void func_001E3D10(void *, void *, s32);
extern void func_001E3FB0(void *, void *, void *);
static inline __attribute__((always_inline)) Key *init(Key *p, const char *s) { func_001D4040(p,s); return p; }
void func_001E3D40(void *arg0) {
 Key key,v1,v2,v3;
 func_001E3D10(arg0,init(&key,D_00476B10),1);
 init(&key,D_00476B28);
 func_001E3FB0(arg0,&key,init(&v1,D_00476B38));
 func_001E3D10(arg0,init(&key,D_00476B40),1);
 init(&key,D_00476B58);
 func_001E3FB0(arg0,&key,init(&v2,D_00476B68));
 init(&key,D_00476B70);
 func_001E3FB0(arg0,&key,init(&v3,D_00476B80));
 func_001E3D10(arg0,init(&key,D_00476B88),1);
 func_001E3D10(arg0,init(&key,D_00476B98),1);
 func_001E3D10(arg0,init(&key,D_00476BB0),1);
}
