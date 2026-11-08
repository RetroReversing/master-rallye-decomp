extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern u32 D_0040E618[];
extern u32 D_004736F8[], D_00474288[];
#define F(p,o,t) (*(t *)((char *)(p)+(o)))
void func_001895D0(void *self, int flags) {
 char *p,*q,*p2,*q2;
 F(self,4,void *)=D_004736F8;
 p=F(self,0x2c8,char *); q=p-16;
 if (--F(q,8,int)==0) {
  if (F(q,4,int)+16) func_002B2028(q);
  else { F(p,-16,u32)=D_0040E618[-1]; D_0040E618[-1]=(u32)q; }
 }
 p2=F(self,0x268,char *); q2=p2-16;
 if (--F(q2,8,int)==0) {
  if (F(q2,4,int)+16) func_002B2028(q2);
  else { F(p2,-16,u32)=D_0040E618[-1]; D_0040E618[-1]=(u32)q2; }
 }
 F(self,4,void *)=D_00474288;
 if(flags&1) D_002AD390(self);
}
