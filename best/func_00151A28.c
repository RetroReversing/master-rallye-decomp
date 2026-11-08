extern u32 D_0040E618[];
void *func_00152D28(int);
void *func_002B1FC0(int);
void func_002B2028(void *);
void *func_003D2910(int);
void func_003F931C(void *,const void *,int);
void func_003F93CC(void *,const void *,int);
char **func_00151A28(char **a,u32 pos,u32 n,const void *src,u32 count){
 char *p=*a; u32 len, take, total, need,cap,bytes; int grow=0; char *q,*h; u32 dest;
 *(u32 *)(p-4)=0;
 len=*(u32 *)(p-16);
 take=len-pos; if(take>=n) take=n;
 h=*a-16; total=len-take+count; need=total+1;
 if(*(u32 *)(h+8)>=2 || *(u32 *)(h+4)<need || 2*(need>15?need:16)<*(u32 *)(h+4))grow=1;
 if(grow){
 cap=16;dest=pos+count;
 while(cap<total+1)cap*=2;
 bytes=cap+16;
 if(bytes){h=func_002B1FC0(bytes);if(!h)h=func_003D2910(bytes);}
 else {h=(char *)D_0040E618[-1];if(h)D_0040E618[-1]=*(u32 *)h;else h=func_00152D28(0);}
 *(u32 *)(h+4)=cap;*(u32 *)(h+8)=1;q=h+16;*(u32 *)(h+12)=0;
 if(pos)func_003F931C(q,*a,pos);
 if(len-(pos+take))func_003F931C(q+dest,*a+pos+take,len-(pos+take));
 if(count)func_003F931C(q+pos,src,count);
 p=*a;h=p-16;
 if(--*(u32 *)(h+8)==0){if(*(u32 *)(h+4)+16)func_002B2028(h);else{*(u32 *)(p-16)=D_0040E618[-1];D_0040E618[-1]=(u32)h;}}
 *a=q;
 }else{
 p=*a;
 if(len-(pos+take))func_003F93CC(p+(pos+count),p+pos+take,len-(pos+take));
 if(count)func_003F931C(*a+pos,src,count);
 }
 *(u32 *)(*a-16)=total;return a;
}
