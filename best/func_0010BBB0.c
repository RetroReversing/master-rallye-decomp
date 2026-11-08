int func_00194738(int); int func_00194C40(void); int func_00194CD0(int,int,int); int func_00194D58(int,int); int func_00194FE8(int); int func_00195C68(int,int,float); float func_00195CF0(int,int); int func_00196028(void); float func_001969A0(int,int); int func_00196B40(int,int); int func_00196E10(void); int func_001D4040(void*,const char*); int func_002A1290(int,void*,int); int func_002A1700(void); extern char D_00445BE0[];
void func_0010BBB0(void) {
char key[16]; int a; int b; b=0; a=func_00196B40(func_00196E10(),0); int base,k,id,obj; float v,old,v2,old2;
if(func_00194738(func_00194C40())) b=func_00196B40(func_00196E10(),1);
if(b>0 && b<a) a=b;
base=func_00194FE8(func_00196028()); k=base+94;
if(a==1) func_00194CD0(func_00196028(),k,1);
else if(func_00194D58(func_00196028(),k)!=1) func_00194CD0(func_00196028(),k,2);
id=base+25; old=func_00195CF0(func_00196028(),id); v=func_001969A0(func_00196E10(),0);
if(v<=old) func_00195C68(func_00196028(),id,v);
if(func_00194738(func_00194C40())) {old2=func_00195CF0(func_00196028(),id);v2=func_001969A0(func_00196E10(),1);if(v2<=old2) func_00195C68(func_00196028(),id,v2);}
obj=func_002A1700();func_001D4040(key,D_00445BE0);func_002A1290(obj,key,3);
}
