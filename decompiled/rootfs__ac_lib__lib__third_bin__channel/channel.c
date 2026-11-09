// channel — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 000102d8 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::system @ 000102fc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_system_0002100c)(__command);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00010308 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00021010)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010314 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00021014)();
  return;
}



/* ===== <EXTERNAL>::memset @ 0001032c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002101c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00010338 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00021020)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::access @ 00010344 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_00021024)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010350 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00021028)();
  return;
}



/* ===== FUN_0001035c @ 0001035c size=812 ===== */

undefined4 FUN_0001035c(void)

{
  int iVar1;
  char acStack_110 [260];
  
  memset(acStack_110,0,0x100);
  iVar1 = access("/mnt/udisk/aGVscF9zb3Nf/update.swu",0);
  if (iVar1 == 0) {
    system("echo 1 > /sys/class/pwm/pwmchip0/pwm0/enable");
    system("sleep 1");
    system("echo 0 > /sys/class/pwm/pwmchip0/pwm0/enable");
    memset(acStack_110,0,0x100);
    sprintf(acStack_110,"rm -rf %s/update.swu","/useremain");
    system(acStack_110);
    memset(acStack_110,0,0x100);
    sprintf(acStack_110,"rm -rf %s/update_swu","/useremain");
    system(acStack_110);
    memset(acStack_110,0,0x100);
    sprintf(acStack_110,"cp -fd %s/update.swu /useremain","/mnt/udisk/aGVscF9zb3Nf");
    system(acStack_110);
    memset(acStack_110,0,0x100);
    sprintf(acStack_110,"unzip -P %s%s%s%s %s/update.swu -d %s","U2FsdGVkX19","deTfqpXHZ",
            "nB5GeyQ/dtlbHjk","UnwgCi+w=","/useremain","/useremain");
    system(acStack_110);
    memset(acStack_110,0,0x100);
    sprintf(acStack_110,"rm -rf %s/update.swu","/useremain");
    system(acStack_110);
    memset(acStack_110,0,0x100);
    sprintf(acStack_110,"%s/setup.tar.gz","/useremain/update_swu");
    iVar1 = access(acStack_110,0);
    if (iVar1 == 0) {
      memset(acStack_110,0,0x100);
      sprintf(acStack_110,"tar zxf %s/setup.tar.gz -C %s","/useremain/update_swu");
      system(acStack_110);
    }
    else {
      memset(acStack_110,0,0x100);
      sprintf(acStack_110,"%s/setup.tar","/useremain/update_swu");
      iVar1 = access(acStack_110,0);
      if (iVar1 == 0) {
        memset(acStack_110,0,0x100);
        sprintf(acStack_110,"tar xf %s/setup.tar -C %s","/useremain/update_swu");
        system(acStack_110);
      }
    }
    memset(acStack_110,0,0x100);
    sprintf(acStack_110,"chmod +x %s/update.sh","/useremain/update_swu");
    system(acStack_110);
    memset(acStack_110,0,0x100);
    sprintf(acStack_110,"%s/update.sh","/useremain/update_swu");
    system(acStack_110);
  }
  else {
    iVar1 = access("/mnt/udisk/ZXhwb3J0X2Rpcgo=/ZXhwb3J0LnR4dAo=",0);
    if ((iVar1 == 0) ||
       (iVar1 = access("/mnt/udisk/aW1wb3J0X2Rpcgo=/aW1wb3J0LnR4dAo=",0), iVar1 == 0)) {
      sprintf(acStack_110,"/userdata/ex_and_im.sh %s%s%s%s","2YLVrATRvUEnMeXk6Vt","c7qxfzYM4TJzr",
              "LnEBma8zpUKe","GtseGWqp4LXs7e8KeU2u");
      system(acStack_110);
    }
  }
  system("sync");
  return 0;
}



/* ===== entry @ 00010688 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00021018)
            (DAT_000106bc,param_2,&stack0x00000004,DAT_000106c0,DAT_000106b8,param_1);
  return;
}



/* ===== FUN_000106c4 @ 000106c4 size=32 ===== */

void FUN_000106c4(void)

{
  if (DAT_000106e8 == DAT_000106e4) {
    return;
  }
  if (DAT_000106ec == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000106e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000106ec)();
  return;
}



/* ===== _FINI_0 @ 00010728 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010764;
  if (*DAT_00010764 != '\0') {
    return;
  }
  FUN_000106c4();
  if (DAT_00010768 != 0) {
    __deregister_frame_info(DAT_0001076c);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010770 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010794 != 0) {
    __register_frame_info(DAT_0001079c,DAT_00010798);
  }
  if ((DAT_00010720 - DAT_0001071c >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010724 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010724)();
  return;
}



/* ===== _DT_FINI @ 000107a0 size=16 ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00022000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00022004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00022008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 0002200c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 00022010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00022014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00022018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::system @ 0002201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int system(char *__command)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


