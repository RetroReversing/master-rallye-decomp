void func_001D4040(void*,const char*);void*D_002AD408(int);void func_001E2460(void*,void*);void func_001E2C78(void*,const char*,int);int func_001E3598(int,void*);void func_00140CE8(void*);int func_00297500(void);int func_002971B0(int);void func_0011E650(int,int,int);
extern char D_0044BC20[],D_0044CD40[],D_0044BC38[],D_0044DD18[],D_0044BAF0[];
static inline int*keyinit(int*p,const char*s){func_001D4040(p,s);return p;}
void*func_00140F30(int*p){int k[4];func_001D4040(k,D_0044BC20);p[4]=0;p[5]=0;p[6]=0;p[7]=0;p[8]=0;p[9]=0;p[10]=0;p[3]=0;p[1]=k[0];p[0]=-1;p[2]=(int)D_0044CD40;func_001D4040(p+4,0);p[11]=0;p[12]=0;p[13]=0;p[14]=0;p[15]=0;return p;}
void func_00140EB8(int*p){int n=func_002971B0(func_00297500());if(n>0){if(n<4)func_0011E650(p[3],3,0);else {if(n!=4)return;func_0011E650(p[3],3,0);}}}
static inline void z(int*p){p[0]=0;p[2]=0;p[1]=0;}
void*func_00140FF0(int*a){int k[8],r[4];int*p=D_002AD408(36);func_001D4040(k,D_0044BC20);p[2]=0;p[3]=0;p[1]=0;p[0]=0;p[5]=0;p[4]=(int)D_0044DD18;z(p+5);p[8]=k[0];func_001E2460(r,p);func_001E2C78(r,D_0044BC38,a[3]);return p;}
void func_00140E50(int*p){int k[4],g=func_001E4280();if(!func_001E3598(g,keyinit(k,D_0044BAF0))){func_00140CE8(p);p[4]=1;}}
