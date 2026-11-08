typedef struct { float x,y,z; } V;
extern void func_001683A8(V*,void*);
extern void func_00168448(V*,void*);
extern void func_001685F0(V*,void*);
extern int func_00168AA0(void*);
extern void func_00168B08(V*,void*);
extern int func_00169310(void*,V*,V*);
int func_00169DC0(void *unused,void *p) {
 V a,b,c,d,e,f;
 func_001683A8(&a,p);
 if(a.x*a.x+a.y*a.y+a.z*a.z < 4.0f) {
 if(func_00168AA0(p)) {
 func_00168448(&b,p); func_00168B08(&c,p);
 if(b.x*c.x+b.y*c.y+b.z*c.z < -0.2f) return 1;
 } else {
 func_00168448(&b,p); func_001685F0(&d,p);
 f.x=b.x*2.0f; f.y=b.y*2.0f; f.z=b.z*2.0f;
 e.x=d.x+f.x; e.y=d.y+f.y; e.z=d.z+f.z;
 return func_00169310(p,&d,&e);
 } } return 0;
}
