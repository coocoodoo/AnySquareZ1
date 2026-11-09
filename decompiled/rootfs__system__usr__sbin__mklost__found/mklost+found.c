// mklost_found — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _DT_INIT @ 00010498 size=16 ===== */

void _DT_INIT(void)

{
  return;
}



/* ===== <EXTERNAL>::perror @ 000104bc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_0002100c)(__s);
  return;
}



/* ===== <EXTERNAL>::creat @ 000104c8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int creat(char *__file,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_creat_00021010)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 000104d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00021014)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 000104e0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00021018)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strcat @ 000104ec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcat_0002101c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000104f8 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_00021020)();
  return;
}



/* ===== <EXTERNAL>::unlink @ 00010504 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_00021024)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 0001051c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002102c)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::sprintf @ 00010528 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sprintf_00021030)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::stat @ 00010534 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_00021034)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00010540 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00021038)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::exit @ 0001054c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002103c)(__status);
  return;
}



/* ===== <EXTERNAL>::strlen @ 00010558 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00021040)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::mkdir @ 00010564 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_00021044)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00010570 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00021048)();
  return;
}



/* ===== <EXTERNAL>::close @ 0001057c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0002104c)(__fd);
  return iVar1;
}



/* ===== entry @ 00010588 size=56 ===== */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00021028)
            (DAT_000105bc,param_2,&stack0x00000004,DAT_000105c0,DAT_000105b8,param_1);
  return;
}



/* ===== FUN_000105c4 @ 000105c4 size=32 ===== */

void FUN_000105c4(void)

{
  if (DAT_000105e8 == DAT_000105e4) {
    return;
  }
  if (DAT_000105ec == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000105ec)();
  return;
}



/* ===== _FINI_0 @ 00010628 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00010664;
  if (*DAT_00010664 != '\0') {
    return;
  }
  FUN_000105c4();
  if (DAT_00010668 != 0) {
    __deregister_frame_info(DAT_0001066c);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00010670 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00010694 != 0) {
    __register_frame_info(DAT_0001069c,DAT_00010698);
  }
  if ((DAT_00010620 - DAT_0001061c >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00010624 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00010624)();
  return;
}



/* ===== FUN_000106a0 @ 000106a0 size=684 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000106a0(int param_1,undefined4 param_2)

{
  int iVar1;
  size_t sVar2;
  stat sStack_278;
  char local_220 [4];
  char acStack_21c [4];
  undefined2 local_218;
  undefined1 local_216;
  char acStack_114 [246];
  char acStack_1e [10];
  int local_14;
  int local_10;
  int local_c;
  
  fprintf(stderr,"mklost+found %s (%s)\n","1.43.9","8-Feb-2018",param_2);
  if (param_1 != 1) {
    fwrite("Usage: mklost+found\n",1,0x14,stderr);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  iVar1 = mkdir("lost+found",0x1c0);
  if (iVar1 == -1) {
    perror("mkdir");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_c = 0;
  memset(acStack_114,0x78,0xf6);
  while( true ) {
    sprintf(acStack_1e,"%08d",local_c);
    local_220[0] = s_lost_found_000109a0[0];
    local_220[1] = s_lost_found_000109a0[1];
    local_220[2] = s_lost_found_000109a0[2];
    local_220[3] = s_lost_found_000109a0[3];
    acStack_21c[0] = s_lost_found_000109a0[4];
    acStack_21c[1] = s_lost_found_000109a0[5];
    acStack_21c[2] = s_lost_found_000109a0[6];
    acStack_21c[3] = s_lost_found_000109a0[7];
    local_218 = (undefined2)ram0x000109a8;
    local_216 = (undefined1)((uint)ram0x000109a8 >> 0x10);
    sVar2 = strlen(local_220);
    *(undefined2 *)(local_220 + sVar2) = DAT_000109bc;
    strcat(local_220,acStack_114);
    local_14 = creat(local_220,0x1a4);
    if (local_14 == -1) {
      perror("creat");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_c = local_c + 1;
    close(local_14);
    iVar1 = stat("lost+found",&sStack_278);
    if (iVar1 == -1) break;
    if (sStack_278.st_blksize * 0xb < sStack_278.st_size) {
      local_10 = 0;
      while( true ) {
        if (local_c <= local_10) {
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        sprintf(acStack_1e,"%08d",local_10);
        local_220[0] = s_lost_found_000109a0[0];
        local_220[1] = s_lost_found_000109a0[1];
        local_220[2] = s_lost_found_000109a0[2];
        local_220[3] = s_lost_found_000109a0[3];
        acStack_21c[0] = s_lost_found_000109a0[4];
        acStack_21c[1] = s_lost_found_000109a0[5];
        acStack_21c[2] = s_lost_found_000109a0[6];
        acStack_21c[3] = s_lost_found_000109a0[7];
        local_218 = (undefined2)ram0x000109a8;
        local_216 = (undefined1)((uint)ram0x000109a8 >> 0x10);
        sVar2 = strlen(local_220);
        *(undefined2 *)(local_220 + sVar2) = DAT_000109bc;
        strcat(local_220,acStack_114);
        iVar1 = unlink(local_220);
        if (iVar1 == -1) break;
        local_10 = local_10 + 1;
      }
      perror("unlink");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  perror("stat");
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== _DT_FINI @ 0001094c size=16 ===== */

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



/* ===== <EXTERNAL>::strcat @ 00022008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcat(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 0002200c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00022010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sprintf @ 00022014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sprintf(char *__s,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00022018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::perror @ 0002201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::creat @ 00022020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int creat(char *__file,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00022024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00022028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0002202c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat @ 00022030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 00022034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 00022038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 0002203c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkdir @ 00022040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


