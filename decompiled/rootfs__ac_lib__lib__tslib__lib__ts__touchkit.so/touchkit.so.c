// touchkit.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000103f0 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::memcpy @ 00010414 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002100c)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00010420 size=12 ===== */

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00021010)();
  return;
}



/* ===== <EXTERNAL>::malloc @ 0001042c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00021014)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00010438 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00021018)();
  return;
}



/* ===== <EXTERNAL>::read @ 00010444 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_0002101c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::gettimeofday @ 00010450 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_00021020)(__tv);
  return iVar1;
}



/* ===== <EXTERNAL>::tcgetattr @ 0001045c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcgetattr_00021024)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::tcsetattr @ 00010468 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcsetattr(int __fd,int __optional_actions,termios *__termios_p)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tcsetattr_00021028)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010474 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002102c)();
  return;
}



/* ===== entry @ 00010480 size=72 ===== */

void processEntry entry(void)

{
  code *pcVar1;
  
  if (DAT_000104cc + 0x10498 == DAT_000104c8 + 0x10490) {
    return;
  }
  pcVar1 = *(code **)(DAT_000104d0 + 0x104a0 + DAT_000104d4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== _FINI_0 @ 0001053c size=112 ===== */

void _FINI_0(void)

{
  int iVar1;
  
  iVar1 = DAT_000105b0 + 0x10558;
  if (*(char *)(DAT_000105ac + 0x1054c) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + DAT_000105b4) != 0) {
    __cxa_finalize(*(undefined4 *)(DAT_000105b8 + 0x10578));
  }
  entry();
  if (*(int *)(iVar1 + DAT_000105bc) != 0) {
    __deregister_frame_info(DAT_000105c0 + 0x10598);
  }
  *(undefined1 *)(DAT_000105c4 + 0x105a8) = 1;
  return;
}



/* ===== _INIT_0 @ 000105c8 size=140 ===== */

void _INIT_0(void)

{
  code *pcVar1;
  
  if (*(int *)(DAT_00010600 + 0x105d8 + DAT_00010604) != 0) {
    __register_frame_info(DAT_0001060c + 0x105f8,DAT_00010608 + 0x105f4);
  }
  if (((DAT_00010530 + 0x104f0) - (DAT_0001052c + 0x104e8) >> 2) / 2 == 0) {
    return;
  }
  pcVar1 = *(code **)(DAT_00010534 + 0x104f8 + DAT_00010538);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
    return;
  }
  return;
}



/* ===== touchkit_mod_init @ 00010610 size=36 ===== */

void touchkit_mod_init(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  *(int *)((int)pvVar1 + 0xc) = DAT_00010634 + 0x10630;
  return;
}



/* ===== FUN_00010638 @ 00010638 size=500 ===== */

undefined4 FUN_00010638(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  ssize_t sVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  tcflag_t tVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  tcflag_t *ptVar11;
  int *piVar12;
  void *__dest;
  termios local_5c;
  
  piVar12 = (int *)*param_1;
  ptVar11 = (tcflag_t *)(DAT_0001082c + 0x10654);
  tVar6 = *ptVar11;
  iVar9 = *piVar12;
  if (tVar6 == 0) {
    tcgetattr(iVar9,&local_5c);
    local_5c.c_cflag = 0xcbd;
    local_5c.c_line = '\0';
    local_5c.c_iflag = 5;
    local_5c.c_cc[5] = '\0';
    local_5c.c_cc[6] = '\x01';
    local_5c.c_oflag = tVar6;
    local_5c.c_lflag = tVar6;
    tcsetattr(iVar9,2,&local_5c);
    iVar9 = *piVar12;
    *ptVar11 = 1;
  }
  iVar1 = DAT_00010830;
  iVar7 = DAT_00010830 + 0x106c8;
  sVar2 = read(iVar9,(void *)(iVar7 + *(int *)(DAT_00010830 + 0x1072c)),5);
  if (sVar2 < 1) {
    return 0xffffffff;
  }
  iVar10 = sVar2 + *(int *)(iVar1 + 0x1072c);
  *(int *)(iVar1 + 0x1072c) = iVar10;
  iVar9 = DAT_00010834;
  if (4 < iVar10) {
    iVar8 = 0;
    do {
      if ((*(byte *)(iVar1 + iVar8 + 0x106c8) | 1) == 0x81) {
        if (iVar10 <= iVar8 + 4) {
          if (iVar8 == 0) {
            return 0;
          }
          memcpy((void *)(iVar1 + 0x106c8),(void *)(iVar1 + 0x106c8 + iVar8),iVar10 - iVar8);
          *(int *)(iVar1 + 0x1072c) = iVar10 - iVar8;
          return 0;
        }
        iVar3 = 1;
        pbVar4 = (byte *)(iVar7 + iVar8 + 1);
        while ((*pbVar4 | 1) != 0x81) {
          iVar3 = iVar3 + 1;
          pbVar4 = pbVar4 + 1;
          if (iVar3 == 5) {
            __dest = (void *)(DAT_00010834 + 0x1076c);
            *param_2 = (*(byte *)((int)__dest + iVar8 + 1) & 0xf) << 7 |
                       *(byte *)((int)__dest + iVar8 + 2) & 0x7f;
            param_2[1] = (*(byte *)((int)__dest + iVar8 + 3) & 0xf) << 7 |
                         *(byte *)((int)__dest + iVar8 + 4) & 0x7f;
            if ((*(byte *)((int)__dest + iVar8) & 1) == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = 200;
            }
            param_2[2] = uVar5;
            gettimeofday((timeval *)(param_2 + 3),(__timezone_ptr_t)0x0);
            memcpy(__dest,(void *)((int)__dest + iVar8 + 5),(iVar10 - iVar8) - 5);
            *(int *)(iVar9 + 0x107d0) = iVar10 - (iVar8 + 5);
            return 1;
          }
        }
        iVar8 = iVar8 + iVar3 + -1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar10);
  }
  return 0;
}



/* ===== _fini @ 00010838 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::memcpy @ 00022000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__cxa_finalize @ 00022004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 00022008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 0002200c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_registerTMCloneTable @ 00022010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::read @ 00022014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_ITM_deregisterTMCloneTable @ 00022018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gettimeofday @ 0002201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcgetattr @ 00022020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcgetattr(int __fd,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tcsetattr @ 00022024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tcsetattr(int __fd,int __optional_actions,termios *__termios_p)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__register_frame_info @ 00022028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


