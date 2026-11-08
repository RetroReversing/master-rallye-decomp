extern void *D_002AD408(u32);extern char D_0044DCD8[];extern void func_0027E698(void*,float);
void *func_002A7F90(s32*a){s32*p=D_002AD408(12);s32 n=a[1];p[2]=(s32)D_0044DCD8;p[1]=n;p[0]=-1;return p;}
void func_002A8358(char*p,float f){float v=-1;if(f<v)*(float*)(p+52)=v;else{v=1;if(f>v)*(float*)(p+52)=v;else *(float*)(p+52)=f;}func_0027E698(p+100,*(float*)(p+52));}
void func_002A83B0(s32*p,s32 i,s32 v){p+=i;p[3]=v;}
s32 func_002A83C0(s32*p,s32 i){p+=i;return p[3];}
