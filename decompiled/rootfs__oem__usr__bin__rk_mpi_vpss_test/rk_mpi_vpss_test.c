// rk_mpi_vpss_test — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 000122e0 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 00012304 size=12 ===== */

void RK_MPI_SYS_Exit(void)

{
  (*(code *)PTR_RK_MPI_SYS_Exit_0002d00c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00012310 size=12 ===== */

void RK_MPI_SYS_Bind(void)

{
  (*(code *)PTR_RK_MPI_SYS_Bind_0002d010)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetVProcDev @ 0001231c size=12 ===== */

void RK_MPI_VPSS_SetVProcDev(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetVProcDev_0002d014)();
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00012328 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_0002d018)();
  return;
}



/* ===== <EXTERNAL>::__errno_location @ 00012334 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_0002d01c)();
  return piVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetGrpCrop @ 00012340 size=12 ===== */

void RK_MPI_VPSS_GetGrpCrop(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetGrpCrop_0002d020)();
  return;
}



/* ===== <EXTERNAL>::clock_gettime @ 0001234c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0002d024)(__clock_id);
  return iVar1;
}



/* ===== <EXTERNAL>::fwrite @ 00012358 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_0002d028)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::usleep @ 00012364 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_usleep_0002d02c)(__useconds);
  return iVar1;
}



/* ===== <EXTERNAL>::memcpy @ 00012370 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_0002d030)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnCrop @ 0001237c size=12 ===== */

void RK_MPI_VPSS_SetChnCrop(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetChnCrop_0002d034)();
  return;
}



/* ===== <EXTERNAL>::getline @ 00012388 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__ssize_t getline(char **__lineptr,size_t *__n,FILE *__stream)

{
  __ssize_t _Var1;
  
  _Var1 = (*(code *)PTR_getline_0002d038)(__lineptr);
  return _Var1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DetachMbPool @ 00012394 size=12 ===== */

void RK_MPI_VPSS_DetachMbPool(void)

{
  (*(code *)PTR_RK_MPI_VPSS_DetachMbPool_0002d03c)();
  return;
}



/* ===== <EXTERNAL>::mkdir @ 000123a0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_0002d040)(__path);
  return iVar1;
}



/* ===== <EXTERNAL>::malloc @ 000123ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0002d044)(__size);
  return pvVar1;
}



/* ===== <EXTERNAL>::strncmp @ 000123b8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_0002d048)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen64 @ 000123d0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen64_0002d050)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_VGS_GetPicBufferSize @ 000123dc size=12 ===== */

void RK_MPI_CAL_VGS_GetPicBufferSize(void)

{
  (*(code *)PTR_RK_MPI_CAL_VGS_GetPicBufferSize_0002d054)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_AttachMbPool @ 000123e8 size=12 ===== */

void RK_MPI_VPSS_AttachMbPool(void)

{
  (*(code *)PTR_RK_MPI_VPSS_AttachMbPool_0002d058)();
  return;
}



/* ===== <EXTERNAL>::strlen @ 000123f4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002d05c)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnCrop @ 0001240c size=12 ===== */

void RK_MPI_VPSS_GetChnCrop(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetChnCrop_0002d064)();
  return;
}



/* ===== <EXTERNAL>::strtol @ 00012418 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_0002d068)(__nptr);
  return lVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00012424 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_0002d06c)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00012430 size=12 ===== */

void RK_MPI_SYS_UnBind(void)

{
  (*(code *)PTR_RK_MPI_SYS_UnBind_0002d070)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_ReleaseChnFrame @ 0001243c size=12 ===== */

void RK_MPI_VPSS_ReleaseChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VPSS_ReleaseChnFrame_0002d074)();
  return;
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 00012448 size=12 ===== */

void __fputc_unlocked(void)

{
  (*(code *)PTR___fputc_unlocked_0002d078)();
  return;
}



/* ===== <EXTERNAL>::access @ 00012454 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_0002d07c)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::stat64 @ 00012460 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat64_0002d080)(__file);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 0001246c size=12 ===== */

void RK_MPI_SYS_Init(void)

{
  (*(code *)PTR_RK_MPI_SYS_Init_0002d084)();
  return;
}



/* ===== <EXTERNAL>::memmove @ 00012478 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_0002d088)(__dest);
  return pvVar1;
}



/* ===== <EXTERNAL>::fclose @ 00012484 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_0002d08c)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fread @ 00012490 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_0002d090)(__ptr);
  return sVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnFrame @ 0001249c size=12 ===== */

void RK_MPI_VPSS_GetChnFrame(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetChnFrame_0002d094)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_EnableChn @ 000124a8 size=12 ===== */

void RK_MPI_VPSS_EnableChn(void)

{
  (*(code *)PTR_RK_MPI_VPSS_EnableChn_0002d098)();
  return;
}



/* ===== <EXTERNAL>::RK_LOG @ 000124b4 size=12 ===== */

void RK_LOG(void)

{
  (*(code *)PTR_RK_LOG_0002d09c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StartGrp @ 000124c0 size=12 ===== */

void RK_MPI_VPSS_StartGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_StartGrp_0002d0a0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DisableChn @ 000124cc size=12 ===== */

void RK_MPI_VPSS_DisableChn(void)

{
  (*(code *)PTR_RK_MPI_VPSS_DisableChn_0002d0a4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_CAL_COMM_GetHorStride @ 000124d8 size=12 ===== */

void RK_MPI_CAL_COMM_GetHorStride(void)

{
  (*(code *)PTR_RK_MPI_CAL_COMM_GetHorStride_0002d0a8)();
  return;
}



/* ===== <EXTERNAL>::pthread_create @ 000124e4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0002d0ac)(__newthread);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzAlloc_Cached @ 000124f0 size=12 ===== */

void RK_MPI_SYS_MmzAlloc_Cached(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzAlloc_Cached_0002d0b0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SendFrame @ 000124fc size=12 ===== */

void RK_MPI_VPSS_SendFrame(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SendFrame_0002d0b4)();
  return;
}



/* ===== <EXTERNAL>::fputc @ 00012508 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_0002d0b8)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 00012514 size=12 ===== */

void __aeabi_uidiv(void)

{
  (*(code *)PTR___aeabi_uidiv_0002d0bc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_CreatePool @ 00012520 size=12 ===== */

void RK_MPI_MB_CreatePool(void)

{
  (*(code *)PTR_RK_MPI_MB_CreatePool_0002d0c0)();
  return;
}



/* ===== <EXTERNAL>::strncpy @ 0001252c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0002d0c4)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnRotationEx @ 00012538 size=12 ===== */

void RK_MPI_VPSS_GetChnRotationEx(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetChnRotationEx_0002d0c8)();
  return;
}



/* ===== <EXTERNAL>::fputs @ 00012544 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_0002d0cc)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnAttr @ 00012550 size=12 ===== */

void RK_MPI_VPSS_SetChnAttr(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetChnAttr_0002d0d0)();
  return;
}



/* ===== <EXTERNAL>::fflush @ 0001255c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_0002d0d4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00012568 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0002d0d8)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_CreateGrp @ 00012574 size=12 ===== */

void RK_MPI_VPSS_CreateGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_CreateGrp_0002d0dc)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_DestroyPool @ 00012580 size=12 ===== */

void RK_MPI_MB_DestroyPool(void)

{
  (*(code *)PTR_RK_MPI_MB_DestroyPool_0002d0e0)();
  return;
}



/* ===== <EXTERNAL>::fprintf @ 0001258c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_0002d0e4)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strtof @ 00012598 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_0002d0e8)(__nptr);
  return fVar1;
}



/* ===== <EXTERNAL>::__aeabi_uldivmod @ 000125a4 size=12 ===== */

void __aeabi_uldivmod(void)

{
  (*(code *)PTR___aeabi_uldivmod_0002d0ec)();
  return;
}



/* ===== <EXTERNAL>::abort @ 000125b0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002d0f0)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StopGrp @ 000125bc size=12 ===== */

void RK_MPI_VPSS_StopGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_StopGrp_0002d0f4)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 000125c8 size=12 ===== */

void RK_MPI_SYS_MmzFlushCache(void)

{
  (*(code *)PTR_RK_MPI_SYS_MmzFlushCache_0002d0f8)();
  return;
}



/* ===== <EXTERNAL>::fseek @ 000125d4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_0002d0fc)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 000125e0 size=12 ===== */

void RK_MPI_MB_Handle2VirAddr(void)

{
  (*(code *)PTR_RK_MPI_MB_Handle2VirAddr_0002d100)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 000125ec size=12 ===== */

void RK_MPI_MB_ReleaseMB(void)

{
  (*(code *)PTR_RK_MPI_MB_ReleaseMB_0002d104)();
  return;
}



/* ===== <EXTERNAL>::exit @ 000125f8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0002d108)(__status);
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetGrpCrop @ 00012604 size=12 ===== */

void RK_MPI_VPSS_SetGrpCrop(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetGrpCrop_0002d10c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_ResetGrp @ 00012610 size=12 ===== */

void RK_MPI_VPSS_ResetGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_ResetGrp_0002d110)();
  return;
}



/* ===== <EXTERNAL>::strstr @ 0001261c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_0002d114)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::ftell @ 00012628 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_ftell_0002d118)(__stream);
  return lVar1;
}



/* ===== <EXTERNAL>::free @ 00012634 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0002d11c)(__ptr);
  return;
}



/* ===== <EXTERNAL>::strerror @ 00012640 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_0002d120)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 0001264c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0002d124)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::puts @ 00012658 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0002d128)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnRotation @ 00012664 size=12 ===== */

void RK_MPI_VPSS_SetChnRotation(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetChnRotation_0002d12c)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnRotationEx @ 00012670 size=12 ===== */

void RK_MPI_VPSS_SetChnRotationEx(void)

{
  (*(code *)PTR_RK_MPI_VPSS_SetChnRotationEx_0002d130)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DestroyGrp @ 0001267c size=12 ===== */

void RK_MPI_VPSS_DestroyGrp(void)

{
  (*(code *)PTR_RK_MPI_VPSS_DestroyGrp_0002d134)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnRotation @ 00012688 size=12 ===== */

void RK_MPI_VPSS_GetChnRotation(void)

{
  (*(code *)PTR_RK_MPI_VPSS_GetChnRotation_0002d138)();
  return;
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Alloc @ 00012694 size=12 ===== */

void RK_MPI_MMZ_Alloc(void)

{
  (*(code *)PTR_RK_MPI_MMZ_Alloc_0002d13c)();
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 000126a0 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_0002d140)();
  return;
}



/* ===== <EXTERNAL>::pthread_join @ 000126ac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0002d144)(__th);
  return iVar1;
}



/* ===== main @ 000126b8 size=2124 ===== */

int main(undefined4 param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 auStack_510 [40];
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  int local_4d0;
  int local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  int local_4c0;
  int local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  int local_4a8;
  int local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  undefined1 auStack_484 [4];
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 auStack_470 [4];
  undefined4 local_460 [2];
  undefined *local_458;
  char *local_450;
  code *local_44c;
  undefined4 local_444;
  undefined4 local_440;
  char *local_430;
  undefined4 local_420;
  undefined1 local_41c;
  char *local_418;
  undefined4 *local_414;
  char *local_410;
  undefined4 local_400;
  undefined1 local_3fc;
  char *local_3f8;
  undefined4 *local_3f4;
  char *local_3f0;
  undefined4 local_3e0;
  undefined1 local_3dc;
  char *local_3d8;
  undefined4 *local_3d4;
  char *local_3d0;
  undefined4 local_3c0;
  char *local_3b8;
  undefined4 *local_3b4;
  char *local_3b0;
  undefined4 local_3a0;
  undefined1 local_39c;
  char *local_398;
  undefined4 *local_394;
  char *local_390;
  undefined4 local_380;
  undefined1 local_37c;
  char *local_378;
  undefined4 *local_374;
  char *local_370;
  undefined4 local_360;
  char *local_358;
  int *local_354;
  char *local_350;
  undefined4 local_340;
  char *local_338;
  int *local_334;
  char *local_330;
  undefined4 local_320;
  char *local_318;
  undefined4 *local_314;
  char *local_310;
  undefined4 local_300;
  char *local_2f8;
  undefined4 *local_2f4;
  char *local_2f0;
  undefined4 local_2e0;
  undefined1 local_2dc;
  char *local_2d8;
  int *local_2d4;
  char *local_2d0;
  undefined4 local_2c0;
  undefined1 local_2bc;
  char *local_2b8;
  int *local_2b4;
  char *local_2b0;
  undefined4 local_2a0;
  char *local_298;
  undefined4 *local_294;
  char *local_290;
  undefined4 local_280;
  char *local_278;
  undefined4 *local_274;
  char *local_270;
  undefined4 local_260;
  undefined1 local_25c;
  char *local_258;
  undefined4 *local_254;
  char *local_250;
  undefined4 local_240;
  undefined1 local_23c;
  char *local_238;
  undefined4 *local_234;
  char *local_230;
  undefined4 local_220;
  undefined1 local_21c;
  char *local_218;
  int *local_214;
  char *local_210;
  undefined4 local_200;
  undefined1 local_1fc;
  char *local_1f8;
  int *local_1f4;
  char *local_1f0;
  undefined4 local_1e0;
  undefined1 local_1dc;
  char *local_1d8;
  undefined4 *local_1d4;
  char *local_1d0;
  undefined4 local_1c0;
  undefined1 local_1bc;
  char *local_1b8;
  undefined4 *local_1b4;
  char *local_1b0;
  undefined4 local_1a0;
  undefined1 local_19c;
  char *local_198;
  undefined4 *local_194;
  char *local_190;
  undefined4 local_180;
  undefined1 local_17c;
  char *local_178;
  undefined4 *local_174;
  char *local_170;
  undefined4 local_160;
  undefined1 local_15c;
  char *local_158;
  undefined4 *local_154;
  char *local_150;
  undefined4 local_140;
  char *local_138;
  undefined1 *local_134;
  char *local_130;
  undefined4 local_120;
  undefined1 local_11c;
  char *local_118;
  undefined4 *local_114;
  char *local_110;
  undefined4 local_100;
  char *local_f8;
  undefined4 *local_f4;
  char *local_f0;
  undefined4 local_e0;
  undefined *local_d8;
  undefined4 *local_d4;
  char *local_d0;
  undefined4 local_c0;
  char *local_b8;
  undefined4 *local_b4;
  char *local_b0;
  undefined4 local_a0;
  char *local_98;
  undefined4 *local_94;
  char *local_90;
  undefined4 local_80;
  char *local_78;
  undefined4 *local_74;
  char *local_70;
  undefined4 local_60;
  char *local_58;
  undefined4 *local_54;
  char *local_50;
  
  memset(&local_4e8,0,0x84);
  auVar1._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
  auVar1._0_8_ = 0xffffffffffffffff;
  auVar1 = auVar1 << 0x40 | auVar1;
  local_47c = *(undefined4 *)auVar1;
  uStack_478 = *(undefined4 *)(auVar1 + (undefined1  [16])0x4);
  uStack_474 = *(undefined4 *)(auVar1 + (undefined1  [16])0x8);
  auStack_470[0] = *(undefined4 *)(auVar1 + (undefined1  [16])0xc);
  local_4e0 = 1;
  local_4d8 = 1;
  local_4d4 = 1;
  local_4c8 = 1000;
  local_4c4 = 1000;
  local_480 = 8;
  memset(local_460,0,0x440);
  local_444 = 1;
  local_440 = 1;
  local_41c = 0x69;
  local_458 = &DAT_0001ac54;
  local_450 = "show this help message and exit";
  local_44c = argparse_help_cb;
  local_430 = "basic options:";
  local_418 = "input";
  local_410 = "input file name. e.g.(/userdata/1080p.nv12). default(NULL)";
  local_3f8 = "output";
  local_3f0 = "output file path. e.g.(/userdata/vpss/). default(NULL).";
  local_3d8 = "loop_count";
  local_3d0 = "loop running count. default(1)";
  local_3b8 = "video_proc_dev_type";
  local_3b0 = "the device type of video process. default(0. 0 is GPU, 1 is RGA)";
  local_398 = "group_count";
  local_390 = "the count of vpss group. default(1).";
  local_378 = "channel_count";
  local_370 = "the count of vpss channel. default(1).";
  local_460[0] = 2;
  local_360 = 2;
  local_358 = "group_crop_en";
  local_3e0 = 4;
  local_420 = 6;
  local_234 = &local_4ac;
  local_400 = 6;
  local_3c0 = 4;
  local_3fc = 0x6f;
  local_3a0 = 4;
  local_3dc = 0x6e;
  local_380 = 4;
  local_39c = 0x67;
  local_37c = 99;
  local_350 = "vpss group crop is enabled. default(0).";
  local_340 = 2;
  local_320 = 4;
  local_338 = "channel_crop_en";
  local_300 = 4;
  local_2e0 = 4;
  local_330 = "vpss channel crop is enabled. default(0)";
  local_2c0 = 4;
  local_2a0 = 4;
  local_318 = "group_crop_ratio";
  local_280 = 4;
  local_260 = 4;
  local_310 = "vpss group crop ratio. range(1,1000). default(1000)";
  local_240 = 4;
  local_220 = 4;
  local_2f8 = "channel_crop_ratio";
  local_2f0 = "vpss channel crop ratio. range(1,1000). default(1000)";
  local_2d8 = "src_width";
  local_2d0 = "src width. e.g.(1920). <required>";
  local_2b8 = "src_height";
  local_2b0 = "src height. e.g.(1080). <required>";
  local_298 = "src_vir_width";
  local_290 = "src virtual width. e.g.(1920). default(0)";
  local_278 = "src_vir_height";
  local_270 = "src virtual height. e.g.(1080). default(0)";
  local_258 = "src_compress";
  local_250 = "src compress mode. default(0).";
  local_238 = "src_format";
  local_230 = "src pixel format. default(0. 0 is NV12).";
  local_2dc = 0x77;
  local_2bc = 0x68;
  local_25c = 0x6d;
  local_23c = 0x66;
  local_21c = 0x57;
  local_200 = 4;
  local_1e0 = 4;
  local_218 = "dst_width";
  local_1c0 = 4;
  local_1a0 = 4;
  local_210 = "dst width. e.g.(1920). <required>";
  local_180 = 4;
  local_160 = 4;
  local_1f8 = "dst_height";
  local_140 = 4;
  local_120 = 4;
  local_1f0 = "dst height. e.g.(1080). <required>";
  local_1d8 = "dst_compress";
  local_1d0 = "dst compress mode. default(0).";
  local_1b8 = "dst_format";
  local_1b0 = "dst pixel format. default(0. 0 is NV12).";
  local_198 = "rotation";
  local_190 = "fixed rotation angle. default(0). 0: 0. 1: 90. 2: 180. 3: 270";
  local_178 = "rotation_ex";
  local_170 = "any rotation angle. default(0). ";
  local_158 = "attach_mb_pool";
  local_150 = "enable attach mb pool or not, default(0), 0: RK_FALSE, 1: RK_TRUE";
  local_138 = "chn_mode";
  local_130 = "channel mode, default(0), 0: USER, 1: AUTO, 2: PASS-THOUGH";
  local_118 = "chn_depth";
  local_1fc = 0x48;
  local_1dc = 0x4d;
  local_1bc = 0x46;
  local_19c = 0x72;
  local_17c = 0x52;
  local_15c = 0x61;
  local_11c = 100;
  local_110 = "channel output depth, default(8)";
  local_3f4 = &local_4e4;
  local_3b4 = &local_4dc;
  local_394 = &local_4d8;
  local_100 = 4;
  local_374 = &local_4d4;
  local_e0 = 4;
  local_334 = &local_4cc;
  local_c0 = 4;
  local_314 = &local_4c8;
  local_a0 = 4;
  local_2f4 = &local_4c4;
  local_80 = 4;
  local_2b4 = &local_4bc;
  local_60 = 4;
  local_294 = &local_4b8;
  local_274 = &local_4b4;
  local_f8 = "mirror";
  local_f0 = "picture mirror, default(0)";
  local_d8 = &DAT_0001b27c;
  local_d0 = "picture flip, default(0)";
  local_b8 = "src_chn_rate";
  local_b0 = "src vpss channel frame rate, default(-1)";
  local_98 = "dst_chn_rate";
  local_90 = "dst vpss channel frame rate, default(-1)";
  local_78 = "src_grp_rate";
  local_70 = "src vpss group frame rate, default(-1)";
  local_58 = "dst_grp_rate";
  local_50 = "dst vpss group frame rate, default(-1)";
  local_354 = &local_4d0;
  local_2d4 = &local_4c0;
  local_254 = &local_4b0;
  local_214 = &local_4a8;
  local_1f4 = &local_4a4;
  local_1b4 = &local_49c;
  local_194 = &local_498;
  local_174 = &local_494;
  local_154 = &local_488;
  local_134 = auStack_484;
  local_d4 = &local_48c;
  local_94 = &uStack_478;
  local_74 = &uStack_474;
  local_1d4 = &local_4a0;
  local_114 = &local_480;
  local_f4 = &local_490;
  local_54 = auStack_470;
  local_414 = &local_4e8;
  local_3d4 = &local_4e0;
  local_b4 = &local_47c;
  argparse_init(auStack_510,local_460,&DAT_0001ac44,0);
  argparse_describe(auStack_510,"\nselect a test case to run.","\nuse --help for details.");
  argparse_parse(auStack_510,param_1,param_2);
  puts("cmd parse result:");
  printf("input  file name       : %s\n",local_4e8);
  printf("output file name       : %s\n",local_4e4);
  printf("loop count             : %d\n",local_4e0);
  printf("video process device   : %d\n",local_4dc);
  printf("group number           : %d\n",local_4d8);
  printf("channel number         : %d\n",local_4d4);
  printf("group crop enabled     : %d\n",(uint)(local_4d0 != 0));
  printf("chn crop enabled       : %d\n",(uint)(local_4cc != 0));
  printf("group crop ratio       : %d\n",local_4c8);
  printf("chn crop ratio         : %d\n",local_4c4);
  printf("input width            : %d\n",local_4c0);
  printf("input height           : %d\n",local_4bc);
  printf("input virtual width    : %d\n",local_4b8);
  printf("input virtual height   : %d\n",local_4b4);
  printf("input compress mode    : %d\n",local_4b0);
  printf("input pixel format     : %d\n",local_4ac);
  printf("output width           : %d\n",local_4a8);
  printf("output height          : %d\n",local_4a4);
  printf("output compress mode   : %d\n",local_4a0);
  printf("output pixel format    : %d\n",local_49c);
  printf("fixed rotation         : %d\n",local_498);
  printf("any rotation angle     : %d\n",local_494);
  printf("enable mirror          : %d\n",local_490);
  printf("enable flip            : %d\n",local_48c);
  printf("enable attach mb pool  : %d\n",local_488);
  if ((((local_4c0 < 1) || (local_4bc < 1)) || (local_4a8 < 1)) || (local_4a4 < 1)) {
    iVar2 = -1;
    argparse_usage(auStack_510);
  }
  else {
    iVar2 = RK_MPI_SYS_Init();
    if (iVar2 == 0) {
      iVar2 = TEST_VPSS_ModTest(&local_4e8);
      if (iVar2 == 0) {
        iVar2 = RK_MPI_SYS_Exit();
        if (iVar2 == 0) {
          RK_LOG(4,0x17171706,"test running ok.",&DAT_0001ac4c,0xbd);
        }
      }
      else {
        RK_MPI_SYS_Exit();
        RK_LOG(2,0x17171706,"test running failed!",&DAT_0001ac4c,0xc2);
      }
    }
  }
  return iVar2;
}



/* ===== _start @ 00012f04 size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_0002d04c)
            (DAT_00012f38,param_2,&stack0x00000004,DAT_00012f3c,DAT_00012f34,param_1);
  return;
}



/* ===== FUN_00012f40 @ 00012f40 size=32 ===== */

void FUN_00012f40(void)

{
  if (DAT_00012f64 == DAT_00012f60) {
    return;
  }
  if (DAT_00012f68 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00012f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00012f68)();
  return;
}



/* ===== _FINI_0 @ 00012fa4 size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00012fe0;
  if (*DAT_00012fe0 != '\0') {
    return;
  }
  FUN_00012f40();
  if (DAT_00012fe4 != 0) {
    __deregister_frame_info(DAT_00012fe8);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00012fec size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00013010 != 0) {
    __register_frame_info(DAT_00013018,DAT_00013014);
  }
  if ((DAT_00012f9c - DAT_00012f98 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_00012fa0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00012f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00012fa0)();
  return;
}



/* ===== FUN_0001301c @ 0001301c size=64 ===== */

void FUN_0001301c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if ((param_4 & 2) == 0) {
    uVar1 = 0xb7a0;
  }
  else {
    param_1 = *param_2;
    uVar1 = 0xb784;
  }
  fprintf(stderr,(char *)(uVar1 | 0x10000),param_1,param_3);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* ===== FUN_0001305c @ 0001305c size=588 ===== */

undefined4 FUN_0001305c(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  char *local_24 [2];
  
  pfVar5 = (float *)param_2[3];
  local_24[0] = (char *)0x0;
  if (pfVar5 == (float *)0x0) goto switchD_00013090_default;
  switch(*param_2) {
  case 2:
    if ((param_3 & 1) == 0) {
      fVar6 = (float)((int)*pfVar5 + 1);
    }
    else {
      fVar6 = (float)((int)*pfVar5 - 1);
    }
    if ((int)fVar6 < 0) {
      *pfVar5 = 0.0;
      break;
    }
    goto LAB_000130cc;
  case 3:
    if ((param_3 & 1) != 0) {
      *pfVar5 = (float)((uint)*pfVar5 & ~param_2[6]);
      break;
    }
    fVar6 = (float)(param_2[6] | (uint)*pfVar5);
LAB_000130cc:
    *pfVar5 = fVar6;
    break;
  case 4:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) {
LAB_000132a4:
                    /* WARNING: Subroutine does not return */
        FUN_0001301c(*(undefined1 *)(param_2 + 1),param_2 + 2,"requires a value",param_3);
      }
      iVar4 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      *(int *)(param_1 + 0x18) = iVar4 + 4;
      fVar6 = (float)strtol(*(char **)(iVar4 + 4),local_24,0);
      *pfVar5 = fVar6;
    }
    else {
      fVar6 = (float)strtol(pcVar3,local_24,0);
      *pfVar5 = fVar6;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    iVar4 = *piVar2;
    if (iVar4 != 0) {
LAB_0001328c:
      pcVar3 = strerror(iVar4);
                    /* WARNING: Subroutine does not return */
      FUN_0001301c(*(undefined1 *)(param_2 + 1),param_2 + 2,pcVar3,param_3);
    }
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_0001301c(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects an integer value",param_3);
    }
    break;
  case 5:
    piVar2 = __errno_location();
    pcVar3 = *(char **)(param_1 + 0x24);
    *piVar2 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_000132a4;
      iVar4 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      *(int *)(param_1 + 0x18) = iVar4 + 4;
      fVar6 = strtof(*(char **)(iVar4 + 4),local_24);
      *pfVar5 = fVar6;
    }
    else {
      fVar6 = strtof(pcVar3,local_24);
      *pfVar5 = fVar6;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    iVar4 = *piVar2;
    if (iVar4 != 0) goto LAB_0001328c;
    if (*local_24[0] != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_0001301c(*(undefined1 *)(param_2 + 1),param_2 + 2,"expects a numerical value",param_3);
    }
    break;
  case 6:
    if (*(float *)(param_1 + 0x24) == 0.0) {
      if (*(int *)(param_1 + 0x14) < 2) goto LAB_000132a4;
      iVar4 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      *(int *)(param_1 + 0x18) = iVar4 + 4;
      *pfVar5 = *(float *)(iVar4 + 4);
    }
    else {
      *pfVar5 = *(float *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
switchD_00013090_default:
  if ((code *)param_2[5] == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(code *)param_2[5])(param_1,param_2);
  }
  return uVar1;
}



/* ===== argparse_init @ 000132bc size=48 ===== */

undefined4
argparse_init(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[5] = 0;
  param_1[6] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  param_1[7] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  param_1[8] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  param_1[8] = 0;
  param_1[9] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  param_1[4] = 0;
  return 0;
}



/* ===== argparse_describe @ 000132ec size=20 ===== */

undefined4 argparse_describe(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 0;
}



/* ===== argparse_usage @ 00013300 size=1052 ===== */

undefined4 argparse_usage(undefined4 *param_1)

{
  char cVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 == (undefined4 *)0x0) {
    fwrite("Usage:\n",1,7,stdout);
  }
  else {
    puVar6 = puVar8 + 1;
    fprintf(stdout,"Usage: %s\n",*puVar8);
    if ((char *)puVar8[1] != (char *)0x0) {
      cVar1 = *(char *)puVar8[1];
      while (cVar1 != '\0') {
        fprintf(stdout,"   or: %s\n");
        puVar6 = puVar6 + 1;
        if ((char *)*puVar6 == (char *)0x0) break;
        cVar1 = *(char *)*puVar6;
      }
    }
  }
  if (param_1[3] != 0) {
    fprintf(stdout,"%s\n");
  }
  if (stdout->_chain == (_IO_FILE *)0x0) {
    fputc(10,stdout);
  }
  else {
    pcVar5 = stdout->_IO_write_base;
    if (pcVar5 < stdout->_IO_buf_base) {
      stdout->_IO_write_base = pcVar5 + 1;
      *pcVar5 = '\n';
    }
    else {
      __fputc_unlocked(10);
    }
  }
  piVar7 = (int *)*param_1;
  iVar13 = *piVar7;
  if (iVar13 != 0) {
    uVar10 = 0;
    piVar11 = piVar7;
    iVar12 = iVar13;
    do {
      pcVar5 = (char *)piVar11[2];
      if ((char)piVar11[1] == '\0') {
        iVar9 = 0;
        iVar4 = 0;
        if (pcVar5 != (char *)0x0) goto LAB_000133f8;
      }
      else if (pcVar5 == (char *)0x0) {
        iVar4 = 2;
      }
      else {
        iVar9 = 4;
LAB_000133f8:
        sVar2 = strlen(pcVar5);
        iVar4 = sVar2 + iVar9 + 2;
      }
      if (((iVar12 == 4) || (iVar12 == 5)) || (iVar12 == 6)) {
        iVar4 = iVar4 + 6;
      }
      piVar11 = piVar11 + 8;
      iVar12 = *piVar11;
      uVar3 = iVar4 + 3U & 0xfffffffc;
      if (uVar10 < uVar3) {
        uVar10 = uVar3;
      }
    } while (iVar12 != 0);
    uVar10 = uVar10 + 4;
    do {
      if (iVar13 == 1) {
        if (stdout->_chain == (_IO_FILE *)0x0) {
          fputc(10,stdout);
        }
        else {
          pcVar5 = stdout->_IO_write_base;
          if (pcVar5 < stdout->_IO_buf_base) {
            stdout->_IO_write_base = pcVar5 + 1;
            *pcVar5 = '\n';
          }
          else {
            __fputc_unlocked(10,stdout);
          }
        }
        fputs((char *)piVar7[4],stdout);
        if (stdout->_chain == (_IO_FILE *)0x0) {
          fputc(10,stdout);
        }
        else {
          pcVar5 = stdout->_IO_write_base;
          if (pcVar5 < stdout->_IO_buf_base) {
            stdout->_IO_write_base = pcVar5 + 1;
            *pcVar5 = '\n';
          }
          else {
            __fputc_unlocked(10);
          }
        }
      }
      else {
        uVar3 = fprintf(stdout,"    ");
        if ((char)piVar7[1] == '\0') {
          if (piVar7[2] != 0) goto LAB_000134dc;
LAB_000134f4:
          iVar13 = *piVar7;
          if (iVar13 == 4) goto LAB_00013650;
LAB_00013500:
          if (iVar13 == 5) {
            iVar13 = fprintf(stdout,"=<flt>");
            uVar3 = uVar3 + iVar13;
          }
          else if (iVar13 == 6) {
            iVar13 = fprintf(stdout,"=<str>");
            uVar3 = uVar3 + iVar13;
          }
        }
        else {
          iVar13 = fprintf(stdout,"-%c");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] == 0) goto LAB_000134f4;
          if ((char)piVar7[1] == '\0') {
LAB_000134dc:
            iVar13 = fprintf(stdout,"--%s");
            uVar3 = uVar3 + iVar13;
            goto LAB_000134f4;
          }
          iVar13 = fprintf(stdout,", ");
          uVar3 = uVar3 + iVar13;
          if (piVar7[2] != 0) goto LAB_000134dc;
          iVar13 = *piVar7;
          if (iVar13 != 4) goto LAB_00013500;
LAB_00013650:
          iVar13 = fprintf(stdout,"=<int>");
          uVar3 = uVar3 + iVar13;
        }
        if (uVar10 < uVar3) {
          uVar3 = uVar10;
          if (stdout->_chain == (_IO_FILE *)0x0) {
            fputc(10,stdout);
          }
          else {
            pcVar5 = stdout->_IO_write_base;
            if (pcVar5 < stdout->_IO_buf_base) {
              stdout->_IO_write_base = pcVar5 + 1;
              *pcVar5 = '\n';
            }
            else {
              __fputc_unlocked(10);
            }
          }
        }
        else {
          uVar3 = uVar10 - uVar3;
        }
        fprintf(stdout,"%*s%s\n",uVar3 + 2,"",piVar7[4]);
      }
      piVar7 = piVar7 + 8;
      iVar13 = *piVar7;
    } while (iVar13 != 0);
  }
  if (param_1[4] != 0) {
    fprintf(stdout,"%s\n");
  }
  return 0;
}



/* ===== argparse_parse @ 0001371c size=892 ===== */

void argparse_parse(int *param_1,int param_2,int param_3)

{
  char cVar1;
  void *__dest;
  size_t __n;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  char cVar8;
  undefined4 *__src;
  uint *puVar9;
  char *pcVar10;
  int *piVar11;
  char *__s;
  char *__s1;
  
  __src = (undefined4 *)(param_3 + 4);
  puVar9 = (uint *)*param_1;
  param_2 = param_2 + -1;
  param_1[7] = param_3;
  param_1[6] = (int)__src;
  uVar4 = *puVar9;
  param_1[5] = param_2;
  if (uVar4 != 0) {
    do {
      while (6 < uVar4) {
        fprintf(stderr,"wrong option type: %d");
        puVar9 = puVar9 + 8;
        uVar4 = *puVar9;
        if (uVar4 == 0) goto LAB_0001377c;
      }
      puVar9 = puVar9 + 8;
      uVar4 = *puVar9;
    } while (uVar4 != 0);
LAB_0001377c:
    param_2 = param_1[5];
    __src = (undefined4 *)param_1[6];
  }
joined_r0x00013788:
  if (param_2 == 0) {
    __dest = (void *)(param_1[7] + param_1[8] * 4);
  }
  else {
    pcVar10 = (char *)*__src;
    if ((*pcVar10 == '-') && (pcVar10[1] != '\0')) {
      if (pcVar10[1] != '-') {
        piVar11 = (int *)*param_1;
        param_1[9] = (int)(pcVar10 + 1);
        if (*piVar11 != 0) {
          cVar1 = (char)piVar11[1];
          while (cVar1 != pcVar10[1]) {
            if (piVar11[8] == 0) goto LAB_00013940;
            cVar1 = (char)piVar11[9];
            piVar11 = piVar11 + 8;
          }
          if (pcVar10[2] == '\0') {
            pcVar10 = (char *)0x0;
          }
          else {
            pcVar10 = pcVar10 + 2;
          }
          param_1[9] = (int)pcVar10;
          while (iVar5 = FUN_0001305c(param_1,piVar11,0), iVar5 != -2) {
            while( true ) {
              pcVar10 = (char *)param_1[9];
              if (pcVar10 == (char *)0x0) {
                __src = (undefined4 *)param_1[6];
                goto LAB_000138cc;
              }
              piVar11 = (int *)*param_1;
              if (*piVar11 == 0) goto LAB_00013a38;
              cVar1 = (char)piVar11[1];
              while (cVar1 != *pcVar10) {
                if (piVar11[8] == 0) goto LAB_00013a38;
                cVar1 = (char)piVar11[9];
                piVar11 = piVar11 + 8;
              }
              if (pcVar10[1] != '\0') break;
              param_1[9] = 0;
              iVar5 = FUN_0001305c(param_1);
              if (iVar5 == -2) goto LAB_00013a38;
            }
            param_1[9] = (int)(pcVar10 + 1);
          }
LAB_00013a38:
          pcVar10 = *(char **)param_1[6];
          goto LAB_00013944;
        }
        goto LAB_00013940;
      }
      cVar1 = pcVar10[2];
      if (cVar1 != '\0') {
        piVar11 = (int *)*param_1;
        iVar5 = *piVar11;
        if (iVar5 != 0) {
          __s1 = pcVar10 + 2;
          do {
            __s = (char *)piVar11[2];
            if (__s != (char *)0x0) {
              __n = strlen(__s);
              iVar2 = strncmp(__s1,__s,__n);
              if ((iVar2 == 0) && (pcVar3 = __s1 + __n, pcVar3 != (char *)0x0)) {
                uVar6 = 2;
LAB_00013898:
                if (*pcVar3 == '\0') goto LAB_000138b4;
                if (*pcVar3 == '=') goto code_r0x000138ac;
              }
              else if (((piVar11[7] & 1U) == 0) && ((iVar5 - 2U < 2 && (cVar1 == 'n')))) {
                cVar8 = 'o';
                pcVar3 = DAT_00013a98;
                pcVar7 = __s1;
                do {
                  pcVar7 = pcVar7 + 1;
                  if (*pcVar7 != cVar8) goto LAB_000138ec;
                  pcVar3 = pcVar3 + 1;
                  cVar8 = *pcVar3;
                } while (cVar8 != '\0');
                iVar5 = strncmp(pcVar10 + 5,__s,__n);
                if ((iVar5 == 0) && (pcVar3 = pcVar10 + 5 + __n, pcVar3 != (char *)0x0)) {
                  uVar6 = 3;
                  goto LAB_00013898;
                }
              }
            }
LAB_000138ec:
            piVar11 = piVar11 + 8;
            iVar5 = *piVar11;
            if (iVar5 == 0) break;
          } while( true );
        }
        goto LAB_00013944;
      }
      param_2 = param_2 + -1;
      __src = __src + 1;
      param_1[5] = param_2;
      param_1[6] = (int)__src;
      __dest = (void *)(param_1[7] + param_1[8] * 4);
    }
    else {
      iVar5 = param_1[8];
      __dest = (void *)(param_1[7] + iVar5 * 4);
      if ((param_1[2] & 1U) == 0) {
        param_1[8] = iVar5 + 1;
        *(char **)(param_1[7] + iVar5 * 4) = pcVar10;
        goto LAB_000137c0;
      }
    }
  }
  memmove(__dest,__src,param_2 << 2);
  *(undefined4 *)(param_1[7] + (param_1[8] + param_1[5]) * 4) = 0;
  return;
code_r0x000138ac:
  param_1[9] = (int)(pcVar3 + 1);
LAB_000138b4:
  iVar5 = FUN_0001305c(param_1,piVar11,uVar6);
  __src = (undefined4 *)param_1[6];
  if (iVar5 == -2) {
LAB_00013940:
    pcVar10 = (char *)*__src;
LAB_00013944:
    fprintf(stderr,"error: unknown option `%s`\n",pcVar10);
    argparse_usage(param_1);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
LAB_000138cc:
  param_2 = param_1[5];
LAB_000137c0:
  param_2 = param_2 + -1;
  __src = __src + 1;
  param_1[5] = param_2;
  param_1[6] = (int)__src;
  goto joined_r0x00013788;
}



/* ===== argparse_help_cb @ 00013a9c size=16 ===== */

void argparse_help_cb(void)

{
  argparse_usage();
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* ===== TEST_VPSS_ModTest @ 00013aac size=296 ===== */

undefined4 TEST_VPSS_ModTest(void *param_1)

{
  undefined1 *__dest;
  int iVar1;
  pthread_t *ppVar2;
  undefined4 uVar3;
  void *local_8824;
  pthread_t apStack_8820 [256];
  undefined1 auStack_8420 [33792];
  
  ppVar2 = apStack_8820;
  if (0 < *(int *)((int)param_1 + 0x10)) {
    iVar1 = 0;
    __dest = auStack_8420;
    do {
      iVar1 = iVar1 + 1;
      memcpy(__dest,param_1,0x84);
      pthread_create(ppVar2,(pthread_attr_t *)0x0,FUN_000140d0,__dest);
      ppVar2 = ppVar2 + 1;
      *(int *)((int)param_1 + 0x7c) = *(int *)((int)param_1 + 0x7c) + 1;
      __dest = __dest + 0x84;
    } while (iVar1 < *(int *)((int)param_1 + 0x10));
    if (0 < *(int *)((int)param_1 + 0x10)) {
      iVar1 = 0;
      uVar3 = 0;
      ppVar2 = apStack_8820;
      do {
        while( true ) {
          local_8824 = (void *)0x0;
          pthread_join(*ppVar2,&local_8824);
          iVar1 = iVar1 + 1;
          if (local_8824 == (void *)0x0) break;
          ppVar2 = ppVar2 + 1;
          if (*(int *)((int)param_1 + 0x10) <= iVar1) {
            return uVar3;
          }
        }
        RK_LOG(2,0x17171700,"Has error test.","TEST_VPSS_ModTest",0xa0);
        uVar3 = 0xffffffff;
        ppVar2 = ppVar2 + 1;
      } while (iVar1 < *(int *)((int)param_1 + 0x10));
      return 0xffffffff;
    }
  }
  return 0;
}



/* ===== TEST_VPSS_ModInit @ 00013bd8 size=876 ===== */

int TEST_VPSS_ModInit(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_1b4 [3];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_178;
  int local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_fc;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_2c;
  
  local_18c = 0;
  memset(&local_158,0,0x130);
  local_190 = *(undefined4 *)(param_1 + 0x3c);
  local_180 = *(undefined4 *)(param_1 + 0x38);
  local_140 = *(undefined4 *)(param_1 + 0x48);
  local_198 = 0x100000001000;
  local_188 = *(undefined8 *)(param_1 + 0x74);
  local_148 = *(undefined4 *)(param_1 + 0x4c);
  local_158 = *(undefined4 *)(param_1 + 100);
  local_13c = *(undefined4 *)(param_1 + 0x6c);
  uStack_138 = *(undefined4 *)(param_1 + 0x70);
  local_154 = *(undefined4 *)(param_1 + 0x40);
  local_150 = *(undefined4 *)(param_1 + 0x44);
  local_12c = *(undefined4 *)(param_1 + 0x68);
  local_130 = *(undefined4 *)(param_1 + 0x5c);
  local_134 = *(undefined4 *)(param_1 + 0x58);
  local_110 = 1;
  local_c4 = 1;
  local_78 = 1;
  local_2c = 1;
  local_10c = local_158;
  local_108 = local_154;
  local_104 = local_150;
  local_fc = local_148;
  local_f4 = local_140;
  local_f0 = local_13c;
  uStack_ec = uStack_138;
  local_e8 = local_134;
  local_e4 = local_130;
  local_e0 = local_12c;
  local_c0 = local_158;
  local_bc = local_154;
  local_b8 = local_150;
  local_b0 = local_148;
  local_a8 = local_140;
  local_a4 = local_13c;
  uStack_a0 = uStack_138;
  local_9c = local_134;
  local_98 = local_130;
  local_94 = local_12c;
  local_74 = local_158;
  local_70 = local_154;
  local_6c = local_150;
  local_64 = local_148;
  local_5c = local_140;
  local_58 = local_13c;
  uStack_54 = uStack_138;
  local_50 = local_134;
  local_4c = local_130;
  local_48 = local_12c;
  iVar2 = TEST_VPSS_Start(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x14),&local_198
                          ,&local_158);
  if (iVar2 == 0) {
    iVar2 = RK_MPI_VPSS_SetVProcDev(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0xc));
    if (iVar2 != 0) {
      RK_LOG(2,0x17171700,"RK_MPI_VPSS_SetVProcDev(grp:%d) failed with %#x!","TEST_VPSS_ModInit",
             0xce,*(undefined4 *)(param_1 + 0x7c),iVar2);
      return iVar2;
    }
    iVar2 = TEST_VPSS_GrpSetZoom
                      (*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x20),
                       *(undefined4 *)(param_1 + 0x18));
    uVar1 = DAT_00013f48;
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 0x14) < 1) {
        return 0;
      }
      iVar3 = 0;
      do {
        iVar2 = TEST_VPSS_ChnSetZoom
                          (*(undefined4 *)(param_1 + 0x7c),iVar3,*(undefined4 *)(param_1 + 0x24),
                           *(undefined4 *)(param_1 + 0x1c));
        if (((iVar2 != 0) ||
            (iVar2 = TEST_VPSS_SetChnRotation
                               (*(undefined4 *)(param_1 + 0x7c),iVar3,
                                *(undefined4 *)(param_1 + 0x50)), iVar2 != 0)) ||
           (iVar2 = TEST_VPSS_SetChnRotationEx
                              (*(undefined4 *)(param_1 + 0x7c),iVar3,*(undefined4 *)(param_1 + 0x54)
                              ), iVar2 != 0)) break;
        if (*(int *)(param_1 + 0x60) != 0) {
          local_1a0 = vrev(*(undefined8 *)(param_1 + 0x38),4);
          local_1a8 = *(undefined8 *)(param_1 + 0x28);
          iVar2 = RK_MPI_CAL_VGS_GetPicBufferSize(&local_1a8,local_1b4);
          if (iVar2 != 0) {
            RK_LOG(2,0x17171700,"get picture buffer size failed. err 0x%x","TEST_VPSS_CreatePool",
                   0x51,iVar2);
            iVar2 = -1;
            *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
            break;
          }
          local_170 = uVar1;
          local_168 = 0;
          local_178 = local_1b4[0];
          local_160 = 1;
          local_174 = iVar2;
          uStack_164 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_15c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          iVar2 = RK_MPI_MB_CreatePool(&local_178);
          *(int *)(param_1 + 0x80) = iVar2;
          if ((iVar2 == -1) ||
             (iVar2 = RK_MPI_VPSS_AttachMbPool(*(undefined4 *)(param_1 + 0x7c),iVar3,iVar2),
             iVar2 != 0)) break;
        }
        iVar3 = iVar3 + 1;
        if (*(int *)(param_1 + 0x14) <= iVar3) {
          return 0;
        }
      } while( true );
    }
  }
  iVar4 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x60);
  if (0 < iVar4) {
    iVar6 = 0;
    do {
      if (iVar3 == 0) {
        do {
          if (iVar4 <= iVar6 + 1) {
            return iVar2;
          }
          iVar6 = iVar6 + 2;
        } while (iVar6 < iVar4);
        return iVar2;
      }
      iVar5 = iVar6 + 1;
      iVar2 = RK_MPI_VPSS_DetachMbPool(*(undefined4 *)(param_1 + 0x7c),iVar6);
      iVar4 = *(int *)(param_1 + 0x14);
      iVar3 = *(int *)(param_1 + 0x60);
      iVar6 = iVar5;
    } while (iVar5 < iVar4);
  }
  if (iVar3 == 0) {
    return iVar2;
  }
  RK_MPI_MB_DestroyPool(*(undefined4 *)(param_1 + 0x80));
  return iVar2;
}



/* ===== TEST_VPSS_ModDeInit @ 00013f50 size=144 ===== */

undefined4 TEST_VPSS_ModDeInit(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = *(int *)(param_1 + 0x14);
  uVar1 = *(undefined4 *)(param_1 + 0x7c);
  if (iVar2 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    iVar3 = *(int *)(param_1 + 0x60);
    iVar4 = 0;
    while (iVar3 != 0) {
      uVar5 = RK_MPI_VPSS_DetachMbPool(uVar1,iVar4);
      iVar2 = *(int *)(param_1 + 0x14);
      uVar1 = *(undefined4 *)(param_1 + 0x7c);
      if (iVar2 <= iVar4 + 1) goto LAB_00013f88;
      iVar4 = iVar4 + 1;
      iVar3 = *(int *)(param_1 + 0x60);
    }
    do {
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
LAB_00013f88:
  TEST_VPSS_Stop();
  if (*(int *)(param_1 + 0x60) == 0) {
    return uVar5;
  }
  RK_MPI_MB_DestroyPool(*(undefined4 *)(param_1 + 0x80));
  return uVar5;
}



/* ===== TEST_VPSS_ModSendFrame @ 00013fe0 size=240 ===== */

int TEST_VPSS_ModSendFrame(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68 [21];
  
  memset(local_68,0,0x50);
  local_70 = vrev(*(undefined8 *)(param_1 + 0xe),4);
  local_78 = *(undefined8 *)(param_1 + 10);
  iVar1 = TEST_SYS_CreateVideoFrame(&local_78,local_68);
  if (iVar1 == 0) {
    if (*param_1 == 0) {
      uVar2 = RK_MPI_MB_Handle2VirAddr(local_68[0]);
      iVar4 = param_1[10];
      iVar1 = param_1[0xb];
      uVar3 = RK_MPI_CAL_COMM_GetHorStride(param_1[0xc],param_1[0xf]);
      iVar1 = TEST_COMM_FillImage(uVar2,iVar4,iVar1,uVar3,param_1[0xd],param_1[0xf],1);
    }
    else {
      iVar1 = TEST_COMM_FileReadOneFrame(*param_1,local_68);
    }
    if (iVar1 == 0) {
      RK_MPI_SYS_MmzFlushCache(local_68[0],0);
      iVar1 = RK_MPI_VPSS_SendFrame(param_1[0x1f],0,local_68,0xffffffff);
    }
  }
  RK_MPI_MB_ReleaseMB(local_68[0]);
  return iVar1;
}



/* ===== FUN_000140d0 @ 000140d0 size=556 ===== */

int FUN_000140d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 auStack_230 [80];
  char acStack_1e0 [128];
  undefined1 auStack_160 [320];
  
  memset(acStack_1e0,0,0x80);
  memset(auStack_160,0,0x140);
  memset(auStack_230,0,0x50);
  iVar1 = TEST_VPSS_ModInit(param_1);
  if (iVar1 == 0) {
    iVar1 = param_1;
    if (*(int *)(param_1 + 8) < 1) {
      iVar5 = *(int *)(param_1 + 0x14);
    }
    else {
      iVar7 = 0;
      do {
        iVar2 = TEST_VPSS_ModSendFrame(param_1);
        iVar5 = *(int *)(param_1 + 0x14);
        if (iVar2 != 0) goto LAB_00014210;
        if (0 < iVar5) {
          puVar6 = auStack_160;
          iVar2 = 0;
          puVar8 = puVar6;
          do {
            iVar3 = RK_MPI_VPSS_GetChnFrame(*(undefined4 *)(param_1 + 0x7c),iVar2,puVar8,200);
            iVar2 = iVar2 + 1;
            puVar8 = puVar8 + 0x50;
            iVar5 = *(int *)(param_1 + 0x14);
            if (iVar3 != 0) break;
          } while (iVar2 < iVar5);
          iVar2 = 0;
          if (0 < iVar5) {
            do {
              uVar4 = *(undefined4 *)(param_1 + 0x7c);
              if (*(int *)(param_1 + 4) != 0) {
                snprintf(acStack_1e0,0x80,"%schn_out_%dx%d_%d_%d.bin",*(int *)(param_1 + 4),
                         *(undefined4 *)(puVar6 + 0xc),*(undefined4 *)(puVar6 + 0x10),uVar4,iVar2);
                iVar5 = TEST_COMM_FileWriteOneFrame(acStack_1e0,puVar6);
                if (iVar5 != 0) goto LAB_00014284;
                uVar4 = *(undefined4 *)(param_1 + 0x7c);
              }
              iVar3 = iVar2 + 1;
              iVar2 = RK_MPI_VPSS_ReleaseChnFrame(uVar4,iVar2,puVar6);
              puVar6 = puVar6 + 0x50;
              iVar5 = *(int *)(param_1 + 0x14);
              if (iVar2 != 0) goto LAB_00014210;
              iVar2 = iVar3;
            } while (iVar3 < iVar5);
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 8));
    }
  }
  else {
LAB_00014284:
    iVar5 = *(int *)(param_1 + 0x14);
LAB_00014210:
    iVar1 = 0;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  if (0 < iVar5) {
    iVar2 = *(int *)(param_1 + 0x60);
    iVar7 = 0;
    while (iVar2 != 0) {
      RK_MPI_VPSS_DetachMbPool(uVar4,iVar7);
      iVar5 = *(int *)(param_1 + 0x14);
      uVar4 = *(undefined4 *)(param_1 + 0x7c);
      if (iVar5 <= iVar7 + 1) goto LAB_0001423c;
      iVar7 = iVar7 + 1;
      iVar2 = *(int *)(param_1 + 0x60);
    }
    do {
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
LAB_0001423c:
  TEST_VPSS_Stop();
  if (*(int *)(param_1 + 0x60) != 0) {
    RK_MPI_MB_DestroyPool(*(undefined4 *)(param_1 + 0x80));
  }
  if (iVar1 == 0) {
    RK_LOG(2,0x17171700,"single vpss test %d running failed.","TEST_VPSS_ModSingleTest",0x8c,
           *(undefined4 *)(param_1 + 0x7c));
    return 0;
  }
  return iVar1;
}



/* ===== TEST_VPSS_UnitTest @ 000142fc size=236 ===== */

int TEST_VPSS_UnitTest(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = TEST_VPSS_ModInit();
  if (iVar1 == 0) {
    iVar1 = TEST_VPSS_ModSendFrame(param_1);
    iVar3 = *(int *)(param_1 + 0x14);
    uVar2 = *(undefined4 *)(param_1 + 0x7c);
    if (iVar1 == 0) {
      if (iVar3 < 1) goto LAB_00014340;
      iVar5 = 0;
      do {
        iVar4 = iVar5 + 1;
        iVar5 = RK_MPI_VPSS_GetChnFrame(uVar2,iVar5,param_2,200);
        param_2 = param_2 + 0x50;
        iVar3 = *(int *)(param_1 + 0x14);
        uVar2 = *(undefined4 *)(param_1 + 0x7c);
        if (iVar5 != 0) goto LAB_0001431c;
        iVar5 = iVar4;
      } while (iVar4 < iVar3);
      iVar1 = 0;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x14);
    uVar2 = *(undefined4 *)(param_1 + 0x7c);
  }
LAB_0001431c:
  if (0 < iVar3) {
    iVar4 = *(int *)(param_1 + 0x60);
    iVar5 = 0;
    while (iVar4 != 0) {
      RK_MPI_VPSS_DetachMbPool(uVar2,iVar5);
      iVar3 = *(int *)(param_1 + 0x14);
      uVar2 = *(undefined4 *)(param_1 + 0x7c);
      if (iVar3 <= iVar5 + 1) goto LAB_00014340;
      iVar5 = iVar5 + 1;
      iVar4 = *(int *)(param_1 + 0x60);
    }
    do {
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
LAB_00014340:
  TEST_VPSS_Stop();
  if (*(int *)(param_1 + 0x60) == 0) {
    return iVar1;
  }
  RK_MPI_MB_DestroyPool(*(undefined4 *)(param_1 + 0x80));
  return iVar1;
}



/* ===== TEST_VPSS_ModGetGrpFrame @ 000143e8 size=28 ===== */

void TEST_VPSS_ModGetGrpFrame(int param_1,undefined4 param_2)

{
  (*(code *)PTR_RK_MPI_VPSS_GetGrpFrame_0002d060)(*(undefined4 *)(param_1 + 0x7c),0,param_2);
  return;
}



/* ===== TEST_VPSS_ModGetChnFrame @ 000143f8 size=96 ===== */

undefined4 TEST_VPSS_ModGetChnFrame(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x14) < 1) {
    return 0;
  }
  iVar2 = 0;
  do {
    iVar1 = RK_MPI_VPSS_GetChnFrame(*(undefined4 *)(param_1 + 0x7c),iVar2,param_2,200);
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 0x50;
    if (iVar1 != 0) {
      return 0;
    }
  } while (iVar2 < *(int *)(param_1 + 0x14));
  return 0;
}



/* ===== TEST_COMM_GetNowUs @ 00014458 size=72 ===== */

longlong TEST_COMM_GetNowUs(void)

{
  longlong lVar1;
  timespec local_10;
  
  local_10.tv_sec = 0;
  local_10.tv_nsec = 0;
  clock_gettime(1,&local_10);
  lVar1 = __aeabi_uldivmod(local_10.tv_nsec,local_10.tv_nsec >> 0x1f,1000,0);
  return (longlong)local_10.tv_sec * 1000000 + lVar1;
}



/* ===== TEST_COMM_GetUriSchemeType @ 000144a0 size=924 ===== */

undefined4 TEST_COMM_GetUriSchemeType(char *param_1)

{
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  if ((param_1 == (char *)0x0) || (sVar1 = strlen(param_1), sVar1 < 4)) {
    return 1;
  }
  iVar2 = strncmp("http://",param_1,7);
  if ((iVar2 == 0) || (iVar2 = strncmp("https://",param_1,8), iVar2 == 0)) {
    uVar4 = 2;
  }
  else {
    iVar2 = strncmp("rtsp://",param_1,7);
    if ((iVar2 == 0) || (iVar2 = strncmp("rtmp://",param_1,7), iVar2 == 0)) {
      RK_LOG(5,0x17171700,"uri is with rtsp or rtmp scheme type","TEST_COMM_GetUriSchemeType",0x34);
      return 3;
    }
    iVar2 = strncmp("/data/smb/",param_1,10);
    if (iVar2 == 0) {
      RK_LOG(5,0x17171700,"uri is with /data/smb scheme type","TEST_COMM_GetUriSchemeType",0x37);
      uVar4 = 4;
    }
    else {
      iVar2 = strncmp("/data/nfs/",param_1,10);
      if (iVar2 == 0) {
        RK_LOG(5,0x17171700,"uri is with /data/nfs schemeType (signed as samba)",
               "TEST_COMM_GetUriSchemeType",0x3a);
        uVar4 = 4;
      }
      else {
        pcVar3 = strstr(param_1,"m3u8");
        if (pcVar3 == (char *)0x0) {
          iVar2 = strncmp("rtp:",param_1,4);
          if (iVar2 == 0) {
            RK_LOG(5,0x17171700,"uri is with rtp scheme type","TEST_COMM_GetUriSchemeType",0x40);
            uVar4 = 6;
          }
          else {
            iVar2 = strncmp("udp:",param_1,4);
            if (iVar2 == 0) {
              RK_LOG(5,0x17171700,"uri is with udp scheme type","TEST_COMM_GetUriSchemeType",0x43);
              uVar4 = 7;
            }
            else {
              iVar2 = strncmp("mms://",param_1,6);
              if (iVar2 == 0) {
                RK_LOG(5,0x17171700,"uri is with mms scheme type","TEST_COMM_GetUriSchemeType",0x46)
                ;
                uVar4 = 8;
              }
              else {
                iVar2 = strncmp("mmsh://",param_1,7);
                if (iVar2 == 0) {
                  RK_LOG(5,0x17171700,"uri is with mmsh scheme type","TEST_COMM_GetUriSchemeType",
                         0x49);
                  uVar4 = 9;
                }
                else {
                  iVar2 = strncmp("mmst://",param_1,7);
                  if (iVar2 == 0) {
                    RK_LOG(5,0x17171700,"uri is with mmst scheme type","TEST_COMM_GetUriSchemeType",
                           0x4c);
                    uVar4 = 10;
                  }
                  else {
                    pcVar3 = strstr(param_1,"app_tts-cache");
                    if (pcVar3 == (char *)0x0) {
                      pcVar3 = strstr(param_1,"cache://");
                      if (pcVar3 == (char *)0x0) {
                        uVar4 = 1;
                      }
                      else {
                        uVar4 = 0xc;
                      }
                    }
                    else {
                      RK_LOG(5,0x17171700,"uri is with tts scheme type","TEST_COMM_GetUriSchemeType"
                             ,0x4f);
                      uVar4 = 0xb;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          RK_LOG(5,0x17171700,"uri is with m3u8 scheme type","TEST_COMM_GetUriSchemeType",0x3d);
          uVar4 = 5;
        }
      }
    }
  }
  return uVar4;
}



/* ===== TEST_COMM_OpenFileUris @ 0001483c size=540 ===== */

undefined4 TEST_COMM_OpenFileUris(char *param_1,int param_2,uint param_3)

{
  FILE *__stream;
  __ssize_t _Var1;
  size_t __maxlen;
  char *__s;
  size_t sVar2;
  void *__dest;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  char *__dest_00;
  undefined4 *puVar6;
  uint local_48;
  char *local_30;
  size_t local_2c [2];
  
  local_30 = (char *)0x0;
  local_2c[0] = 0;
  __stream = fopen64(param_1,"r");
  if (__stream == (FILE *)0x0) {
    piVar4 = __errno_location();
    pcVar5 = strerror(*piVar4);
    RK_LOG(2,0x17171700,"Error! opening file %s error is %s","TEST_COMM_OpenFileUris",99,param_1,
           pcVar5);
    uVar3 = 0xffffffff;
  }
  else {
    fseek(__stream,0,2);
    puVar6 = (undefined4 *)(param_2 + -4);
    ftell(__stream);
    fseek(__stream,0,0);
    local_48 = 0;
    do {
      _Var1 = getline(&local_30,local_2c,__stream);
      pcVar5 = local_30;
      if (_Var1 == -1) break;
      __maxlen = strlen(local_30);
      __s = malloc(__maxlen + 1);
      snprintf(__s,__maxlen,"%s",pcVar5);
      pcVar5 = local_30;
      if (__maxlen != 0) {
        __dest_00 = __s + __maxlen;
        do {
          while (*__dest_00 != '\r') {
            __maxlen = __maxlen - 1;
            __dest_00 = __dest_00 + -1;
            if (__maxlen == 0) goto LAB_000149b0;
          }
          sVar2 = strlen(pcVar5);
          __dest = malloc((1 - __maxlen) + sVar2);
          memcpy(__dest,__s + __maxlen + 1,sVar2 - __maxlen);
          memcpy(__dest_00,__dest,sVar2 - __maxlen);
          free(__dest);
          __maxlen = __maxlen - 1;
          __dest_00 = __dest_00 + -1;
        } while (__maxlen != 0);
      }
LAB_000149b0:
      puVar6 = puVar6 + 1;
      *puVar6 = __s;
      free(pcVar5);
      local_48 = local_48 + 1;
      local_2c[0] = 0;
      RK_LOG(6,0x17171700,"url %s","TEST_COMM_OpenFileUris",0x7b,*puVar6);
    } while (local_48 < param_3);
    fclose(__stream);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== TEST_COMM_CloseFileUris @ 00014a58 size=56 ===== */

void TEST_COMM_CloseFileUris(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = param_1;
  do {
    puVar2 = puVar1 + 1;
    if ((void *)*puVar1 != (void *)0x0) {
      free((void *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar2;
  } while (puVar2 != param_1 + param_2);
  return;
}



/* ===== TEST_COMM_FileReadOneFrame @ 00014a90 size=372 ===== */

int TEST_COMM_FileReadOneFrame(char *param_1,undefined4 *param_2)

{
  int iVar1;
  FILE *__stream;
  void *__ptr;
  size_t sVar2;
  int *piVar3;
  char *pcVar4;
  size_t local_34 [3];
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_2 == (undefined4 *)0x0 || param_1 == (char *)0x0) {
    iVar1 = -1;
  }
  else {
    local_20 = *(undefined8 *)(param_2 + 7);
    local_28 = *(undefined8 *)(param_2 + 3);
    VectorTranspose(local_20,4);
    iVar1 = RK_MPI_CAL_VGS_GetPicBufferSize(&local_28,local_34);
    if (iVar1 != 0) {
      RK_LOG(2,0x17171700,"RK_MPI_CAL_VGS_GetPicBufferSize failed. err=0x%x",
             "TEST_COMM_FileReadOneFrame",0xa3,iVar1);
      return iVar1;
    }
    __stream = fopen64(param_1,"rb");
    if (__stream == (FILE *)0x0) {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      RK_LOG(2,0x17171700,"fopen %s failed, error: %s","TEST_COMM_FileReadOneFrame",0xa9,param_1,
             pcVar4);
      return -1;
    }
    __ptr = (void *)RK_MPI_MB_Handle2VirAddr(*param_2);
    sVar2 = fread(__ptr,1,local_34[0],__stream);
    if (sVar2 == 0) {
      RK_LOG(2,0x17171700,"fread %p failed! request %d","TEST_COMM_FileReadOneFrame",0xb0,param_1,
             local_34[0]);
      iVar1 = -1;
    }
    else {
      RK_MPI_SYS_MmzFlushCache(*param_2,0);
      iVar1 = 0;
    }
    fclose(__stream);
  }
  return iVar1;
}



/* ===== TEST_COMM_FileWriteOneFrame @ 00014c04 size=308 ===== */

int TEST_COMM_FileWriteOneFrame(char *param_1,undefined4 *param_2)

{
  int iVar1;
  FILE *__s;
  void *__ptr;
  int *piVar2;
  char *pcVar3;
  size_t local_34 [3];
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_2 == (undefined4 *)0x0 || param_1 == (char *)0x0) {
    iVar1 = -1;
  }
  else {
    local_20 = *(undefined8 *)(param_2 + 7);
    local_28 = *(undefined8 *)(param_2 + 3);
    VectorTranspose(local_20,4);
    iVar1 = RK_MPI_CAL_VGS_GetPicBufferSize(&local_28,local_34);
    if (iVar1 != 0) {
      RK_LOG(2,0x17171700,"RK_MPI_CAL_VGS_GetPicBufferSize failed. err=0x%x",
             "TEST_COMM_FileWriteOneFrame",0xcf,iVar1);
      return iVar1;
    }
    RK_MPI_SYS_MmzFlushCache(*param_2,1);
    __s = fopen64(param_1,"wb");
    if (__s == (FILE *)0x0) {
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      RK_LOG(2,0x17171700,"open %s failed, error: %s","TEST_COMM_FileWriteOneFrame",0xd7,param_1,
             pcVar3);
      return 0;
    }
    __ptr = (void *)RK_MPI_MB_Handle2VirAddr(*param_2);
    fwrite(__ptr,1,local_34[0],__s);
    fflush(__s);
    fclose(__s);
    iVar1 = 0;
  }
  return iVar1;
}



/* ===== TEST_COMM_MkDirs @ 00014d38 size=184 ===== */

void TEST_COMM_MkDirs(char *param_1,__mode_t param_2)

{
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  char local_218 [512];
  char *pcVar4;
  
  strncpy(local_218,param_1,0x200);
  sVar1 = strlen(local_218);
  if (sVar1 != 0) {
    pcVar4 = local_218;
    do {
      while (pcVar3 = pcVar4 + 1, *pcVar4 == '/') {
        *pcVar4 = '\0';
        iVar2 = access(local_218,0);
        if (iVar2 != 0) {
          mkdir(local_218,param_2);
        }
        *pcVar4 = '/';
        pcVar4 = pcVar3;
        if (pcVar3 == local_218 + sVar1) goto LAB_00014db0;
      }
      pcVar4 = pcVar3;
    } while (pcVar3 != local_218 + sVar1);
LAB_00014db0:
    iVar2 = access(local_218,0);
    if (iVar2 != 0) {
      mkdir(local_218,param_2);
      return;
    }
  }
  return;
}



/* ===== TEST_COMM_CheckFileSizeInRange @ 00014df0 size=284 ===== */

undefined4 TEST_COMM_CheckFileSizeInRange(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  stat64 sStack_80;
  
  iVar1 = access(param_1,0);
  if (iVar1 == 0) {
    iVar1 = stat64(param_1,&sStack_80);
    if (iVar1 == 0) {
      iVar1 = (int)param_2 >> 0x1f;
      if (((int)(sStack_80.st_size._4_4_ - (iVar1 + (uint)((uint)sStack_80.st_size < param_2))) < 0
           != (SBORROW4(sStack_80.st_size._4_4_,iVar1) !=
              SBORROW4(sStack_80.st_size._4_4_ - iVar1,(uint)((uint)sStack_80.st_size < param_2))))
         || (iVar1 = (int)param_3 >> 0x1f, uVar2 = 0,
            (int)(iVar1 - (sStack_80.st_size._4_4_ + (uint)(param_3 < (uint)sStack_80.st_size))) < 0
            != (SBORROW4(iVar1,sStack_80.st_size._4_4_) !=
               SBORROW4(iVar1 - sStack_80.st_size._4_4_,(uint)(param_3 < (uint)sStack_80.st_size))))
         ) {
        RK_LOG(2,0x17171700,"file %s size:%lld is out range[%d,%d]!",
               "TEST_COMM_CheckFileSizeInRange",0x10d,param_1,(uint)sStack_80.st_size,
               sStack_80.st_size._4_4_,param_2,param_3);
        uVar2 = 0xffffffff;
      }
    }
    else {
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      RK_LOG(2,0x17171700,"can\'t determine size of %s: %s!","TEST_COMM_CheckFileSizeInRange",0x111,
             param_1,pcVar4);
      uVar2 = 0xffffffff;
    }
  }
  else {
    RK_LOG(2,0x17171700,"can\'t find file %s!","TEST_COMM_CheckFileSizeInRange",0x104,param_1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_COMM_GetSocType @ 00014f0c size=540 ===== */

int TEST_COMM_GetSocType(void)

{
  FILE *__stream;
  char *pcVar1;
  int iVar2;
  char local_418 [1028];
  
  local_418[0] = '\0';
  local_418[1] = '\0';
  local_418[2] = '\0';
  local_418[3] = '\0';
  memset(local_418 + 4,0,0x3fc);
  if (DAT_0002d1d0 != 0) {
    return DAT_0002d1d0;
  }
  __stream = fopen64("/proc/device-tree/compatible","r");
  memset(local_418,0,0x400);
  if (__stream == (FILE *)0x0) {
    iVar2 = 1;
    RK_LOG(2,0x17171700,"open failed.","TEST_COMM_GetSocType",0x130);
    goto LAB_00014fd8;
  }
  fread(local_418,1,0x400,__stream);
  pcVar1 = strstr(local_418,"rockchip");
  if (((pcVar1 == (char *)0x0) && (pcVar1 = strstr(local_418,"Rockchip"), pcVar1 == (char *)0x0)) &&
     (pcVar1 = strstr(local_418,"RK30board"), pcVar1 == (char *)0x0)) {
    iVar2 = 1;
    RK_LOG(2,0x17171700,"not match rockchips device.","TEST_COMM_GetSocType",300);
  }
  else {
    pcVar1 = strstr(local_418,"1126");
    if ((pcVar1 == (char *)0x0) && (pcVar1 = strstr(local_418,"1109"), pcVar1 == (char *)0x0)) {
      pcVar1 = strstr(local_418,"3566");
      if ((pcVar1 == (char *)0x0) && (pcVar1 = strstr(local_418,"3568"), pcVar1 == (char *)0x0)) {
        pcVar1 = strstr(local_418,"3588");
        if (pcVar1 == (char *)0x0) goto LAB_00014fc8;
        iVar2 = 3;
      }
      else {
        iVar2 = 2;
      }
    }
    else {
LAB_00014fc8:
      iVar2 = 1;
    }
  }
  fclose(__stream);
LAB_00014fd8:
  DAT_0002d1d0 = iVar2;
  RK_LOG(5,0x17171700,"get the rkchip:%d.","TEST_COMM_GetSocType",0x133,iVar2);
  return iVar2;
}



/* ===== TEST_COMM_FillImage @ 000157a8 size=14224 ===== */

undefined4
TEST_COMM_FillImage(undefined8 *param_1,uint param_2,uint param_3,uint param_4,int param_5,
                   uint param_6,uint param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined8 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 *puVar87;
  undefined1 *puVar88;
  undefined1 *puVar89;
  undefined1 *puVar90;
  undefined4 uVar91;
  char cVar92;
  char cVar93;
  char cVar94;
  char cVar95;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  char cVar98;
  uint uVar99;
  int iVar100;
  int iVar101;
  code *pcVar102;
  int iVar103;
  undefined8 *puVar104;
  uint uVar105;
  uint uVar106;
  uint uVar107;
  uint uVar108;
  uint uVar109;
  int iVar110;
  undefined8 *puVar111;
  undefined8 *puVar112;
  longlong lVar113;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  uint local_110;
  uint local_b4;
  undefined8 *local_b0;
  
  uVar107 = param_5 * param_4;
  puVar104 = (undefined8 *)((int)param_1 + uVar107);
  local_110 = param_4;
  local_b0 = param_1;
  if (param_6 < 0x10006) {
    if (param_6 < 0x10000) {
      cVar95 = (char)param_7;
      if (param_6 == 8) {
        if (param_3 == 0) {
          return 0;
        }
        if (param_2 == 0) {
          return 0;
        }
        uVar106 = param_2 & 0xfffffff0;
        auVar133._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar133._0_8_ = 0x1000000010;
        auVar147._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar147._0_8_ = 0x400000004;
        auVar121._8_8_ = DAT_000179e8;
        auVar121._0_8_ = DAT_000179e0;
        auVar184._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar184._0_8_ = 0x800000008;
        auVar181._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar181._0_8_ = 0xc0000000c;
        uVar107 = 0;
        do {
          cVar94 = cVar95 * '\x03' + (char)uVar107;
          if (param_2 - 1 < 0xf) {
            uVar105 = 0;
LAB_00017c64:
            uVar99 = uVar105 + 1;
            *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105;
            if (uVar99 < param_2) {
              uVar108 = uVar105 + 2;
              *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
              if (uVar108 < param_2) {
                uVar99 = uVar105 + 3;
                *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                if (uVar99 < param_2) {
                  uVar108 = uVar105 + 4;
                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                  if (uVar108 < param_2) {
                    uVar99 = uVar105 + 5;
                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                    if (uVar99 < param_2) {
                      uVar108 = uVar105 + 6;
                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                      if (uVar108 < param_2) {
                        uVar99 = uVar105 + 7;
                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                        if (uVar99 < param_2) {
                          uVar108 = uVar105 + 8;
                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                          if (uVar108 < param_2) {
                            uVar99 = uVar105 + 9;
                            *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                            if (uVar99 < param_2) {
                              uVar108 = uVar105 + 10;
                              *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                              if (uVar108 < param_2) {
                                uVar99 = uVar105 + 0xb;
                                *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                if (uVar99 < param_2) {
                                  uVar108 = uVar105 + 0xc;
                                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                  if (uVar108 < param_2) {
                                    uVar99 = uVar105 + 0xd;
                                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                    if (uVar99 < param_2) {
                                      uVar105 = uVar105 + 0xe;
                                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                      if (uVar105 < param_2) {
                                        *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar81._8_8_ = uVar67;
            auVar81._0_8_ = uVar67;
            puVar111 = param_1;
            auVar157 = auVar121;
            do {
              auVar173 = VectorAdd(auVar157,*(undefined1 (*) [16])(auVar147 << 0x40 | auVar147),4);
              auVar167 = VectorAdd(auVar157,*(undefined1 (*) [16])(auVar181 << 0x40 | auVar181),4);
              auVar185 = VectorAdd(auVar157,*(undefined1 (*) [16])(auVar184 << 0x40 | auVar184),4);
              auVar179._0_8_ = VectorCopyNarrow(auVar157,4);
              auVar179._8_8_ = VectorCopyNarrow(auVar173,4);
              auVar157 = VectorAdd(auVar157,*(undefined1 (*) [16])(auVar133 << 0x40 | auVar133),4);
              auVar173._0_8_ = VectorCopyNarrow(auVar185,4);
              auVar173._8_8_ = VectorCopyNarrow(auVar167,4);
              auVar167._0_8_ = VectorCopyNarrow(auVar179,2);
              auVar167._8_8_ = VectorCopyNarrow(auVar173,2);
              auVar167 = VectorAdd(auVar167,auVar81,1);
              *puVar111 = auVar167._0_8_;
              puVar111[1] = auVar167._8_8_;
              puVar111 = puVar111 + 2;
            } while (puVar111 != (undefined8 *)(uVar106 + (int)param_1));
            uVar105 = uVar106;
            if (param_2 != uVar106) goto LAB_00017c64;
          }
          uVar107 = uVar107 + 1;
          param_1 = (undefined8 *)((int)param_1 + param_4);
        } while (param_3 != uVar107);
        uVar107 = param_2 >> 1;
        cVar94 = cVar95 * '\x05' + '@';
        if (uVar107 == 0) {
          return 0;
        }
        auVar157._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar157._0_8_ = 0x1000000010;
        auVar185._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar185._0_8_ = 0x400000004;
        auVar45._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar45._0_8_ = 0x800000008;
        auVar46._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
        auVar46._0_8_ = 0xc0000000c;
        uVar106 = (param_2 >> 5) * 0x10;
        uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
        uVar67 = CONCAT44(uVar91,uVar91);
        auVar82._8_8_ = uVar67;
        auVar82._0_8_ = uVar67;
        uVar105 = 0;
        auVar126._8_8_ = DAT_00018008;
        auVar126._0_8_ = DAT_00018000;
        do {
          cVar93 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
          if (uVar107 - 1 < 0xf) {
            uVar99 = 0;
LAB_00017e50:
            uVar108 = uVar99 + 1;
            *(char *)((int)puVar104 + uVar99 * 2 + 1) = cVar93;
            *(char *)((int)puVar104 + uVar99 * 2) = cVar94 + (char)uVar99;
            if (uVar108 < uVar107) {
              uVar109 = uVar99 + 2;
              *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
              *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
              if (uVar109 < uVar107) {
                uVar108 = uVar99 + 3;
                *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 4;
                  *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                  *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 5;
                    *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                    *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 6;
                      *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                      *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 7;
                        *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                        *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 8;
                          *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                          *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 9;
                            *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                            *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 10;
                              *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                              *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 0xb;
                                *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                                *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 0xc;
                                  *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                                  *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xd;
                                    *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                                    *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                                    if (uVar108 < uVar107) {
                                      uVar99 = uVar99 + 0xe;
                                      *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                                      *(char *)((int)puVar104 + uVar108 * 2) =
                                           cVar94 + (char)uVar108;
                                      if (uVar99 < uVar107) {
                                        *(char *)((int)puVar104 + uVar99 * 2 + 1) = cVar93;
                                        *(char *)((int)puVar104 + uVar99 * 2) =
                                             cVar94 + (char)uVar99;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            puVar111 = puVar104;
            auVar133 = auVar126;
            do {
              auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar185 << 0x40 | auVar185),4);
              auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar46 << 0x40 | auVar46),4);
              auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar45 << 0x40 | auVar45),4);
              auVar180._0_8_ = VectorCopyNarrow(auVar133,4);
              auVar180._8_8_ = VectorCopyNarrow(auVar184,4);
              auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar157 << 0x40 | auVar157),4);
              auVar174._0_8_ = VectorCopyNarrow(auVar181,4);
              auVar174._8_8_ = VectorCopyNarrow(auVar147,4);
              auVar168._0_8_ = VectorCopyNarrow(auVar180,2);
              auVar168._8_8_ = VectorCopyNarrow(auVar174,2);
              VectorAdd(auVar168,auVar82,1);
              puVar87 = (undefined1 *)0x380;
              puVar88 = (undefined1 *)0x390;
              lVar113 = 8;
              puVar112 = puVar111;
              while( true ) {
                *(undefined1 *)puVar112 = *puVar87;
                *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                puVar112 = (undefined8 *)((int)puVar112 + 2);
                lVar113 = lVar113 + -1;
                if (lVar113 == 0) break;
                puVar87 = puVar87 + 1;
                puVar88 = puVar88 + 1;
              }
              puVar87 = (undefined1 *)0x388;
              puVar88 = (undefined1 *)0x398;
              lVar113 = 8;
              while( true ) {
                *(undefined1 *)puVar112 = *puVar87;
                *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                puVar112 = (undefined8 *)((int)puVar112 + 2);
                lVar113 = lVar113 + -1;
                if (lVar113 == 0) break;
                puVar87 = puVar87 + 1;
                puVar88 = puVar88 + 1;
              }
              puVar111 = puVar111 + 4;
            } while (puVar111 != puVar104 + (param_2 >> 5) * 4);
            uVar99 = uVar106;
            if (uVar106 != uVar107) goto LAB_00017e50;
          }
          uVar105 = uVar105 + 1;
          puVar104 = (undefined8 *)((int)puVar104 + param_4);
          if (param_3 == uVar105) {
            return 0;
          }
        } while( true );
      }
      if (param_6 < 9) {
        if (param_6 == 4) {
          if (param_3 == 0) {
            return 0;
          }
          if (param_2 != 0) {
            uVar105 = param_2 & 0xfffffff0;
            auVar29._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar29._0_8_ = 0x1000000010;
            auVar30._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar30._0_8_ = 0x400000004;
            auVar31._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar31._0_8_ = 0x800000008;
            auVar117._8_8_ = DAT_000172e8;
            auVar117._0_8_ = DAT_000172e0;
            auVar32._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar32._0_8_ = 0xc0000000c;
            uVar106 = 0;
            do {
              cVar94 = cVar95 * '\x03' + (char)uVar106;
              if (param_2 - 1 < 0xf) {
                uVar99 = 0;
LAB_000173b8:
                uVar108 = uVar99 + 1;
                *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                if (uVar108 < param_2) {
                  uVar109 = uVar99 + 2;
                  *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                  if (uVar109 < param_2) {
                    uVar108 = uVar99 + 3;
                    *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                    if (uVar108 < param_2) {
                      uVar109 = uVar99 + 4;
                      *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                      if (uVar109 < param_2) {
                        uVar108 = uVar99 + 5;
                        *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                        if (uVar108 < param_2) {
                          uVar109 = uVar99 + 6;
                          *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                          if (uVar109 < param_2) {
                            uVar108 = uVar99 + 7;
                            *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                            if (uVar108 < param_2) {
                              uVar109 = uVar99 + 8;
                              *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                              if (uVar109 < param_2) {
                                uVar108 = uVar99 + 9;
                                *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                                if (uVar108 < param_2) {
                                  uVar109 = uVar99 + 10;
                                  *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                  if (uVar109 < param_2) {
                                    uVar108 = uVar99 + 0xb;
                                    *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                                    if (uVar108 < param_2) {
                                      uVar109 = uVar99 + 0xc;
                                      *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                      if (uVar109 < param_2) {
                                        uVar108 = uVar99 + 0xd;
                                        *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                                        if (uVar108 < param_2) {
                                          uVar99 = uVar99 + 0xe;
                                          *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108
                                          ;
                                          if (uVar99 < param_2) {
                                            *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99
                                            ;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar77._8_8_ = uVar67;
                auVar77._0_8_ = uVar67;
                puVar111 = param_1;
                auVar133 = auVar117;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar30 << 0x40 | auVar30),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar32 << 0x40 | auVar32),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar31 << 0x40 | auVar31),4)
                  ;
                  auVar165._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar165._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar29 << 0x40 | auVar29),4)
                  ;
                  auVar155._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar155._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar141._0_8_ = VectorCopyNarrow(auVar165,2);
                  auVar141._8_8_ = VectorCopyNarrow(auVar155,2);
                  auVar147 = VectorAdd(auVar141,auVar77,1);
                  *puVar111 = auVar147._0_8_;
                  puVar111[1] = auVar147._8_8_;
                  puVar111 = puVar111 + 2;
                } while ((undefined8 *)((int)param_1 + uVar105) != puVar111);
                uVar99 = uVar105;
                if (uVar105 != param_2) goto LAB_000173b8;
              }
              uVar106 = uVar106 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4);
            } while (param_3 != uVar106);
          }
          param_3 = param_3 >> 1;
          if (param_3 == 0) {
            return 0;
          }
          uVar106 = param_2 >> 1;
          if (uVar106 == 0) {
            return 0;
          }
          uVar105 = 0;
          puVar111 = puVar104;
          do {
            uVar99 = ((param_7 & 0xff) * 2 - 0x80 & 0xff) + uVar105;
            uVar105 = uVar105 + 1;
            memset(puVar111,uVar99 & 0xff,uVar106);
            puVar111 = (undefined8 *)((int)puVar111 + (param_4 >> 1));
          } while (uVar105 != param_3);
          auVar33._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar33._0_8_ = 0x1000000010;
          auVar34._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar34._0_8_ = 0x400000004;
          uVar105 = (param_2 >> 5) * 0x10;
          auVar35._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar35._0_8_ = 0x800000008;
          cVar95 = cVar95 * '\x05' + '@';
          auVar36._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar36._0_8_ = 0xc0000000c;
          puVar104 = (undefined8 *)((int)puVar104 + (uVar107 >> 2));
          auVar118._8_8_ = DAT_000172e8;
          auVar118._0_8_ = DAT_000172e0;
          uVar107 = 0;
          uVar91 = CONCAT22(CONCAT11(cVar95,cVar95),CONCAT11(cVar95,cVar95));
          uVar67 = CONCAT44(uVar91,uVar91);
          auVar78._8_8_ = uVar67;
          auVar78._0_8_ = uVar67;
          do {
            if (uVar106 - 1 < 0xf) {
              uVar99 = 0;
LAB_000175e0:
              uVar108 = uVar99 + 1;
              *(char *)((int)puVar104 + uVar99) = cVar95 + (char)uVar99;
              if (uVar108 < uVar106) {
                uVar109 = uVar99 + 2;
                *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                if (uVar109 < uVar106) {
                  uVar108 = uVar99 + 3;
                  *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                  if (uVar108 < uVar106) {
                    uVar109 = uVar99 + 4;
                    *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                    if (uVar109 < uVar106) {
                      uVar108 = uVar99 + 5;
                      *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                      if (uVar108 < uVar106) {
                        uVar109 = uVar99 + 6;
                        *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                        if (uVar109 < uVar106) {
                          uVar108 = uVar99 + 7;
                          *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                          if (uVar108 < uVar106) {
                            uVar109 = uVar99 + 8;
                            *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                            if (uVar109 < uVar106) {
                              uVar108 = uVar99 + 9;
                              *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                              if (uVar108 < uVar106) {
                                uVar109 = uVar99 + 10;
                                *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                                if (uVar109 < uVar106) {
                                  uVar108 = uVar99 + 0xb;
                                  *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                                  if (uVar108 < uVar106) {
                                    uVar109 = uVar99 + 0xc;
                                    *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                                    if (uVar109 < uVar106) {
                                      uVar108 = uVar99 + 0xd;
                                      *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                                      if (uVar108 < uVar106) {
                                        uVar99 = uVar99 + 0xe;
                                        *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                                        if (uVar99 < uVar106) {
                                          *(char *)((int)puVar104 + uVar99) = cVar95 + (char)uVar99;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              puVar111 = puVar104;
              auVar133 = auVar118;
              do {
                auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar34 << 0x40 | auVar34),4);
                auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar36 << 0x40 | auVar36),4);
                auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar35 << 0x40 | auVar35),4);
                auVar166._0_8_ = VectorCopyNarrow(auVar133,4);
                auVar166._8_8_ = VectorCopyNarrow(auVar184,4);
                auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar33 << 0x40 | auVar33),4);
                auVar156._0_8_ = VectorCopyNarrow(auVar181,4);
                auVar156._8_8_ = VectorCopyNarrow(auVar147,4);
                auVar142._0_8_ = VectorCopyNarrow(auVar166,2);
                auVar142._8_8_ = VectorCopyNarrow(auVar156,2);
                auVar147 = VectorAdd(auVar142,auVar78,1);
                *puVar111 = auVar147._0_8_;
                puVar111[1] = auVar147._8_8_;
                puVar111 = puVar111 + 2;
              } while (puVar104 + (param_2 >> 5) * 2 != puVar111);
              uVar99 = uVar105;
              if (uVar106 != uVar105) goto LAB_000175e0;
            }
            uVar107 = uVar107 + 1;
            puVar104 = (undefined8 *)((int)puVar104 + (param_4 >> 1));
            if (uVar107 == param_3) {
              return 0;
            }
          } while( true );
        }
        if (param_6 < 5) {
          if (param_6 == 0) {
            if (param_3 == 0) {
              return 0;
            }
            if (param_2 == 0) {
              return 0;
            }
            uVar106 = param_2 & 0xfffffff0;
            auVar55._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar55._0_8_ = 0x1000000010;
            auVar56._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar56._0_8_ = 0x400000004;
            auVar57._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar57._0_8_ = 0x800000008;
            auVar122._8_8_ = DAT_000188c0;
            auVar122._0_8_ = DAT_000188b8;
            auVar58._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar58._0_8_ = 0xc0000000c;
            uVar107 = 0;
            do {
              cVar94 = cVar95 * '\x03' + (char)uVar107;
              if (param_2 - 1 < 0xf) {
                uVar105 = 0;
LAB_00018988:
                uVar99 = uVar105 + 1;
                *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105;
                if (uVar99 < param_2) {
                  uVar108 = uVar105 + 2;
                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                  if (uVar108 < param_2) {
                    uVar99 = uVar105 + 3;
                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                    if (uVar99 < param_2) {
                      uVar108 = uVar105 + 4;
                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                      if (uVar108 < param_2) {
                        uVar99 = uVar105 + 5;
                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                        if (uVar99 < param_2) {
                          uVar108 = uVar105 + 6;
                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                          if (uVar108 < param_2) {
                            uVar99 = uVar105 + 7;
                            *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                            if (uVar99 < param_2) {
                              uVar108 = uVar105 + 8;
                              *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                              if (uVar108 < param_2) {
                                uVar99 = uVar105 + 9;
                                *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                if (uVar99 < param_2) {
                                  uVar108 = uVar105 + 10;
                                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                  if (uVar108 < param_2) {
                                    uVar99 = uVar105 + 0xb;
                                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                    if (uVar99 < param_2) {
                                      uVar108 = uVar105 + 0xc;
                                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                      if (uVar108 < param_2) {
                                        uVar99 = uVar105 + 0xd;
                                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                        if (uVar99 < param_2) {
                                          uVar105 = uVar105 + 0xe;
                                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                          if (uVar105 < param_2) {
                                            *(char *)((int)param_1 + uVar105) =
                                                 cVar94 + (char)uVar105;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar85._8_8_ = uVar67;
                auVar85._0_8_ = uVar67;
                puVar111 = param_1;
                auVar133 = auVar122;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar56 << 0x40 | auVar56),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar58 << 0x40 | auVar58),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar57 << 0x40 | auVar57),4)
                  ;
                  auVar169._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar169._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar55 << 0x40 | auVar55),4)
                  ;
                  auVar158._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar158._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar145._0_8_ = VectorCopyNarrow(auVar169,2);
                  auVar145._8_8_ = VectorCopyNarrow(auVar158,2);
                  auVar147 = VectorAdd(auVar145,auVar85,1);
                  *puVar111 = auVar147._0_8_;
                  puVar111[1] = auVar147._8_8_;
                  puVar111 = puVar111 + 2;
                } while ((undefined8 *)((int)param_1 + uVar106) != puVar111);
                uVar105 = uVar106;
                if (param_2 != uVar106) goto LAB_00018988;
              }
              uVar107 = uVar107 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4);
            } while (param_3 != uVar107);
            if (param_3 >> 1 == 0) {
              return 0;
            }
            cVar94 = cVar95 * '\x05' + '@';
            uVar107 = param_2 >> 1;
            if (uVar107 == 0) {
              return 0;
            }
            auVar59._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar59._0_8_ = 0x1000000010;
            auVar60._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar60._0_8_ = 0x400000004;
            auVar61._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar61._0_8_ = 0x800000008;
            auVar62._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar62._0_8_ = 0xc0000000c;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar86._8_8_ = uVar67;
            auVar86._0_8_ = uVar67;
            uVar105 = 0;
            auVar129._8_8_ = DAT_000188c0;
            auVar129._0_8_ = DAT_000188b8;
            do {
              cVar93 = cVar95 * '\x02' + -0x80 + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_00018b80:
                uVar108 = uVar99 + 1;
                *(char *)((int)puVar104 + uVar99 * 2) = cVar93;
                *(char *)((int)puVar104 + uVar99 * 2 + 1) = cVar94 + (char)uVar99;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                  *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                    *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                      *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                        *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                          *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                            *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                              *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                                *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                                  *(char *)((int)puVar104 + uVar108 * 2 + 1) =
                                       cVar94 + (char)uVar108;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                                    *(char *)((int)puVar104 + uVar109 * 2 + 1) =
                                         cVar94 + (char)uVar109;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                                      *(char *)((int)puVar104 + uVar108 * 2 + 1) =
                                           cVar94 + (char)uVar108;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                                        *(char *)((int)puVar104 + uVar109 * 2 + 1) =
                                             cVar94 + (char)uVar109;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                                          *(char *)((int)puVar104 + uVar108 * 2 + 1) =
                                               cVar94 + (char)uVar108;
                                          if (uVar99 < uVar107) {
                                            *(char *)((int)puVar104 + uVar99 * 2) = cVar93;
                                            *(char *)((int)puVar104 + uVar99 * 2 + 1) =
                                                 cVar94 + (char)uVar99;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                puVar111 = puVar104;
                auVar133 = auVar129;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar60 << 0x40 | auVar60),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar62 << 0x40 | auVar62),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar61 << 0x40 | auVar61),4)
                  ;
                  auVar170._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar170._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar59 << 0x40 | auVar59),4)
                  ;
                  auVar159._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar159._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar146._0_8_ = VectorCopyNarrow(auVar170,2);
                  auVar146._8_8_ = VectorCopyNarrow(auVar159,2);
                  VectorAdd(auVar146,auVar86,1);
                  puVar87 = (undefined1 *)0x3e0;
                  puVar88 = (undefined1 *)0x3f0;
                  lVar113 = 8;
                  puVar112 = puVar111;
                  while( true ) {
                    *(undefined1 *)puVar112 = *puVar87;
                    *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                    puVar112 = (undefined8 *)((int)puVar112 + 2);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                  }
                  puVar87 = (undefined1 *)0x3e8;
                  puVar88 = (undefined1 *)0x3f8;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar112 = *puVar87;
                    *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                    puVar112 = (undefined8 *)((int)puVar112 + 2);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                  }
                  puVar111 = puVar111 + 4;
                } while (puVar104 + (param_2 >> 5) * 4 != puVar111);
                uVar99 = uVar106;
                if (uVar107 != uVar106) goto LAB_00018b80;
              }
              uVar105 = uVar105 + 1;
              puVar104 = (undefined8 *)((int)puVar104 + param_4);
              if (uVar105 == param_3 >> 1) {
                return 0;
              }
            } while( true );
          }
          if (param_6 == 2) {
            if (param_3 == 0) {
              return 0;
            }
            if (param_2 == 0) {
              return 0;
            }
            uVar106 = param_2 & 0xfffffff0;
            auVar17._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar17._0_8_ = 0x1000000010;
            auVar18._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar18._0_8_ = 0x400000004;
            auVar119._8_8_ = DAT_000164f0;
            auVar119._0_8_ = DAT_000164e8;
            auVar19._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar19._0_8_ = 0x800000008;
            auVar20._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar20._0_8_ = 0xc0000000c;
            uVar107 = 0;
            do {
              cVar94 = cVar95 * '\x03' + (char)uVar107;
              if (param_2 - 1 < 0xf) {
                uVar105 = 0;
LAB_00016850:
                uVar99 = uVar105 + 1;
                *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105;
                if (uVar99 < param_2) {
                  uVar108 = uVar105 + 2;
                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                  if (uVar108 < param_2) {
                    uVar99 = uVar105 + 3;
                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                    if (uVar99 < param_2) {
                      uVar108 = uVar105 + 4;
                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                      if (uVar108 < param_2) {
                        uVar99 = uVar105 + 5;
                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                        if (uVar99 < param_2) {
                          uVar108 = uVar105 + 6;
                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                          if (uVar108 < param_2) {
                            uVar99 = uVar105 + 7;
                            *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                            if (uVar99 < param_2) {
                              uVar108 = uVar105 + 8;
                              *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                              if (uVar108 < param_2) {
                                uVar99 = uVar105 + 9;
                                *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                if (uVar99 < param_2) {
                                  uVar108 = uVar105 + 10;
                                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                  if (uVar108 < param_2) {
                                    uVar99 = uVar105 + 0xb;
                                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                    if (uVar99 < param_2) {
                                      uVar108 = uVar105 + 0xc;
                                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                      if (uVar108 < param_2) {
                                        uVar99 = uVar105 + 0xd;
                                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                        if (uVar99 < param_2) {
                                          uVar105 = uVar105 + 0xe;
                                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                          if (uVar105 < param_2) {
                                            *(char *)((int)param_1 + uVar105) =
                                                 cVar94 + (char)uVar105;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar74._8_8_ = uVar67;
                auVar74._0_8_ = uVar67;
                puVar111 = param_1;
                auVar133 = auVar119;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar18 << 0x40 | auVar18),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar20 << 0x40 | auVar20),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar19 << 0x40 | auVar19),4)
                  ;
                  auVar162._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar162._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar17 << 0x40 | auVar17),4)
                  ;
                  auVar152._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar152._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar138._0_8_ = VectorCopyNarrow(auVar162,2);
                  auVar138._8_8_ = VectorCopyNarrow(auVar152,2);
                  auVar147 = VectorAdd(auVar138,auVar74,1);
                  *puVar111 = auVar147._0_8_;
                  puVar111[1] = auVar147._8_8_;
                  puVar111 = puVar111 + 2;
                } while ((undefined8 *)((int)param_1 + uVar106) != puVar111);
                uVar105 = uVar106;
                if (uVar106 != param_2) goto LAB_00016850;
              }
              uVar107 = uVar107 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4);
            } while (param_3 != uVar107);
            uVar107 = param_2 >> 1;
            cVar94 = cVar95 * '\x05' + '@';
            if (uVar107 == 0) {
              return 0;
            }
            auVar21._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar21._0_8_ = 0x1000000010;
            auVar22._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar22._0_8_ = 0x400000004;
            auVar23._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar23._0_8_ = 0x800000008;
            auVar24._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar24._0_8_ = 0xc0000000c;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar75._8_8_ = uVar67;
            auVar75._0_8_ = uVar67;
            uVar105 = 0;
            auVar124._8_8_ = DAT_00016bf8;
            auVar124._0_8_ = DAT_00016bf0;
            do {
              cVar93 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_00016a40:
                uVar108 = uVar99 + 1;
                *(char *)((int)puVar104 + uVar99 * 2) = cVar93;
                *(char *)((int)puVar104 + uVar99 * 2 + 1) = cVar94 + (char)uVar99;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                  *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                    *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                      *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                        *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                          *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                            *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                              *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar94 + (char)uVar108;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                                *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar94 + (char)uVar109;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                                  *(char *)((int)puVar104 + uVar108 * 2 + 1) =
                                       cVar94 + (char)uVar108;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                                    *(char *)((int)puVar104 + uVar109 * 2 + 1) =
                                         cVar94 + (char)uVar109;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                                      *(char *)((int)puVar104 + uVar108 * 2 + 1) =
                                           cVar94 + (char)uVar108;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        *(char *)((int)puVar104 + uVar109 * 2) = cVar93;
                                        *(char *)((int)puVar104 + uVar109 * 2 + 1) =
                                             cVar94 + (char)uVar109;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          *(char *)((int)puVar104 + uVar108 * 2) = cVar93;
                                          *(char *)((int)puVar104 + uVar108 * 2 + 1) =
                                               cVar94 + (char)uVar108;
                                          if (uVar99 < uVar107) {
                                            *(char *)((int)puVar104 + uVar99 * 2) = cVar93;
                                            *(char *)((int)puVar104 + uVar99 * 2 + 1) =
                                                 cVar94 + (char)uVar99;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                puVar111 = puVar104;
                auVar133 = auVar124;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar22 << 0x40 | auVar22),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar24 << 0x40 | auVar24),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar23 << 0x40 | auVar23),4)
                  ;
                  auVar163._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar163._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar21 << 0x40 | auVar21),4)
                  ;
                  auVar153._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar153._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar139._0_8_ = VectorCopyNarrow(auVar163,2);
                  auVar139._8_8_ = VectorCopyNarrow(auVar153,2);
                  VectorAdd(auVar139,auVar75,1);
                  puVar87 = (undefined1 *)0x3c0;
                  puVar88 = (undefined1 *)0x3d0;
                  lVar113 = 8;
                  puVar112 = puVar111;
                  while( true ) {
                    *(undefined1 *)puVar112 = *puVar87;
                    *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                    puVar112 = (undefined8 *)((int)puVar112 + 2);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                  }
                  puVar87 = (undefined1 *)0x3c8;
                  puVar88 = (undefined1 *)0x3d8;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar112 = *puVar87;
                    *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                    puVar112 = (undefined8 *)((int)puVar112 + 2);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                  }
                  puVar111 = puVar111 + 4;
                } while (puVar104 + (param_2 >> 5) * 4 != puVar111);
                uVar99 = uVar106;
                if (uVar106 != uVar107) goto LAB_00016a40;
              }
              uVar105 = uVar105 + 1;
              puVar104 = (undefined8 *)((int)puVar104 + param_4);
              if (param_3 == uVar105) {
                return 0;
              }
            } while( true );
          }
        }
        else {
          if (param_6 == 6) {
            if (param_3 == 0) {
              return 0;
            }
            if (param_2 == 0) {
              return 0;
            }
            uVar106 = param_2 & 0xfffffff0;
            auVar37._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar37._0_8_ = 0x1000000010;
            auVar38._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar38._0_8_ = 0x400000004;
            auVar120._8_8_ = DAT_000179e8;
            auVar120._0_8_ = DAT_000179e0;
            auVar39._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar39._0_8_ = 0x800000008;
            auVar40._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar40._0_8_ = 0xc0000000c;
            uVar107 = 0;
            do {
              cVar94 = cVar95 * '\x03' + (char)uVar107;
              if (param_2 - 1 < 0xf) {
                uVar105 = 0;
LAB_000177d8:
                uVar99 = uVar105 + 1;
                *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105;
                if (uVar99 < param_2) {
                  uVar108 = uVar105 + 2;
                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                  if (uVar108 < param_2) {
                    uVar99 = uVar105 + 3;
                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                    if (uVar99 < param_2) {
                      uVar108 = uVar105 + 4;
                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                      if (uVar108 < param_2) {
                        uVar99 = uVar105 + 5;
                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                        if (uVar99 < param_2) {
                          uVar108 = uVar105 + 6;
                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                          if (uVar108 < param_2) {
                            uVar99 = uVar105 + 7;
                            *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                            if (uVar99 < param_2) {
                              uVar108 = uVar105 + 8;
                              *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                              if (uVar108 < param_2) {
                                uVar99 = uVar105 + 9;
                                *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                if (uVar99 < param_2) {
                                  uVar108 = uVar105 + 10;
                                  *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                  if (uVar108 < param_2) {
                                    uVar99 = uVar105 + 0xb;
                                    *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                    if (uVar99 < param_2) {
                                      uVar108 = uVar105 + 0xc;
                                      *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                      if (uVar108 < param_2) {
                                        uVar99 = uVar105 + 0xd;
                                        *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                        if (uVar99 < param_2) {
                                          uVar105 = uVar105 + 0xe;
                                          *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                          if (uVar105 < param_2) {
                                            *(char *)((int)param_1 + uVar105) =
                                                 cVar94 + (char)uVar105;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar79._8_8_ = uVar67;
                auVar79._0_8_ = uVar67;
                puVar111 = param_1;
                auVar133 = auVar120;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar38 << 0x40 | auVar38),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar40 << 0x40 | auVar40),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar39 << 0x40 | auVar39),4)
                  ;
                  auVar177._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar177._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar37 << 0x40 | auVar37),4)
                  ;
                  auVar171._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar171._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar143._0_8_ = VectorCopyNarrow(auVar177,2);
                  auVar143._8_8_ = VectorCopyNarrow(auVar171,2);
                  auVar147 = VectorAdd(auVar143,auVar79,1);
                  *puVar111 = auVar147._0_8_;
                  puVar111[1] = auVar147._8_8_;
                  puVar111 = puVar111 + 2;
                } while (puVar111 != (undefined8 *)(uVar106 + (int)param_1));
                uVar105 = uVar106;
                if (param_2 != uVar106) goto LAB_000177d8;
              }
              uVar107 = uVar107 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4);
            } while (param_3 != uVar107);
            if (param_3 >> 1 == 0) {
              return 0;
            }
            cVar94 = cVar95 * '\x05' + '@';
            uVar107 = param_2 >> 1;
            if (uVar107 == 0) {
              return 0;
            }
            auVar41._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar41._0_8_ = 0x1000000010;
            auVar42._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar42._0_8_ = 0x400000004;
            auVar43._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar43._0_8_ = 0x800000008;
            auVar44._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar44._0_8_ = 0xc0000000c;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar80._8_8_ = uVar67;
            auVar80._0_8_ = uVar67;
            uVar105 = 0;
            auVar125._8_8_ = DAT_000179e8;
            auVar125._0_8_ = DAT_000179e0;
            do {
              cVar93 = cVar95 * '\x02' + -0x80 + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_000179f0:
                uVar108 = uVar99 + 1;
                *(char *)((int)puVar104 + uVar99 * 2 + 1) = cVar93;
                *(char *)((int)puVar104 + uVar99 * 2) = cVar94 + (char)uVar99;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                  *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                    *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                      *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                        *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                          *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                            *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                              *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                                *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                                  *(char *)((int)puVar104 + uVar108 * 2) = cVar94 + (char)uVar108;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                                    *(char *)((int)puVar104 + uVar109 * 2) = cVar94 + (char)uVar109;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                                      *(char *)((int)puVar104 + uVar108 * 2) =
                                           cVar94 + (char)uVar108;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        *(char *)((int)puVar104 + uVar109 * 2 + 1) = cVar93;
                                        *(char *)((int)puVar104 + uVar109 * 2) =
                                             cVar94 + (char)uVar109;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          *(char *)((int)puVar104 + uVar108 * 2 + 1) = cVar93;
                                          *(char *)((int)puVar104 + uVar108 * 2) =
                                               cVar94 + (char)uVar108;
                                          if (uVar99 < uVar107) {
                                            *(char *)((int)puVar104 + uVar99 * 2 + 1) = cVar93;
                                            *(char *)((int)puVar104 + uVar99 * 2) =
                                                 cVar94 + (char)uVar99;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                puVar111 = puVar104;
                auVar133 = auVar125;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar42 << 0x40 | auVar42),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar44 << 0x40 | auVar44),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar43 << 0x40 | auVar43),4)
                  ;
                  auVar178._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar178._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar41 << 0x40 | auVar41),4)
                  ;
                  auVar172._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar172._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar144._0_8_ = VectorCopyNarrow(auVar178,2);
                  auVar144._8_8_ = VectorCopyNarrow(auVar172,2);
                  VectorAdd(auVar144,auVar80,1);
                  puVar87 = (undefined1 *)0x3a0;
                  puVar88 = (undefined1 *)0x3b0;
                  lVar113 = 8;
                  puVar112 = puVar111;
                  while( true ) {
                    *(undefined1 *)puVar112 = *puVar87;
                    *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                    puVar112 = (undefined8 *)((int)puVar112 + 2);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                  }
                  puVar87 = (undefined1 *)0x3a8;
                  puVar88 = (undefined1 *)0x3b8;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar112 = *puVar87;
                    *(undefined1 *)((int)puVar112 + 1) = *puVar88;
                    puVar112 = (undefined8 *)((int)puVar112 + 2);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                  }
                  puVar111 = puVar111 + 4;
                } while (puVar111 != puVar104 + (param_2 >> 5) * 4);
                uVar99 = uVar106;
                if (uVar107 != uVar106) goto LAB_000179f0;
              }
              uVar105 = uVar105 + 1;
              puVar104 = (undefined8 *)((int)puVar104 + param_4);
              if (uVar105 == param_3 >> 1) {
                return 0;
              }
            } while( true );
          }
          if (param_6 == 7) {
            if (param_3 == 0) {
              return 0;
            }
            if (param_2 == 0) {
              return 0;
            }
            uVar105 = param_2 & 0xfffffff0;
            auVar9._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar9._0_8_ = 0x1000000010;
            auVar10._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar10._0_8_ = 0x400000004;
            auVar11._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar11._0_8_ = 0x800000008;
            auVar114._8_8_ = DAT_000164f0;
            auVar114._0_8_ = DAT_000164e8;
            auVar12._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar12._0_8_ = 0xc0000000c;
            uVar106 = 0;
            do {
              cVar94 = cVar95 * '\x03' + (char)uVar106;
              if (param_2 - 1 < 0xf) {
                uVar99 = 0;
LAB_00016194:
                uVar108 = uVar99 + 1;
                *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                if (uVar108 < param_2) {
                  uVar109 = uVar99 + 2;
                  *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                  if (uVar109 < param_2) {
                    uVar108 = uVar99 + 3;
                    *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                    if (uVar108 < param_2) {
                      uVar109 = uVar99 + 4;
                      *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                      if (uVar109 < param_2) {
                        uVar108 = uVar99 + 5;
                        *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                        if (uVar108 < param_2) {
                          uVar109 = uVar99 + 6;
                          *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                          if (uVar109 < param_2) {
                            uVar108 = uVar99 + 7;
                            *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                            if (uVar108 < param_2) {
                              uVar109 = uVar99 + 8;
                              *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                              if (uVar109 < param_2) {
                                uVar108 = uVar99 + 9;
                                *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                                if (uVar108 < param_2) {
                                  uVar109 = uVar99 + 10;
                                  *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                  if (uVar109 < param_2) {
                                    uVar108 = uVar99 + 0xb;
                                    *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                                    if (uVar108 < param_2) {
                                      uVar109 = uVar99 + 0xc;
                                      *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                      if (uVar109 < param_2) {
                                        uVar108 = uVar99 + 0xd;
                                        *(char *)((int)param_1 + uVar109) = cVar94 + (char)uVar109;
                                        if (uVar108 < param_2) {
                                          uVar99 = uVar99 + 0xe;
                                          *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108
                                          ;
                                          if (uVar99 < param_2) {
                                            *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99
                                            ;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar72._8_8_ = uVar67;
                auVar72._0_8_ = uVar67;
                puVar111 = param_1;
                auVar133 = auVar114;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar10 << 0x40 | auVar10),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar12 << 0x40 | auVar12),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar11 << 0x40 | auVar11),4)
                  ;
                  auVar160._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar160._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar9 << 0x40 | auVar9),4);
                  auVar150._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar150._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar136._0_8_ = VectorCopyNarrow(auVar160,2);
                  auVar136._8_8_ = VectorCopyNarrow(auVar150,2);
                  auVar147 = VectorAdd(auVar136,auVar72,1);
                  *puVar111 = auVar147._0_8_;
                  puVar111[1] = auVar147._8_8_;
                  puVar111 = puVar111 + 2;
                } while (puVar111 != (undefined8 *)(uVar105 + (int)param_1));
                uVar99 = uVar105;
                if (uVar105 != param_2) goto LAB_00016194;
              }
              uVar106 = uVar106 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4);
            } while (param_3 != uVar106);
            uVar106 = param_2 >> 1;
            if (uVar106 == 0) {
              return 0;
            }
            uVar105 = 0;
            puVar111 = puVar104;
            do {
              uVar99 = uVar105 >> 1;
              uVar105 = uVar105 + 1;
              memset(puVar111,((param_7 & 0xff) * 2 - 0x80 & 0xff) + uVar99 & 0xff,uVar106);
              puVar111 = (undefined8 *)((int)puVar111 + (param_4 >> 1));
            } while (param_3 != uVar105);
            auVar13._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar13._0_8_ = 0x1000000010;
            auVar14._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar14._0_8_ = 0x400000004;
            auVar15._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar15._0_8_ = 0x800000008;
            cVar95 = cVar95 * '\x05' + '@';
            puVar104 = (undefined8 *)((int)puVar104 + (uVar107 >> 1));
            auVar16._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar16._0_8_ = 0xc0000000c;
            uVar107 = (param_2 >> 5) * 0x10;
            auVar115._8_8_ = DAT_000164f0;
            auVar115._0_8_ = DAT_000164e8;
            uVar105 = 0;
            uVar91 = CONCAT22(CONCAT11(cVar95,cVar95),CONCAT11(cVar95,cVar95));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar73._8_8_ = uVar67;
            auVar73._0_8_ = uVar67;
            do {
              if (uVar106 - 1 < 0xf) {
                uVar99 = 0;
LAB_000163b4:
                uVar108 = uVar99 + 1;
                *(char *)((int)puVar104 + uVar99) = cVar95 + (char)uVar99;
                if (uVar108 < uVar106) {
                  uVar109 = uVar99 + 2;
                  *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                  if (uVar109 < uVar106) {
                    uVar108 = uVar99 + 3;
                    *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                    if (uVar108 < uVar106) {
                      uVar109 = uVar99 + 4;
                      *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                      if (uVar109 < uVar106) {
                        uVar108 = uVar99 + 5;
                        *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                        if (uVar108 < uVar106) {
                          uVar109 = uVar99 + 6;
                          *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                          if (uVar109 < uVar106) {
                            uVar108 = uVar99 + 7;
                            *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                            if (uVar108 < uVar106) {
                              uVar109 = uVar99 + 8;
                              *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                              if (uVar109 < uVar106) {
                                uVar108 = uVar99 + 9;
                                *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                                if (uVar108 < uVar106) {
                                  uVar109 = uVar99 + 10;
                                  *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                                  if (uVar109 < uVar106) {
                                    uVar108 = uVar99 + 0xb;
                                    *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                                    if (uVar108 < uVar106) {
                                      uVar109 = uVar99 + 0xc;
                                      *(char *)((int)puVar104 + uVar108) = cVar95 + (char)uVar108;
                                      if (uVar109 < uVar106) {
                                        uVar108 = uVar99 + 0xd;
                                        *(char *)((int)puVar104 + uVar109) = cVar95 + (char)uVar109;
                                        if (uVar108 < uVar106) {
                                          uVar99 = uVar99 + 0xe;
                                          *(char *)((int)puVar104 + uVar108) =
                                               cVar95 + (char)uVar108;
                                          if (uVar99 < uVar106) {
                                            *(char *)((int)puVar104 + uVar99) =
                                                 cVar95 + (char)uVar99;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                puVar111 = puVar104;
                auVar133 = auVar115;
                do {
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar14 << 0x40 | auVar14),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar16 << 0x40 | auVar16),4)
                  ;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar15 << 0x40 | auVar15),4)
                  ;
                  auVar161._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar161._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar13 << 0x40 | auVar13),4)
                  ;
                  auVar151._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar151._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar137._0_8_ = VectorCopyNarrow(auVar161,2);
                  auVar137._8_8_ = VectorCopyNarrow(auVar151,2);
                  auVar147 = VectorAdd(auVar137,auVar73,1);
                  *puVar111 = auVar147._0_8_;
                  puVar111[1] = auVar147._8_8_;
                  puVar111 = puVar111 + 2;
                } while (puVar111 != puVar104 + (param_2 >> 5) * 2);
                uVar99 = uVar107;
                if (uVar106 != uVar107) goto LAB_000163b4;
              }
              uVar105 = uVar105 + 1;
              puVar104 = (undefined8 *)((int)puVar104 + (param_4 >> 1));
              if (param_3 == uVar105) {
                return 0;
              }
            } while( true );
          }
        }
      }
      else {
        if (param_6 == 0xb) {
          if (param_3 == 0) {
            return 0;
          }
          if (param_2 == 0) {
            return 0;
          }
          uVar106 = param_2 & 0xfffffff0;
          auVar25._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar25._0_8_ = 0x1000000010;
          auVar26._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar26._0_8_ = 0x400000004;
          auVar116._8_8_ = DAT_000172e8;
          auVar116._0_8_ = DAT_000172e0;
          auVar27._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar27._0_8_ = 0x800000008;
          auVar28._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
          auVar28._0_8_ = 0xc0000000c;
          uVar107 = 0;
          do {
            cVar94 = cVar95 * '\x03' + (char)uVar107;
            if (param_2 - 1 < 0xf) {
              uVar105 = 0;
LAB_00017178:
              uVar99 = uVar105 + 1;
              *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105;
              if (uVar99 < param_2) {
                uVar108 = uVar105 + 2;
                *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                if (uVar108 < param_2) {
                  uVar99 = uVar105 + 3;
                  *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                  if (uVar99 < param_2) {
                    uVar108 = uVar105 + 4;
                    *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                    if (uVar108 < param_2) {
                      uVar99 = uVar105 + 5;
                      *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                      if (uVar99 < param_2) {
                        uVar108 = uVar105 + 6;
                        *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                        if (uVar108 < param_2) {
                          uVar99 = uVar105 + 7;
                          *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                          if (uVar99 < param_2) {
                            uVar108 = uVar105 + 8;
                            *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                            if (uVar108 < param_2) {
                              uVar99 = uVar105 + 9;
                              *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                              if (uVar99 < param_2) {
                                uVar108 = uVar105 + 10;
                                *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                if (uVar108 < param_2) {
                                  uVar99 = uVar105 + 0xb;
                                  *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                  if (uVar99 < param_2) {
                                    uVar108 = uVar105 + 0xc;
                                    *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                    if (uVar108 < param_2) {
                                      uVar99 = uVar105 + 0xd;
                                      *(char *)((int)param_1 + uVar108) = cVar94 + (char)uVar108;
                                      if (uVar99 < param_2) {
                                        uVar105 = uVar105 + 0xe;
                                        *(char *)((int)param_1 + uVar99) = cVar94 + (char)uVar99;
                                        if (uVar105 < param_2) {
                                          *(char *)((int)param_1 + uVar105) = cVar94 + (char)uVar105
                                          ;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
              uVar67 = CONCAT44(uVar91,uVar91);
              auVar76._8_8_ = uVar67;
              auVar76._0_8_ = uVar67;
              puVar104 = param_1;
              auVar133 = auVar116;
              do {
                auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar26 << 0x40 | auVar26),4);
                auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar28 << 0x40 | auVar28),4);
                auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar27 << 0x40 | auVar27),4);
                auVar164._0_8_ = VectorCopyNarrow(auVar133,4);
                auVar164._8_8_ = VectorCopyNarrow(auVar184,4);
                auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar25 << 0x40 | auVar25),4);
                auVar154._0_8_ = VectorCopyNarrow(auVar181,4);
                auVar154._8_8_ = VectorCopyNarrow(auVar147,4);
                auVar140._0_8_ = VectorCopyNarrow(auVar164,2);
                auVar140._8_8_ = VectorCopyNarrow(auVar154,2);
                auVar147 = VectorAdd(auVar140,auVar76,1);
                *puVar104 = auVar147._0_8_;
                puVar104[1] = auVar147._8_8_;
                puVar104 = puVar104 + 2;
              } while (puVar104 != (undefined8 *)(uVar106 + (int)param_1));
              uVar105 = uVar106;
              if (param_2 != uVar106) goto LAB_00017178;
            }
            uVar107 = uVar107 + 1;
            param_1 = (undefined8 *)((int)param_1 + param_4);
            if (param_3 == uVar107) {
              return 0;
            }
          } while( true );
        }
        if (param_6 < 0xc) {
          if (param_6 == 9) {
            if (param_3 == 0) {
              return 0;
            }
            uVar107 = param_2 >> 1;
            cVar94 = cVar95 * '\x05' + '@';
            if (uVar107 == 0) {
              return 0;
            }
            auVar51._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar51._0_8_ = 0x1000000010;
            auVar52._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar52._0_8_ = 0x400000004;
            auVar53._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar53._0_8_ = 0x800000008;
            auVar54._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar54._0_8_ = 0xc0000000c;
            auVar66._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
            auVar66._0_8_ = 0x101010101010101;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar84._8_8_ = uVar67;
            auVar84._0_8_ = uVar67;
            uVar105 = 0;
            auVar128._8_8_ = DAT_000188c0;
            auVar128._0_8_ = DAT_000188b8;
            do {
              cVar98 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
              cVar93 = cVar95 * '\x03' + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_0001859c:
                uVar108 = uVar99 + 1;
                cVar92 = cVar93 + (char)uVar99 * '\x02';
                *(char *)((int)param_1 + uVar99 * 4) = cVar92;
                *(char *)((int)param_1 + uVar99 * 4 + 3) = cVar94 + (char)uVar99;
                *(char *)((int)param_1 + uVar99 * 4 + 2) = cVar92 + '\x01';
                *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar98;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  cVar92 = cVar93 + (char)uVar108 * '\x02';
                  *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar94 + (char)uVar108;
                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    cVar92 = cVar93 + (char)uVar109 * '\x02';
                    *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar94 + (char)uVar109;
                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar98;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      cVar92 = cVar93 + (char)uVar108 * '\x02';
                      *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar94 + (char)uVar108;
                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        cVar92 = cVar93 + (char)uVar109 * '\x02';
                        *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar94 + (char)uVar109;
                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar98;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          cVar92 = cVar93 + (char)uVar108 * '\x02';
                          *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                          *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar94 + (char)uVar108;
                          *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            cVar92 = cVar93 + (char)uVar109 * '\x02';
                            *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                            *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar94 + (char)uVar109;
                            *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                            *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar98;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              cVar92 = cVar93 + (char)uVar108 * '\x02';
                              *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                              *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar94 + (char)uVar108;
                              *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                              *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                cVar92 = cVar93 + (char)uVar109 * '\x02';
                                *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                                *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar94 + (char)uVar109;
                                *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                                *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar98;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  cVar92 = cVar93 + (char)uVar108 * '\x02';
                                  *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar94 + (char)uVar108
                                  ;
                                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    cVar92 = cVar93 + (char)uVar109 * '\x02';
                                    *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                                    *(char *)((int)param_1 + uVar109 * 4 + 3) =
                                         cVar94 + (char)uVar109;
                                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar98;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      cVar92 = cVar93 + (char)uVar108 * '\x02';
                                      *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                                      *(char *)((int)param_1 + uVar108 * 4 + 3) =
                                           cVar94 + (char)uVar108;
                                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        cVar92 = cVar93 + (char)uVar109 * '\x02';
                                        *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                                        *(char *)((int)param_1 + uVar109 * 4 + 3) =
                                             cVar94 + (char)uVar109;
                                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar98;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          cVar92 = cVar93 + (char)uVar108 * '\x02';
                                          *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                                          *(char *)((int)param_1 + uVar108 * 4 + 3) =
                                               cVar94 + (char)uVar108;
                                          *(char *)((int)param_1 + uVar108 * 4 + 2) =
                                               cVar92 + '\x01';
                                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar98;
                                          if (uVar99 < uVar107) {
                                            cVar93 = cVar93 + (char)uVar99 * '\x02';
                                            *(char *)((int)param_1 + uVar99 * 4) = cVar93;
                                            *(char *)((int)param_1 + uVar99 * 4 + 3) =
                                                 cVar94 + (char)uVar99;
                                            *(char *)((int)param_1 + uVar99 * 4 + 2) =
                                                 cVar93 + '\x01';
                                            *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar98;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar93,cVar93),CONCAT11(cVar93,cVar93));
                auVar97._12_4_ = uVar91;
                auVar97._8_4_ = uVar91;
                puVar104 = param_1;
                auVar133 = auVar128;
                do {
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar52 << 0x40 | auVar52),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar54 << 0x40 | auVar54),4)
                  ;
                  puVar112 = puVar104 + 8;
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar53 << 0x40 | auVar53),4)
                  ;
                  auVar187._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar187._8_8_ = VectorCopyNarrow(auVar181,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar51 << 0x40 | auVar51),4)
                  ;
                  auVar183._0_8_ = VectorCopyNarrow(auVar184,4);
                  auVar183._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar131._0_8_ = VectorCopyNarrow(auVar187,2);
                  auVar131._8_8_ = VectorCopyNarrow(auVar183,2);
                  auVar97._4_4_ = uVar91;
                  auVar97._0_4_ = uVar91;
                  auVar147 = VectorAdd(auVar131,auVar131,1);
                  VectorAdd(auVar131,auVar84,1);
                  auVar147 = VectorAdd(auVar147,auVar97,1);
                  VectorAdd(auVar147,*(undefined1 (*) [16])(auVar66 << 0x40 | auVar66),1);
                  puVar87 = (undefined1 *)0x380;
                  puVar88 = (undefined1 *)0x390;
                  puVar89 = (undefined1 *)0x3a0;
                  puVar90 = (undefined1 *)0x3b0;
                  lVar113 = 8;
                  puVar111 = puVar104;
                  while( true ) {
                    *(undefined1 *)puVar111 = *puVar87;
                    *(undefined1 *)((int)puVar111 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar111 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar111 + 3) = *puVar90;
                    puVar111 = (undefined8 *)((int)puVar111 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar104 + 4;
                  puVar87 = (undefined1 *)0x388;
                  puVar88 = (undefined1 *)0x398;
                  puVar89 = (undefined1 *)0x3a8;
                  puVar90 = (undefined1 *)0x3b8;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar104 = *puVar87;
                    *(undefined1 *)((int)puVar104 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar104 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar104 + 3) = *puVar90;
                    puVar104 = (undefined8 *)((int)puVar104 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar112;
                } while (puVar112 != param_1 + (param_2 >> 5) * 8);
                uVar99 = uVar106;
                if (uVar107 != uVar106) goto LAB_0001859c;
              }
              uVar105 = uVar105 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4 * 2);
              if (param_3 == uVar105) {
                return 0;
              }
            } while( true );
          }
          if (param_6 == 10) {
            if (param_3 == 0) {
              return 0;
            }
            uVar107 = param_2 >> 1;
            cVar94 = cVar95 * '\x05' + '@';
            if (uVar107 == 0) {
              return 0;
            }
            auVar5._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar5._0_8_ = 0x1000000010;
            auVar6._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar6._0_8_ = 0xc0000000c;
            auVar64._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
            auVar64._0_8_ = 0x101010101010101;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar70._8_8_ = uVar67;
            auVar70._0_8_ = uVar67;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar105 = 0;
            auVar123._8_8_ = DAT_00015c60;
            auVar123._0_8_ = DAT_00015c58;
            do {
              cVar98 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
              cVar93 = cVar95 * '\x03' + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_00015d94:
                uVar108 = uVar99 + 1;
                cVar92 = cVar93 + (char)uVar99 * '\x02';
                *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar92;
                *(char *)((int)param_1 + uVar99 * 4 + 3) = cVar92 + '\x01';
                *(char *)((int)param_1 + uVar99 * 4) = cVar98;
                *(char *)((int)param_1 + uVar99 * 4 + 2) = cVar94 + (char)uVar99;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  cVar92 = cVar93 + (char)uVar108 * '\x02';
                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                  *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar94 + (char)uVar108;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    cVar92 = cVar93 + (char)uVar109 * '\x02';
                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                    *(char *)((int)param_1 + uVar109 * 4) = cVar98;
                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar94 + (char)uVar109;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      cVar92 = cVar93 + (char)uVar108 * '\x02';
                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                      *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar94 + (char)uVar108;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        cVar92 = cVar93 + (char)uVar109 * '\x02';
                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                        *(char *)((int)param_1 + uVar109 * 4) = cVar98;
                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar94 + (char)uVar109;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          cVar92 = cVar93 + (char)uVar108 * '\x02';
                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                          *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                          *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                          *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar94 + (char)uVar108;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            cVar92 = cVar93 + (char)uVar109 * '\x02';
                            *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                            *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                            *(char *)((int)param_1 + uVar109 * 4) = cVar98;
                            *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar94 + (char)uVar109;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              cVar92 = cVar93 + (char)uVar108 * '\x02';
                              *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                              *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                              *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                              *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar94 + (char)uVar108;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                cVar92 = cVar93 + (char)uVar109 * '\x02';
                                *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                                *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                                *(char *)((int)param_1 + uVar109 * 4) = cVar98;
                                *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar94 + (char)uVar109;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  cVar92 = cVar93 + (char)uVar108 * '\x02';
                                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                                  *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar94 + (char)uVar108
                                  ;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    cVar92 = cVar93 + (char)uVar109 * '\x02';
                                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                                    *(char *)((int)param_1 + uVar109 * 4) = cVar98;
                                    *(char *)((int)param_1 + uVar109 * 4 + 2) =
                                         cVar94 + (char)uVar109;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      cVar92 = cVar93 + (char)uVar108 * '\x02';
                                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                                      *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                                      *(char *)((int)param_1 + uVar108 * 4 + 2) =
                                           cVar94 + (char)uVar108;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        cVar92 = cVar93 + (char)uVar109 * '\x02';
                                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                                        *(char *)((int)param_1 + uVar109 * 4) = cVar98;
                                        *(char *)((int)param_1 + uVar109 * 4 + 2) =
                                             cVar94 + (char)uVar109;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          cVar92 = cVar93 + (char)uVar108 * '\x02';
                                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                                          *(char *)((int)param_1 + uVar108 * 4 + 3) =
                                               cVar92 + '\x01';
                                          *(char *)((int)param_1 + uVar108 * 4) = cVar98;
                                          *(char *)((int)param_1 + uVar108 * 4 + 2) =
                                               cVar94 + (char)uVar108;
                                          if (uVar99 < uVar107) {
                                            cVar93 = cVar93 + (char)uVar99 * '\x02';
                                            *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar93;
                                            *(char *)((int)param_1 + uVar99 * 4 + 3) =
                                                 cVar93 + '\x01';
                                            *(char *)((int)param_1 + uVar99 * 4) = cVar98;
                                            *(char *)((int)param_1 + uVar99 * 4 + 2) =
                                                 cVar94 + (char)uVar99;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar93,cVar93),CONCAT11(cVar93,cVar93));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar71._8_8_ = uVar67;
                auVar71._0_8_ = uVar67;
                puVar104 = param_1;
                auVar133 = auVar123;
                do {
                  auVar7._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
                  auVar7._0_8_ = 0x800000008;
                  auVar8._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
                  auVar8._0_8_ = 0x400000004;
                  puVar112 = puVar104 + 8;
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar7 << 0x40 | auVar7),4);
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar8 << 0x40 | auVar8),4);
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar6 << 0x40 | auVar6),4);
                  auVar176._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar176._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar5 << 0x40 | auVar5),4);
                  auVar135._0_8_ = VectorCopyNarrow(auVar181,4);
                  auVar135._8_8_ = VectorCopyNarrow(auVar184,4);
                  auVar149._0_8_ = VectorCopyNarrow(auVar176,2);
                  auVar149._8_8_ = VectorCopyNarrow(auVar135,2);
                  auVar147 = VectorAdd(auVar149,auVar149,1);
                  VectorAdd(auVar149,auVar70,1);
                  auVar147 = VectorAdd(auVar147,auVar71,1);
                  VectorAdd(auVar147,*(undefined1 (*) [16])(auVar64 << 0x40 | auVar64),1);
                  puVar87 = (undefined1 *)0x3f0;
                  puVar88 = (undefined1 *)0x400;
                  puVar89 = (undefined1 *)0x410;
                  puVar90 = (undefined1 *)0x420;
                  lVar113 = 8;
                  puVar111 = puVar104;
                  while( true ) {
                    *(undefined1 *)puVar111 = *puVar87;
                    *(undefined1 *)((int)puVar111 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar111 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar111 + 3) = *puVar90;
                    puVar111 = (undefined8 *)((int)puVar111 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar104 + 4;
                  puVar87 = (undefined1 *)0x3f8;
                  puVar88 = (undefined1 *)0x408;
                  puVar89 = (undefined1 *)0x418;
                  puVar90 = (undefined1 *)0x428;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar104 = *puVar87;
                    *(undefined1 *)((int)puVar104 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar104 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar104 + 3) = *puVar90;
                    puVar104 = (undefined8 *)((int)puVar104 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar112;
                } while (puVar112 != param_1 + (param_2 >> 5) * 8);
                uVar99 = uVar106;
                if (uVar107 != uVar106) goto LAB_00015d94;
              }
              uVar105 = uVar105 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4 * 2);
              if (param_3 == uVar105) {
                return 0;
              }
            } while( true );
          }
        }
        else {
          if (param_6 == 0x11) {
            if (param_3 == 0) {
              return 0;
            }
            uVar107 = param_2 >> 1;
            cVar94 = cVar95 * '\x05' + '@';
            if (uVar107 == 0) {
              return 0;
            }
            auVar47._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar47._0_8_ = 0x1000000010;
            auVar48._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar48._0_8_ = 0x400000004;
            auVar49._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar49._0_8_ = 0x800000008;
            auVar50._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar50._0_8_ = 0xc0000000c;
            auVar65._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
            auVar65._0_8_ = 0x101010101010101;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar83._8_8_ = uVar67;
            auVar83._0_8_ = uVar67;
            uVar105 = 0;
            auVar127._8_8_ = DAT_00018008;
            auVar127._0_8_ = DAT_00018000;
            do {
              cVar98 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
              cVar93 = cVar95 * '\x03' + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_00018148:
                uVar108 = uVar99 + 1;
                cVar92 = cVar93 + (char)uVar99 * '\x02';
                *(char *)((int)param_1 + uVar99 * 4) = cVar92;
                *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar94 + (char)uVar99;
                *(char *)((int)param_1 + uVar99 * 4 + 2) = cVar92 + '\x01';
                *(char *)((int)param_1 + uVar99 * 4 + 3) = cVar98;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  cVar92 = cVar93 + (char)uVar108 * '\x02';
                  *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar94 + (char)uVar108;
                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    cVar92 = cVar93 + (char)uVar109 * '\x02';
                    *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar94 + (char)uVar109;
                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar98;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      cVar92 = cVar93 + (char)uVar108 * '\x02';
                      *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar94 + (char)uVar108;
                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        cVar92 = cVar93 + (char)uVar109 * '\x02';
                        *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar94 + (char)uVar109;
                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar98;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          cVar92 = cVar93 + (char)uVar108 * '\x02';
                          *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar94 + (char)uVar108;
                          *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                          *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            cVar92 = cVar93 + (char)uVar109 * '\x02';
                            *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                            *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar94 + (char)uVar109;
                            *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                            *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar98;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              cVar92 = cVar93 + (char)uVar108 * '\x02';
                              *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                              *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar94 + (char)uVar108;
                              *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                              *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                cVar92 = cVar93 + (char)uVar109 * '\x02';
                                *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                                *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar94 + (char)uVar109;
                                *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                                *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar98;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  cVar92 = cVar93 + (char)uVar108 * '\x02';
                                  *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar94 + (char)uVar108
                                  ;
                                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    cVar92 = cVar93 + (char)uVar109 * '\x02';
                                    *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                                    *(char *)((int)param_1 + uVar109 * 4 + 1) =
                                         cVar94 + (char)uVar109;
                                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar98;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      cVar92 = cVar93 + (char)uVar108 * '\x02';
                                      *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                                      *(char *)((int)param_1 + uVar108 * 4 + 1) =
                                           cVar94 + (char)uVar108;
                                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar92 + '\x01';
                                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        cVar92 = cVar93 + (char)uVar109 * '\x02';
                                        *(char *)((int)param_1 + uVar109 * 4) = cVar92;
                                        *(char *)((int)param_1 + uVar109 * 4 + 1) =
                                             cVar94 + (char)uVar109;
                                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar92 + '\x01';
                                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar98;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          cVar92 = cVar93 + (char)uVar108 * '\x02';
                                          *(char *)((int)param_1 + uVar108 * 4) = cVar92;
                                          *(char *)((int)param_1 + uVar108 * 4 + 1) =
                                               cVar94 + (char)uVar108;
                                          *(char *)((int)param_1 + uVar108 * 4 + 2) =
                                               cVar92 + '\x01';
                                          *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar98;
                                          if (uVar99 < uVar107) {
                                            cVar93 = cVar93 + (char)uVar99 * '\x02';
                                            *(char *)((int)param_1 + uVar99 * 4) = cVar93;
                                            *(char *)((int)param_1 + uVar99 * 4 + 1) =
                                                 cVar94 + (char)uVar99;
                                            *(char *)((int)param_1 + uVar99 * 4 + 2) =
                                                 cVar93 + '\x01';
                                            *(char *)((int)param_1 + uVar99 * 4 + 3) = cVar98;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar93,cVar93),CONCAT11(cVar93,cVar93));
                auVar96._12_4_ = uVar91;
                auVar96._8_4_ = uVar91;
                puVar104 = param_1;
                auVar133 = auVar127;
                do {
                  auVar181 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar48 << 0x40 | auVar48),4)
                  ;
                  auVar147 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar50 << 0x40 | auVar50),4)
                  ;
                  puVar112 = puVar104 + 8;
                  auVar184 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar49 << 0x40 | auVar49),4)
                  ;
                  auVar186._0_8_ = VectorCopyNarrow(auVar133,4);
                  auVar186._8_8_ = VectorCopyNarrow(auVar181,4);
                  auVar133 = VectorAdd(auVar133,*(undefined1 (*) [16])(auVar47 << 0x40 | auVar47),4)
                  ;
                  auVar182._0_8_ = VectorCopyNarrow(auVar184,4);
                  auVar182._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar130._0_8_ = VectorCopyNarrow(auVar186,2);
                  auVar130._8_8_ = VectorCopyNarrow(auVar182,2);
                  auVar96._4_4_ = uVar91;
                  auVar96._0_4_ = uVar91;
                  auVar147 = VectorAdd(auVar130,auVar130,1);
                  VectorAdd(auVar130,auVar83,1);
                  auVar147 = VectorAdd(auVar147,auVar96,1);
                  VectorAdd(auVar147,*(undefined1 (*) [16])(auVar65 << 0x40 | auVar65),1);
                  puVar87 = (undefined1 *)0x380;
                  puVar88 = (undefined1 *)0x390;
                  puVar89 = (undefined1 *)0x3a0;
                  puVar90 = (undefined1 *)0x3b0;
                  lVar113 = 8;
                  puVar111 = puVar104;
                  while( true ) {
                    *(undefined1 *)puVar111 = *puVar87;
                    *(undefined1 *)((int)puVar111 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar111 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar111 + 3) = *puVar90;
                    puVar111 = (undefined8 *)((int)puVar111 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar104 + 4;
                  puVar87 = (undefined1 *)0x388;
                  puVar88 = (undefined1 *)0x398;
                  puVar89 = (undefined1 *)0x3a8;
                  puVar90 = (undefined1 *)0x3b8;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar104 = *puVar87;
                    *(undefined1 *)((int)puVar104 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar104 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar104 + 3) = *puVar90;
                    puVar104 = (undefined8 *)((int)puVar104 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar112;
                } while (puVar112 != param_1 + (param_2 >> 5) * 8);
                uVar99 = uVar106;
                if (uVar107 != uVar106) goto LAB_00018148;
              }
              uVar105 = uVar105 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4 * 2);
              if (param_3 == uVar105) {
                return 0;
              }
            } while( true );
          }
          if (param_6 == 0x12) {
            if (param_3 == 0) {
              return 0;
            }
            uVar107 = param_2 >> 1;
            cVar94 = cVar95 * '\x05' + '@';
            if (uVar107 == 0) {
              return 0;
            }
            auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar1._0_8_ = 0x400000004;
            auVar2._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar2._0_8_ = 0x800000008;
            auVar3._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
            auVar3._0_8_ = 0xc0000000c;
            auVar63._8_8_ = SUB158(SUB1615((undefined1  [16])0x0,1),7);
            auVar63._0_8_ = 0x101010101010101;
            uVar91 = CONCAT22(CONCAT11(cVar94,cVar94),CONCAT11(cVar94,cVar94));
            uVar67 = CONCAT44(uVar91,uVar91);
            auVar68._8_8_ = uVar67;
            auVar68._0_8_ = uVar67;
            uVar106 = (param_2 >> 5) * 0x10;
            uVar105 = 0;
            do {
              cVar93 = cVar95 * '\x02' + -0x80 + (char)(uVar105 >> 1);
              cVar98 = cVar95 * '\x03' + (char)uVar105;
              if (uVar107 - 1 < 0xf) {
                uVar99 = 0;
LAB_00015930:
                uVar108 = uVar99 + 1;
                cVar92 = cVar98 + (char)uVar99 * '\x02';
                *(char *)((int)param_1 + uVar99 * 4 + 2) = cVar93;
                *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar92;
                *(char *)((int)param_1 + uVar99 * 4 + 3) = cVar92 + '\x01';
                *(char *)((int)param_1 + uVar99 * 4) = cVar94 + (char)uVar99;
                if (uVar108 < uVar107) {
                  uVar109 = uVar99 + 2;
                  cVar92 = cVar98 + (char)uVar108 * '\x02';
                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                  *(char *)((int)param_1 + uVar108 * 4) = cVar94 + (char)uVar108;
                  if (uVar109 < uVar107) {
                    uVar108 = uVar99 + 3;
                    cVar92 = cVar98 + (char)uVar109 * '\x02';
                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar93;
                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                    *(char *)((int)param_1 + uVar109 * 4) = cVar94 + (char)uVar109;
                    if (uVar108 < uVar107) {
                      uVar109 = uVar99 + 4;
                      cVar92 = cVar98 + (char)uVar108 * '\x02';
                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                      *(char *)((int)param_1 + uVar108 * 4) = cVar94 + (char)uVar108;
                      if (uVar109 < uVar107) {
                        uVar108 = uVar99 + 5;
                        cVar92 = cVar98 + (char)uVar109 * '\x02';
                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar93;
                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                        *(char *)((int)param_1 + uVar109 * 4) = cVar94 + (char)uVar109;
                        if (uVar108 < uVar107) {
                          uVar109 = uVar99 + 6;
                          cVar92 = cVar98 + (char)uVar108 * '\x02';
                          *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                          *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                          *(char *)((int)param_1 + uVar108 * 4) = cVar94 + (char)uVar108;
                          if (uVar109 < uVar107) {
                            uVar108 = uVar99 + 7;
                            cVar92 = cVar98 + (char)uVar109 * '\x02';
                            *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar93;
                            *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                            *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                            *(char *)((int)param_1 + uVar109 * 4) = cVar94 + (char)uVar109;
                            if (uVar108 < uVar107) {
                              uVar109 = uVar99 + 8;
                              cVar92 = cVar98 + (char)uVar108 * '\x02';
                              *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                              *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                              *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                              *(char *)((int)param_1 + uVar108 * 4) = cVar94 + (char)uVar108;
                              if (uVar109 < uVar107) {
                                uVar108 = uVar99 + 9;
                                cVar92 = cVar98 + (char)uVar109 * '\x02';
                                *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar93;
                                *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                                *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                                *(char *)((int)param_1 + uVar109 * 4) = cVar94 + (char)uVar109;
                                if (uVar108 < uVar107) {
                                  uVar109 = uVar99 + 10;
                                  cVar92 = cVar98 + (char)uVar108 * '\x02';
                                  *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                                  *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                                  *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                                  *(char *)((int)param_1 + uVar108 * 4) = cVar94 + (char)uVar108;
                                  if (uVar109 < uVar107) {
                                    uVar108 = uVar99 + 0xb;
                                    cVar92 = cVar98 + (char)uVar109 * '\x02';
                                    *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar93;
                                    *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                                    *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                                    *(char *)((int)param_1 + uVar109 * 4) = cVar94 + (char)uVar109;
                                    if (uVar108 < uVar107) {
                                      uVar109 = uVar99 + 0xc;
                                      cVar92 = cVar98 + (char)uVar108 * '\x02';
                                      *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                                      *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                                      *(char *)((int)param_1 + uVar108 * 4 + 3) = cVar92 + '\x01';
                                      *(char *)((int)param_1 + uVar108 * 4) = cVar94 + (char)uVar108
                                      ;
                                      if (uVar109 < uVar107) {
                                        uVar108 = uVar99 + 0xd;
                                        cVar92 = cVar98 + (char)uVar109 * '\x02';
                                        *(char *)((int)param_1 + uVar109 * 4 + 2) = cVar93;
                                        *(char *)((int)param_1 + uVar109 * 4 + 1) = cVar92;
                                        *(char *)((int)param_1 + uVar109 * 4 + 3) = cVar92 + '\x01';
                                        *(char *)((int)param_1 + uVar109 * 4) =
                                             cVar94 + (char)uVar109;
                                        if (uVar108 < uVar107) {
                                          uVar99 = uVar99 + 0xe;
                                          cVar92 = cVar98 + (char)uVar108 * '\x02';
                                          *(char *)((int)param_1 + uVar108 * 4 + 2) = cVar93;
                                          *(char *)((int)param_1 + uVar108 * 4 + 1) = cVar92;
                                          *(char *)((int)param_1 + uVar108 * 4 + 3) =
                                               cVar92 + '\x01';
                                          *(char *)((int)param_1 + uVar108 * 4) =
                                               cVar94 + (char)uVar108;
                                          if (uVar99 < uVar107) {
                                            cVar98 = cVar98 + (char)uVar99 * '\x02';
                                            *(char *)((int)param_1 + uVar99 * 4 + 2) = cVar93;
                                            *(char *)((int)param_1 + uVar99 * 4 + 1) = cVar98;
                                            *(char *)((int)param_1 + uVar99 * 4 + 3) =
                                                 cVar98 + '\x01';
                                            *(char *)((int)param_1 + uVar99 * 4) =
                                                 cVar94 + (char)uVar99;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar91 = CONCAT22(CONCAT11(cVar98,cVar98),CONCAT11(cVar98,cVar98));
                uVar67 = CONCAT44(uVar91,uVar91);
                auVar69._8_8_ = uVar67;
                auVar69._0_8_ = uVar67;
                auVar132._8_8_ = DAT_00015c60;
                auVar132._0_8_ = DAT_00015c58;
                puVar104 = param_1;
                do {
                  auVar133 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar1 << 0x40 | auVar1),4);
                  auVar147 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar3 << 0x40 | auVar3),4);
                  puVar112 = puVar104 + 8;
                  auVar184 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar2 << 0x40 | auVar2),4);
                  auVar175._0_8_ = VectorCopyNarrow(auVar132,4);
                  auVar175._8_8_ = VectorCopyNarrow(auVar133,4);
                  auVar4._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
                  auVar4._0_8_ = 0x1000000010;
                  auVar132 = VectorAdd(auVar132,*(undefined1 (*) [16])(auVar4 << 0x40 | auVar4),4);
                  auVar134._0_8_ = VectorCopyNarrow(auVar184,4);
                  auVar134._8_8_ = VectorCopyNarrow(auVar147,4);
                  auVar148._0_8_ = VectorCopyNarrow(auVar175,2);
                  auVar148._8_8_ = VectorCopyNarrow(auVar134,2);
                  auVar133 = VectorAdd(auVar148,auVar148,1);
                  VectorAdd(auVar148,auVar68,1);
                  auVar133 = VectorAdd(auVar133,auVar69,1);
                  VectorAdd(auVar133,*(undefined1 (*) [16])(auVar63 << 0x40 | auVar63),1);
                  puVar87 = (undefined1 *)0x330;
                  puVar88 = (undefined1 *)0x340;
                  puVar89 = (undefined1 *)0x350;
                  puVar90 = (undefined1 *)0x360;
                  lVar113 = 8;
                  puVar111 = puVar104;
                  while( true ) {
                    *(undefined1 *)puVar111 = *puVar87;
                    *(undefined1 *)((int)puVar111 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar111 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar111 + 3) = *puVar90;
                    puVar111 = (undefined8 *)((int)puVar111 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar104 + 4;
                  puVar87 = (undefined1 *)0x338;
                  puVar88 = (undefined1 *)0x348;
                  puVar89 = (undefined1 *)0x358;
                  puVar90 = (undefined1 *)0x368;
                  lVar113 = 8;
                  while( true ) {
                    *(undefined1 *)puVar104 = *puVar87;
                    *(undefined1 *)((int)puVar104 + 1) = *puVar88;
                    *(undefined1 *)((int)puVar104 + 2) = *puVar89;
                    *(undefined1 *)((int)puVar104 + 3) = *puVar90;
                    puVar104 = (undefined8 *)((int)puVar104 + 4);
                    lVar113 = lVar113 + -1;
                    if (lVar113 == 0) break;
                    puVar87 = puVar87 + 1;
                    puVar88 = puVar88 + 1;
                    puVar89 = puVar89 + 1;
                    puVar90 = puVar90 + 1;
                  }
                  puVar104 = puVar112;
                } while (puVar112 != param_1 + (param_2 >> 5) * 8);
                uVar99 = uVar106;
                if (uVar107 != uVar106) goto LAB_00015930;
              }
              uVar105 = uVar105 + 1;
              param_1 = (undefined8 *)((int)param_1 + param_4 * 2);
              if (param_3 == uVar105) {
                return 0;
              }
            } while( true );
          }
        }
      }
      goto LAB_000172a8;
    }
  }
  else if (param_6 < 0x1000e) {
    if (param_6 < 0x1000a) {
      if (0x10007 < param_6) {
LAB_00016c20:
        pcVar102 = *(code **)(fill_rgb_funcs + (param_6 - 0x10000) * 4);
        if (DAT_0002d1d8 == 0) {
          if ((int)param_4 < (int)(param_2 * 4)) {
            RK_LOG(3,0x17171700,
                   "warning: stride by bytes %d is smarller than width %d mutiple by pixel size %d",
                   "util_check_stride_by_pixel",0x1bf,param_4,param_2,4);
            RK_LOG(3,0x17171700,"multiple stride %d by pixel size %d and set new byte stride to %d",
                   "util_check_stride_by_pixel",0x1c1,param_4,4,param_4 << 2);
            goto LAB_00018e24;
          }
        }
        else {
LAB_00018e24:
          local_110 = param_4 << 2;
          DAT_0002d1d8 = 1;
        }
        if (DAT_0002d1d4 == 0) {
          uVar107 = local_110 + 0x1f & 0xffffffe0;
          if (local_110 == uVar107) goto LAB_00016cf8;
          RK_LOG(3,0x17171700,
                 "warning: vepu only support 8 aligned horizontal stride in pixel for %s with pixel size %d"
                 ,"util_check_8_pixel_aligned",0x1cd,"32bit RGB",4);
          RK_LOG(3,0x17171700,"set byte stride to %d to match the requirement",
                 "util_check_8_pixel_aligned",0x1cf,uVar107);
        }
        local_110 = local_110 + 0x1f & 0xffffffe0;
        DAT_0002d1d4 = 1;
LAB_00016cf8:
        if (param_3 == 0) {
          return 0;
        }
        param_7 = param_7 & 0xff;
        if (param_2 == 0) {
          return 0;
        }
        local_b4 = 0;
        do {
          uVar107 = 0;
          iVar110 = ((param_7 * 2 - 0x80 & 0xff) + (int)local_b4 / 2 & 0xff) - 0x80;
          puVar104 = local_b0;
          do {
            while( true ) {
              iVar101 = ((param_7 * 5 + 0x40 & 0xff) + ((int)uVar107 >> 1) & 0xff) - 0x80;
              uVar106 = ((param_7 * 3 & 0xff) + local_b4 & 0xff) + uVar107 & 0xff;
              iVar100 = uVar106 + (iVar101 * 0x168 >> 8);
              iVar103 = uVar106 - (iVar101 * 0xb8 + iVar110 * 0x58 >> 8);
              iVar101 = 0;
              if ((-1 < iVar100) && (iVar101 = iVar100, 0xfe < iVar100)) {
                iVar101 = 0xff;
              }
              iVar100 = 0;
              if ((-1 < iVar103) && (iVar100 = iVar103, 0xfe < iVar103)) {
                iVar100 = 0xff;
              }
              if ((int)(uVar106 + (iVar110 * 0x1c7 >> 8)) < 0) break;
              uVar107 = uVar107 + 1;
              (*pcVar102)();
              puVar104 = (undefined8 *)((int)puVar104 + 4);
              if (param_2 == uVar107) goto LAB_00016e40;
            }
            uVar107 = uVar107 + 1;
            (*pcVar102)(puVar104,iVar101,iVar100,0,1);
            puVar104 = (undefined8 *)((int)puVar104 + 4);
          } while (param_2 != uVar107);
LAB_00016e40:
          local_b0 = (undefined8 *)((int)local_b0 + local_110);
          local_b4 = local_b4 + 1;
          if (param_3 == local_b4) {
            return 0;
          }
        } while( true );
      }
      pcVar102 = *(code **)(fill_rgb_funcs + (param_6 - 0x10000) * 4);
      if (DAT_0002d1d8 == 0) {
        if ((int)param_4 < (int)(param_2 * 3)) {
          iVar110 = param_4 * 2;
          RK_LOG(3,0x17171700,
                 "warning: stride by bytes %d is smarller than width %d mutiple by pixel size %d",
                 "util_check_stride_by_pixel",0x1bf,param_4,param_2,3);
          RK_LOG(3,0x17171700,"multiple stride %d by pixel size %d and set new byte stride to %d",
                 "util_check_stride_by_pixel",0x1c1,param_4,3,param_4 * 3);
          goto LAB_00018eb0;
        }
      }
      else {
        iVar110 = param_4 << 1;
LAB_00018eb0:
        local_110 = iVar110 + param_4;
        DAT_0002d1d8 = 1;
      }
      if (DAT_0002d1d4 == 0) {
        uVar107 = local_110 + 0x17 & 0xffffffe8;
        if (uVar107 == local_110) goto LAB_00016604;
        RK_LOG(3,0x17171700,
               "warning: vepu only support 8 aligned horizontal stride in pixel for %s with pixel size %d"
               ,"util_check_8_pixel_aligned",0x1cd,"24bit RGB",3);
        RK_LOG(3,0x17171700,"set byte stride to %d to match the requirement",
               "util_check_8_pixel_aligned",0x1cf,uVar107);
      }
      local_110 = local_110 + 0x17 & 0xffffffe8;
      DAT_0002d1d4 = 1;
LAB_00016604:
      if (param_3 == 0) {
        return 0;
      }
      param_7 = param_7 & 0xff;
      if (param_2 == 0) {
        return 0;
      }
      local_b4 = 0;
      do {
        uVar107 = 0;
        iVar110 = ((param_7 * 2 - 0x80 & 0xff) + (int)local_b4 / 2 & 0xff) - 0x80;
        puVar104 = local_b0;
        do {
          while( true ) {
            iVar101 = ((param_7 * 5 + 0x40 & 0xff) + ((int)uVar107 >> 1) & 0xff) - 0x80;
            uVar106 = ((param_7 * 3 & 0xff) + local_b4 & 0xff) + uVar107 & 0xff;
            iVar100 = uVar106 + (iVar101 * 0x168 >> 8);
            iVar103 = uVar106 - (iVar101 * 0xb8 + iVar110 * 0x58 >> 8);
            iVar101 = 0;
            if ((-1 < iVar100) && (iVar101 = iVar100, 0xfe < iVar100)) {
              iVar101 = 0xff;
            }
            iVar100 = 0;
            if ((-1 < iVar103) && (iVar100 = iVar103, 0xfe < iVar103)) {
              iVar100 = 0xff;
            }
            if ((int)(uVar106 + (iVar110 * 0x1c7 >> 8)) < 0) break;
            uVar107 = uVar107 + 1;
            (*pcVar102)();
            puVar104 = (undefined8 *)((int)puVar104 + 3);
            if (param_2 == uVar107) goto LAB_0001674c;
          }
          uVar107 = uVar107 + 1;
          (*pcVar102)(puVar104,iVar101,iVar100,0,1);
          puVar104 = (undefined8 *)((int)puVar104 + 3);
        } while (param_2 != uVar107);
LAB_0001674c:
        local_b0 = (undefined8 *)((int)local_b0 + local_110);
        local_b4 = local_b4 + 1;
        if (param_3 == local_b4) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    if (param_6 < 0x10010) {
LAB_000172a8:
      RK_LOG(2,0x17171700,"filling function do not support type %d\n","TEST_COMM_FillImage",0x2ea,
             param_6);
      return 0xffffffff;
    }
    if (param_6 < 0x10014) goto LAB_00016c20;
    if (0x10016 < param_6) goto LAB_000172a8;
  }
  pcVar102 = *(code **)(fill_rgb_funcs + (param_6 - 0x10000) * 4);
  if (DAT_0002d1d8 == 0) {
    if ((int)param_4 < (int)(param_2 * 2)) {
      RK_LOG(3,0x17171700,
             "warning: stride by bytes %d is smarller than width %d mutiple by pixel size %d",
             "util_check_stride_by_pixel",0x1bf,param_4,param_2,2);
      RK_LOG(3,0x17171700,"multiple stride %d by pixel size %d and set new byte stride to %d",
             "util_check_stride_by_pixel",0x1c1,param_4,2,param_4 << 1);
      goto LAB_00018da0;
    }
  }
  else {
LAB_00018da0:
    local_110 = param_4 << 1;
    DAT_0002d1d8 = 1;
  }
  if (DAT_0002d1d4 == 0) {
    uVar107 = local_110 + 0xf & 0xfffffff0;
    if (local_110 == uVar107) goto LAB_00016f54;
    RK_LOG(3,0x17171700,
           "warning: vepu only support 8 aligned horizontal stride in pixel for %s with pixel size %d"
           ,"util_check_8_pixel_aligned",0x1cd,"16bit RGB",2);
    RK_LOG(3,0x17171700,"set byte stride to %d to match the requirement",
           "util_check_8_pixel_aligned",0x1cf,uVar107);
  }
  local_110 = local_110 + 0xf & 0xfffffff0;
  DAT_0002d1d4 = 1;
LAB_00016f54:
  if (param_3 != 0) {
    param_7 = param_7 & 0xff;
    if (param_2 != 0) {
      local_b4 = 0;
      do {
        uVar107 = 0;
        iVar110 = ((param_7 * 2 - 0x80 & 0xff) + (int)local_b4 / 2 & 0xff) - 0x80;
        puVar104 = local_b0;
        do {
          while( true ) {
            iVar101 = ((param_7 * 5 + 0x40 & 0xff) + ((int)uVar107 >> 1) & 0xff) - 0x80;
            uVar106 = ((param_7 * 3 & 0xff) + local_b4 & 0xff) + uVar107 & 0xff;
            iVar100 = uVar106 + (iVar101 * 0x168 >> 8);
            iVar103 = uVar106 - (iVar101 * 0xb8 + iVar110 * 0x58 >> 8);
            iVar101 = 0;
            if ((-1 < iVar100) && (iVar101 = iVar100, 0xfe < iVar100)) {
              iVar101 = 0xff;
            }
            iVar100 = 0;
            if ((-1 < iVar103) && (iVar100 = iVar103, 0xfe < iVar103)) {
              iVar100 = 0xff;
            }
            if ((int)(uVar106 + (iVar110 * 0x1c7 >> 8)) < 0) break;
            uVar107 = uVar107 + 1;
            (*pcVar102)();
            puVar104 = (undefined8 *)((int)puVar104 + 2);
            if (param_2 == uVar107) goto LAB_0001709c;
          }
          uVar107 = uVar107 + 1;
          (*pcVar102)(puVar104,iVar101,iVar100,0,1);
          puVar104 = (undefined8 *)((int)puVar104 + 2);
        } while (param_2 != uVar107);
LAB_0001709c:
        local_b0 = (undefined8 *)((int)local_b0 + local_110);
        local_b4 = local_b4 + 1;
      } while (param_3 != local_b4);
    }
  }
  return 0;
}



/* ===== TEST_COMM_CompareImageFuzzy @ 00018fb8 size=1236 ===== */

undefined4 TEST_COMM_CompareImageFuzzy(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  uint uVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint in_fpscr;
  double in_d0;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  iVar4 = __aeabi_uidiv(param_3,param_4);
  uVar14 = param_4 * iVar4;
  if (param_5 == 0) {
    dVar24 = 0.0;
    dVar26 = 0.0;
    iVar4 = 0;
    uVar15 = 0;
  }
  else {
    auVar1._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar1._0_8_ = 0x100000001;
    auVar1 = *(undefined1 (*) [16])(auVar1 << 0x40 | auVar1);
    uVar11 = uVar14 & 0xfffffff0;
    auVar2._8_8_ = SUB128(SUB1612((undefined1  [16])0x0,4),4);
    auVar2._0_8_ = 0x2000000020;
    auVar2 = *(undefined1 (*) [16])(auVar2 << 0x40 | auVar2);
    iVar8 = 0;
    iVar16 = 0;
    iVar4 = 0;
    uVar15 = 0;
    do {
      if (uVar14 != 0) {
        if (uVar14 - 1 < 0xf) {
          uVar13 = 0;
          uVar10 = uVar13;
LAB_000190f4:
          iVar5 = (uint)*(byte *)(param_1 + uVar10 + iVar8) -
                  (uint)*(byte *)(param_2 + uVar10 + iVar8);
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          uVar6 = uVar10 + 1;
          if (0x20 < iVar5) {
            uVar13 = uVar13 + 1;
          }
          if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
            iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                    (uint)*(byte *)(param_2 + uVar6 + iVar8);
            uVar6 = uVar10 + 2;
            if (iVar5 < 0) {
              iVar5 = -iVar5;
            }
            if (0x20 < iVar5) {
              uVar13 = uVar13 + 1;
            }
            if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
              iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                      (uint)*(byte *)(param_2 + uVar6 + iVar8);
              uVar6 = uVar10 + 3;
              if (iVar5 < 0) {
                iVar5 = -iVar5;
              }
              if (0x20 < iVar5) {
                uVar13 = uVar13 + 1;
              }
              if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                        (uint)*(byte *)(param_2 + uVar6 + iVar8);
                uVar6 = uVar10 + 4;
                if (iVar5 < 0) {
                  iVar5 = -iVar5;
                }
                if (0x20 < iVar5) {
                  uVar13 = uVar13 + 1;
                }
                if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                  iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                          (uint)*(byte *)(param_2 + uVar6 + iVar8);
                  if (iVar5 < 0) {
                    iVar5 = -iVar5;
                  }
                  uVar6 = uVar10 + 5;
                  if (0x20 < iVar5) {
                    uVar13 = uVar13 + 1;
                  }
                  if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                    iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                            (uint)*(byte *)(param_2 + uVar6 + iVar8);
                    if (iVar5 < 0) {
                      iVar5 = -iVar5;
                    }
                    uVar6 = uVar10 + 6;
                    if (0x20 < iVar5) {
                      uVar13 = uVar13 + 1;
                    }
                    if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                      iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                              (uint)*(byte *)(param_2 + uVar6 + iVar8);
                      if (iVar5 < 0) {
                        iVar5 = -iVar5;
                      }
                      uVar6 = uVar10 + 7;
                      if (0x20 < iVar5) {
                        uVar13 = uVar13 + 1;
                      }
                      if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                        iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                (uint)*(byte *)(param_2 + uVar6 + iVar8);
                        if (iVar5 < 0) {
                          iVar5 = -iVar5;
                        }
                        uVar6 = uVar10 + 8;
                        if (0x20 < iVar5) {
                          uVar13 = uVar13 + 1;
                        }
                        if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                          iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                  (uint)*(byte *)(param_2 + uVar6 + iVar8);
                          if (iVar5 < 0) {
                            iVar5 = -iVar5;
                          }
                          uVar6 = uVar10 + 9;
                          if (0x20 < iVar5) {
                            uVar13 = uVar13 + 1;
                          }
                          if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                            iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                    (uint)*(byte *)(param_2 + uVar6 + iVar8);
                            if (iVar5 < 0) {
                              iVar5 = -iVar5;
                            }
                            uVar6 = uVar10 + 10;
                            if (0x20 < iVar5) {
                              uVar13 = uVar13 + 1;
                            }
                            if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                              iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                      (uint)*(byte *)(param_2 + uVar6 + iVar8);
                              if (iVar5 < 0) {
                                iVar5 = -iVar5;
                              }
                              uVar6 = uVar10 + 0xb;
                              if (0x20 < iVar5) {
                                uVar13 = uVar13 + 1;
                              }
                              if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                                iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                        (uint)*(byte *)(param_2 + uVar6 + iVar8);
                                if (iVar5 < 0) {
                                  iVar5 = -iVar5;
                                }
                                uVar6 = uVar10 + 0xc;
                                if (0x20 < iVar5) {
                                  uVar13 = uVar13 + 1;
                                }
                                if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                                  iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                          (uint)*(byte *)(param_2 + uVar6 + iVar8);
                                  if (iVar5 < 0) {
                                    iVar5 = -iVar5;
                                  }
                                  uVar6 = uVar10 + 0xd;
                                  if (0x20 < iVar5) {
                                    uVar13 = uVar13 + 1;
                                  }
                                  if (uVar6 <= uVar14 && uVar14 - uVar6 != 0) {
                                    uVar10 = uVar10 + 0xe;
                                    iVar5 = (uint)*(byte *)(param_1 + uVar6 + iVar8) -
                                            (uint)*(byte *)(param_2 + uVar6 + iVar8);
                                    if (iVar5 < 0) {
                                      iVar5 = -iVar5;
                                    }
                                    if (0x20 < iVar5) {
                                      uVar13 = uVar13 + 1;
                                    }
                                    if (uVar10 <= uVar14 && uVar14 - uVar10 != 0) {
                                      iVar5 = (uint)*(byte *)(param_1 + uVar10 + iVar8) -
                                              (uint)*(byte *)(param_2 + uVar10 + iVar8);
                                      if (iVar5 < 0) {
                                        iVar5 = -iVar5;
                                      }
                                      if (0x20 < iVar5) {
                                        uVar13 = uVar13 + 1;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          pauVar12 = (undefined1 (*) [16])(param_1 + iVar8);
          auVar28 = (undefined1  [16])0x0;
          puVar3 = *pauVar12;
          pauVar9 = (undefined1 (*) [16])(param_2 + iVar8);
          do {
            auVar17 = *pauVar12;
            pauVar12 = pauVar12 + 1;
            auVar19 = *pauVar9;
            pauVar9 = pauVar9 + 1;
            auVar29 = VectorCopyLong(auVar17._0_8_,1,1);
            auVar25 = VectorCopyLong(auVar17._8_8_,1,1);
            auVar18 = VectorCopyLong(auVar19._0_8_,1,1);
            auVar20 = VectorCopyLong(auVar19._8_8_,1,1);
            auVar23 = VectorCopyLong(auVar29._0_8_,2,1);
            auVar17 = VectorCopyLong(auVar18._0_8_,2,1);
            auVar29 = VectorCopyLong(auVar29._8_8_,2,1);
            auVar19 = VectorCopyLong(auVar18._8_8_,2,1);
            auVar30 = VectorCopyLong(auVar25._0_8_,2,1);
            auVar18 = VectorCopyLong(auVar20._0_8_,2,1);
            auVar23 = VectorSub(auVar23,auVar17,4);
            auVar29 = VectorSub(auVar29,auVar19,4);
            auVar25 = VectorCopyLong(auVar25._8_8_,2,1);
            auVar17 = VectorCopyLong(auVar20._8_8_,2,1);
            auVar19 = VectorAbsolute(auVar23,4);
            auVar20 = VectorAbsolute(auVar29,4);
            auVar23 = VectorSub(auVar30,auVar18,4);
            auVar18 = VectorSub(auVar25,auVar17,4);
            auVar23 = VectorAbsolute(auVar23,4);
            auVar17 = VectorCompareGreaterThanOrEqual(auVar2,auVar19,4,0);
            auVar20 = VectorCompareGreaterThanOrEqual(auVar2,auVar20,4,0);
            auVar19 = VectorAbsolute(auVar18,4);
            auVar23 = VectorCompareGreaterThanOrEqual(auVar2,auVar23,4,0);
            auVar17 = VectorBitwiseSelect(auVar17,(undefined1  [16])0x0,auVar1);
            auVar18 = VectorBitwiseSelect(auVar20,(undefined1  [16])0x0,auVar1);
            auVar19 = VectorCompareGreaterThanOrEqual(auVar2,auVar19,4,0);
            auVar20 = VectorBitwiseSelect(auVar23,(undefined1  [16])0x0,auVar1);
            auVar17 = VectorAdd(auVar17,auVar18,4);
            auVar19 = VectorBitwiseSelect(auVar19,(undefined1  [16])0x0,auVar1);
            auVar17 = VectorAdd(auVar17,auVar20,4);
            auVar17 = VectorAdd(auVar17,auVar19,4);
            auVar28 = VectorAdd(auVar28,auVar17,4);
          } while (pauVar12 != (undefined1 (*) [16])(puVar3 + uVar11));
          uVar27 = VectorAdd(auVar28._0_8_,auVar28._8_8_,4);
          uVar27 = VectorPairwiseAdd(uVar27,uVar27,4);
          uVar13 = (uint)uVar27;
          uVar10 = uVar11;
          if (uVar14 - uVar11 != 0) goto LAB_000190f4;
        }
        iVar4 = iVar4 + uVar13;
        if (uVar15 < uVar13) {
          uVar15 = uVar13;
        }
      }
      iVar16 = iVar16 + 1;
      iVar8 = iVar8 + param_3;
    } while (param_5 != iVar16);
    dVar26 = (double)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
    dVar24 = (double)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
  }
  dVar21 = (double)VectorUnsignedToFloat(uVar14,(byte)(in_fpscr >> 0x16) & 3);
  dVar22 = (double)VectorUnsignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
  RK_LOG(4,0x17171700,"max line diff(%d), stride(%d), diff rate act(%f) VS exp(%f)",
         "TEST_COMM_CompareImageFuzzy",0x30d,uVar15,uVar14);
  RK_LOG(4,0x17171700,"total pixel diff(%d), pixel number(%d), diff rate act(%f) VS exp(%f)",
         "TEST_COMM_CompareImageFuzzy",0x30f,iVar4,param_5 * uVar14);
  if (dVar24 / dVar21 <= in_d0 + in_d0) {
    uVar7 = 0;
  }
  else if (in_d0 * 0.5 < (dVar26 / dVar21) / dVar22) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



/* ===== TEST_SYS_CreateVideoFrame @ 0001948c size=220 ===== */

int TEST_SYS_CreateVideoFrame(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined8 local_1c;
  
  if (param_2 == 0 || param_1 == (undefined8 *)0x0) {
    return -1;
  }
  iVar1 = RK_MPI_CAL_VGS_GetPicBufferSize(param_1,&local_20);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_SYS_MmzAlloc_Cached(param_2,0,0,local_20);
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)(param_1 + 1);
      uVar4 = *(undefined4 *)((int)param_1 + 0xc);
      *(undefined8 *)(param_2 + 4) = *param_1;
      *(undefined8 *)(param_2 + 0xc) = local_1c;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x20) = uVar4;
      return 0;
    }
    uVar2 = 0x2e;
    pcVar3 = "RK_MPI_SYS_MmzAlloc_Cached";
  }
  else {
    pcVar3 = "VGS get pic size";
    uVar2 = 0x2a;
  }
  RK_LOG(2,0x17171700,&DAT_0001c03c,"TEST_SYS_CreateVideoFrame",uVar2,pcVar3,iVar1);
  return iVar1;
}



/* ===== TEST_SYS_AvsUnbindVenc @ 00019568 size=124 ===== */

undefined4 TEST_SYS_AvsUnbindVenc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 4;
  local_20 = 0x11;
  local_10 = 0;
  local_1c = param_1;
  local_18 = param_2;
  local_c = param_3;
  iVar1 = RK_MPI_SYS_UnBind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_AvsUnbindVenc",0x49,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_AvsBindVpss @ 000195e4 size=124 ===== */

undefined4 TEST_SYS_AvsBindVpss(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 6;
  local_20 = 0x11;
  local_c = 0;
  local_1c = param_1;
  local_18 = param_2;
  local_10 = param_3;
  iVar1 = RK_MPI_SYS_Bind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_AvsBindVpss",0x60,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_AvsUnbindVpss @ 00019660 size=124 ===== */

undefined4 TEST_SYS_AvsUnbindVpss(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 6;
  local_20 = 0x11;
  local_c = 0;
  local_1c = param_1;
  local_18 = param_2;
  local_10 = param_3;
  iVar1 = RK_MPI_SYS_UnBind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_AvsUnbindVpss",0x76,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_AvsBindVo @ 000196dc size=120 ===== */

undefined4
TEST_SYS_AvsBindVo(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 0x11;
  local_14 = 9;
  local_1c = param_1;
  local_18 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = RK_MPI_SYS_Bind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_AvsBindVo",0x8c,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_AvsUnbindVo @ 00019754 size=120 ===== */

undefined4
TEST_SYS_AvsUnbindVo(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 0x11;
  local_14 = 9;
  local_1c = param_1;
  local_18 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = RK_MPI_SYS_UnBind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_AvsUnbindVo",0xa2,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_ViBindAvs @ 000197cc size=120 ===== */

undefined4
TEST_SYS_ViBindAvs(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 8;
  local_14 = 0x11;
  local_1c = param_1;
  local_18 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = RK_MPI_SYS_Bind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_ViBindAvs",0xb8,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_ViUnbindAvs @ 00019844 size=120 ===== */

undefined4
TEST_SYS_ViUnbindAvs(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 8;
  local_14 = 0x11;
  local_1c = param_1;
  local_18 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = RK_MPI_SYS_UnBind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_ViUnbindAvs",0xce,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VpssBindAvs @ 000198bc size=120 ===== */

undefined4
TEST_SYS_VpssBindAvs(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 6;
  local_14 = 0x11;
  local_1c = param_1;
  local_18 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = RK_MPI_SYS_Bind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VpssBindAvs",0xe4,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VpssUnbindAvs @ 00019934 size=120 ===== */

undefined4
TEST_SYS_VpssUnbindAvs(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 6;
  local_14 = 0x11;
  local_1c = param_1;
  local_18 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = RK_MPI_SYS_UnBind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VpssUnbindAvs",0xfa,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VpssBindVo @ 000199ac size=120 ===== */

undefined4
TEST_SYS_VpssBindVo(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 6;
  local_14 = 9;
  local_1c = param_1;
  local_18 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = RK_MPI_SYS_Bind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VpssBindVo",0x110,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VpssUnbindVo @ 00019a24 size=120 ===== */

undefined4
TEST_SYS_VpssUnbindVo(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 6;
  local_14 = 9;
  local_1c = param_1;
  local_18 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = RK_MPI_SYS_UnBind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VpssUnbindVo",0x126,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VdecBindVpss @ 00019a9c size=120 ===== */

undefined4 TEST_SYS_VdecBindVpss(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 5;
  uStack_1c = 0;
  local_14 = 6;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  iVar1 = RK_MPI_SYS_Bind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VdecBindVpss",0x13c,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VdecUnbindVpss @ 00019b14 size=120 ===== */

undefined4 TEST_SYS_VdecUnbindVpss(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 5;
  uStack_1c = 0;
  local_14 = 6;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  iVar1 = RK_MPI_SYS_UnBind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VdecUnbindVpss",0x152,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VpssBindVenc @ 00019b8c size=124 ===== */

undefined4 TEST_SYS_VpssBindVenc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 4;
  local_20 = 6;
  local_10 = 0;
  local_1c = param_1;
  local_18 = param_2;
  local_c = param_3;
  iVar1 = RK_MPI_SYS_Bind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VpssBindVenc",0x168,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VpssUnbindVenc @ 00019c08 size=124 ===== */

undefined4 TEST_SYS_VpssUnbindVenc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 4;
  local_20 = 6;
  local_10 = 0;
  local_1c = param_1;
  local_18 = param_2;
  local_c = param_3;
  iVar1 = RK_MPI_SYS_UnBind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VpssUnbindVenc",0x17e,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VencBindVdec @ 00019c84 size=120 ===== */

undefined4 TEST_SYS_VencBindVdec(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_20 = 4;
  local_1c = 0;
  local_14 = 5;
  uStack_10 = 0;
  local_18 = param_1;
  local_c = param_2;
  iVar1 = RK_MPI_SYS_Bind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VencBindVdec",0x194,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VencUnbindVdec @ 00019cfc size=120 ===== */

undefined4 TEST_SYS_VencUnbindVdec(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_20 = 4;
  local_1c = 0;
  local_14 = 5;
  uStack_10 = 0;
  local_18 = param_1;
  local_c = param_2;
  iVar1 = RK_MPI_SYS_UnBind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VencUnbindVdec",0x1aa,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VdecBindVo @ 00019d74 size=120 ===== */

undefined4 TEST_SYS_VdecBindVo(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 5;
  uStack_1c = 0;
  local_14 = 9;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  iVar1 = RK_MPI_SYS_Bind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VdecBindVo",0x1c0,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_VdecUnbindVo @ 00019dec size=120 ===== */

undefined4 TEST_SYS_VdecUnbindVo(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 5;
  uStack_1c = 0;
  local_14 = 9;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  iVar1 = RK_MPI_SYS_UnBind(&local_20,&local_14);
  uVar2 = 0;
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"failed with %#x!","TEST_SYS_VdecUnbindVo",0x1d6,iVar1);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== TEST_SYS_FuzzyCompareFrameByFile @ 00019e64 size=452 ===== */

int TEST_SYS_FuzzyCompareFrameByFile(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_58;
  undefined4 local_50;
  
  memset(&local_70,0,0x50);
  local_78 = *(undefined8 *)(param_2 + 7);
  local_80 = *(undefined8 *)(param_2 + 3);
  VectorTranspose(local_78,4);
  iVar1 = RK_MPI_CAL_VGS_GetPicBufferSize(&local_80,&local_90);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_SYS_MmzAlloc_Cached(&local_70,0,0,local_90);
    if (iVar1 == 0) {
      local_58 = (undefined4)local_78;
      local_6c = local_80;
      local_64 = local_8c;
      local_50 = local_78._4_4_;
      iVar1 = TEST_COMM_FileReadOneFrame(param_1,&local_70);
      if (iVar1 == 0) {
        RK_MPI_SYS_MmzFlushCache(local_70,0);
        RK_MPI_SYS_MmzFlushCache(*param_2,0);
        uVar2 = RK_MPI_MB_Handle2VirAddr(*param_2);
        uVar3 = RK_MPI_MB_Handle2VirAddr(local_70);
        uVar4 = RK_MPI_CAL_COMM_GetHorStride(param_2[3],param_2[6]);
        iVar5 = TEST_COMM_CompareImageFuzzy(uVar2,uVar3,uVar4,param_2[1],param_2[2]);
        if (iVar5 != 0) {
          iVar1 = -1;
          RK_LOG(2,0x17171700,"image compare has too large different.",
                 "TEST_SYS_FuzzyCompareFrameByFile",0x1ff);
        }
      }
      RK_MPI_MB_ReleaseMB(local_70);
      return iVar1;
    }
    uVar2 = 0x2e;
    pcVar6 = "RK_MPI_SYS_MmzAlloc_Cached";
  }
  else {
    pcVar6 = "VGS get pic size";
    uVar2 = 0x2a;
  }
  RK_LOG(2,0x17171700,&DAT_0001c03c,"TEST_SYS_CreateVideoFrame",uVar2,pcVar6,iVar1);
  return iVar1;
}



/* ===== TEST_SYS_FuzzyCompareFrame @ 0001a028 size=500 ===== */

int TEST_SYS_FuzzyCompareFrame(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_58;
  undefined4 local_50;
  
  memset(&local_70,0,0x50);
  local_78 = *(undefined8 *)(param_1 + 7);
  local_80 = *(undefined8 *)(param_1 + 3);
  VectorTranspose(local_78,4);
  iVar1 = RK_MPI_CAL_VGS_GetPicBufferSize(&local_80,&local_90);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_SYS_MmzAlloc_Cached(&local_70,0,0,local_90);
    if (iVar1 == 0) {
      local_58 = (undefined4)local_78;
      local_64 = local_8c;
      local_50 = local_78._4_4_;
      local_6c = local_80;
      uVar2 = RK_MPI_MB_Handle2VirAddr(local_70);
      uVar7 = param_1[1];
      uVar6 = param_1[2];
      uVar3 = RK_MPI_CAL_COMM_GetHorStride(param_1[3],param_1[6]);
      iVar1 = TEST_COMM_FillImage(uVar2,uVar7,uVar6,uVar3,param_1[4],param_1[6],1);
      if (iVar1 == 0) {
        RK_MPI_SYS_MmzFlushCache(local_70,0);
        RK_MPI_SYS_MmzFlushCache(*param_1,0);
        uVar2 = RK_MPI_MB_Handle2VirAddr(*param_1);
        uVar3 = RK_MPI_MB_Handle2VirAddr(local_70);
        uVar6 = RK_MPI_CAL_COMM_GetHorStride(param_1[3],param_1[6]);
        iVar4 = TEST_COMM_CompareImageFuzzy(uVar2,uVar3,uVar6,param_1[1],param_1[2]);
        if (iVar4 != 0) {
          iVar1 = -1;
          RK_LOG(2,0x17171700,"image compare has too large different.","TEST_SYS_FuzzyCompareFrame",
                 0x230);
        }
      }
      RK_MPI_MB_ReleaseMB(local_70);
      return iVar1;
    }
    uVar2 = 0x2e;
    pcVar5 = "RK_MPI_SYS_MmzAlloc_Cached";
  }
  else {
    pcVar5 = "VGS get pic size";
    uVar2 = 0x2a;
  }
  RK_LOG(2,0x17171700,&DAT_0001c03c,"TEST_SYS_CreateVideoFrame",uVar2,pcVar5,iVar1);
  return iVar1;
}



/* ===== TEST_VPSS_Proc @ 0001a21c size=748 ===== */

undefined4 TEST_VPSS_Proc(int *param_1)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  __useconds_t __useconds;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_ec;
  size_t local_e8 [2];
  undefined4 uStack_e0;
  undefined8 local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  int local_b0;
  undefined4 local_a8;
  undefined4 local_78 [21];
  
  local_ec = 0;
  memset(&local_c8,0,0x50);
  memset(local_78,0,0x50);
  local_d0 = param_1[0xb];
  local_d8 = *(undefined8 *)(param_1 + 9);
  local_cc = 0;
  iVar1 = RK_MPI_CAL_VGS_GetPicBufferSize(&local_d8,local_e8);
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"get picture buffer size failed. err 0x%x","TEST_VPSS_Proc",0xe9,iVar1);
    return 0;
  }
  RK_MPI_MMZ_Alloc(&local_ec,local_e8[0],0);
  iVar1 = 0;
LAB_0001a2a4:
  iVar6 = *param_1;
  do {
    if (iVar6 != 1) {
      return 0;
    }
    if ((FILE *)param_1[1] == (FILE *)0x0) {
      uVar4 = RK_MPI_MB_Handle2VirAddr(local_ec);
      iVar8 = param_1[9];
      iVar6 = param_1[10];
      uVar5 = RK_MPI_CAL_COMM_GetHorStride(iVar8,param_1[0xb]);
      iVar6 = TEST_COMM_FillImage(uVar4,iVar8,iVar6,uVar5,uStack_e0,param_1[0xb],iVar1);
      if (iVar6 != 0) goto LAB_0001a47c;
    }
    else {
      iVar6 = fseek((FILE *)param_1[1],0,0);
      if (iVar6 != 0) {
        return 0;
      }
      pvVar2 = (void *)RK_MPI_MB_Handle2VirAddr(local_ec);
      sVar3 = fread(pvVar2,1,local_e8[0],(FILE *)param_1[1]);
      if ((int)sVar3 < 1) {
        RK_LOG(2,0x17171700,"read size is not enough. read %d, request %d","TEST_VPSS_Proc",0xf6,
               sVar3,local_e8[0]);
        return 0;
      }
    }
    RK_MPI_SYS_MmzFlushCache(local_ec,0);
    local_b0 = param_1[0xb];
    local_c8 = local_ec;
    local_c4 = *(undefined8 *)(param_1 + 9);
    local_a8 = 0;
    iVar6 = RK_MPI_VPSS_SendFrame(param_1[3],0,&local_c8,0xffffffff);
    if (iVar6 != 0) {
LAB_0001a47c:
      RK_MPI_MB_ReleaseMB(local_ec);
      return 0;
    }
    iVar1 = iVar1 + 1;
    uVar7 = 0;
    if (param_1[4] == 0) goto LAB_0001a2a4;
    do {
      iVar6 = RK_MPI_VPSS_GetChnFrame(param_1[3],uVar7,local_78,0xffffffff);
      if (iVar6 == 0) {
        RK_LOG(4,0x17171700,"get chn[%d] frame %p length %d","TEST_VPSS_Proc",0x11b,uVar7,
               local_78[0],local_e8[0]);
        if (param_1[2] != 0) {
          RK_MPI_SYS_MmzFlushCache(local_78[0],1);
          pvVar2 = (void *)RK_MPI_MB_Handle2VirAddr(local_78[0]);
          fwrite(pvVar2,1,local_e8[0],(FILE *)param_1[2]);
          fflush((FILE *)param_1[2]);
        }
        RK_MPI_VPSS_ReleaseChnFrame(param_1[3],uVar7,local_78);
        __useconds = __aeabi_uidiv(1000000,param_1[5]);
        usleep(__useconds);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)param_1[4]);
    iVar6 = *param_1;
  } while( true );
}



/* ===== TEST_VPSS_Start @ 0001a508 size=412 ===== */

int TEST_VPSS_Start(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = RK_MPI_VPSS_CreateGrp(param_1,param_3);
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"RK_MPI_VPSS_CreateGrp(grp:%d) failed with %#x!","TEST_VPSS_Start",0x3d,
           param_1,iVar1);
    return iVar1;
  }
  iVar1 = 0;
  if (param_2 != 0) {
    do {
      iVar2 = RK_MPI_VPSS_SetChnAttr(param_1,iVar1,param_4);
      iVar3 = iVar1 + 1;
      if (iVar2 != 0) {
        RK_LOG(2,0x17171700,"RK_MPI_VPSS_SetChnAttr failed with %#x","TEST_VPSS_Start",0x44,iVar2);
        return iVar2;
      }
      iVar1 = RK_MPI_VPSS_EnableChn(param_1,iVar1);
      if (iVar1 != 0) {
        RK_LOG(2,0x17171700,"RK_MPI_VPSS_EnableChn failed with %#x","TEST_VPSS_Start",0x4a,iVar1);
        return iVar1;
      }
      iVar1 = iVar3;
      param_4 = param_4 + 0x4c;
    } while (param_2 != iVar3);
  }
  iVar1 = RK_MPI_VPSS_StartGrp(param_1);
  if (iVar1 == 0) {
    iVar1 = RK_MPI_VPSS_ResetGrp(param_1);
    if (iVar1 != 0) {
      RK_LOG(2,0x17171700,"RK_MPI_VPSS_ResetGrp failed with %#x","TEST_VPSS_Start",0x56,iVar1);
    }
  }
  else {
    RK_LOG(2,0x17171700,"RK_MPI_VPSS_StartGrp failed with %#x","TEST_VPSS_Start",0x51,iVar1);
  }
  return iVar1;
}



/* ===== TEST_VPSS_Stop @ 0001a6a4 size=252 ===== */

int TEST_VPSS_Stop(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = 0;
    do {
      iVar1 = RK_MPI_VPSS_DisableChn(param_1,iVar2);
      iVar2 = iVar2 + 1;
      if (iVar1 != 0) {
        RK_LOG(2,0x17171700,"RK_MPI_VPSS_DisableChn failed with %#x!","TEST_VPSS_Stop",100,iVar1);
        return iVar1;
      }
    } while (iVar2 != param_2);
  }
  iVar2 = RK_MPI_VPSS_StopGrp(param_1);
  if (iVar2 == 0) {
    iVar2 = RK_MPI_VPSS_DestroyGrp(param_1);
    if (iVar2 != 0) {
      RK_LOG(2,0x17171700,"RK_MPI_VPSS_DestroyGrp failed with %#x!","TEST_VPSS_Stop",0x71,iVar2);
    }
    return iVar2;
  }
  RK_LOG(2,0x17171700,"RK_MPI_VPSS_StopGrp failed with %#x!","TEST_VPSS_Stop",0x6b,iVar2);
  return iVar2;
}



/* ===== TEST_VPSS_GrpSetZoom @ 0001a7a0 size=212 ===== */

int TEST_VPSS_GrpSetZoom(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  
  local_2c = RK_MPI_VPSS_GetGrpCrop(param_1,&local_30);
  if (local_2c != 0) {
    RK_LOG(2,0x17171700,"RK_MPI_VPSS_GetGrpCrop failed with %#x!","TEST_VPSS_GrpSetZoom",0x7e,
           local_2c);
    return local_2c;
  }
  local_28 = 500 - (param_2 >> 1);
  local_30 = param_3;
  local_24 = local_28;
  local_20 = param_2;
  local_1c = param_2;
  iVar1 = RK_MPI_VPSS_SetGrpCrop(param_1,&local_30);
  if (iVar1 == 0) {
    return 0;
  }
  RK_LOG(2,0x17171700,"RK_MPI_VPSS_SetGrpCrop failed with %#x!","TEST_VPSS_GrpSetZoom",0x8a,iVar1);
  return iVar1;
}



/* ===== TEST_VPSS_ChnSetZoom @ 0001a874 size=220 ===== */

int TEST_VPSS_ChnSetZoom(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  
  local_2c = RK_MPI_VPSS_GetChnCrop(param_1,param_2,&local_30);
  if (local_2c != 0) {
    RK_LOG(2,0x17171700,"RK_MPI_VPSS_GetChnCrop failed with %#x!","TEST_VPSS_ChnSetZoom",0x97,
           local_2c);
    return local_2c;
  }
  local_28 = 500 - (param_3 >> 1);
  local_30 = param_4;
  local_24 = local_28;
  local_20 = param_3;
  local_1c = param_3;
  iVar1 = RK_MPI_VPSS_SetChnCrop(param_1,param_2,&local_30);
  if (iVar1 == 0) {
    return 0;
  }
  RK_LOG(2,0x17171700,"RK_MPI_VPSS_SetChnCrop failed with %#x!","TEST_VPSS_ChnSetZoom",0xa3,iVar1);
  return iVar1;
}



/* ===== TEST_VPSS_SetChnRotation @ 0001a950 size=192 ===== */

int TEST_VPSS_SetChnRotation(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_1c [2];
  
  local_1c[0] = 0;
  iVar1 = RK_MPI_VPSS_GetChnRotation(param_1,param_2,local_1c);
  if (iVar1 != 0) {
    RK_LOG(2,0x17171700,"RK_MPI_VPSS_GetChnRotation failed with %#x!","TEST_VPSS_SetChnRotation",
           0xb0,iVar1);
    return iVar1;
  }
  iVar1 = RK_MPI_VPSS_SetChnRotation(param_1,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  RK_LOG(2,0x17171700,"RK_MPI_VPSS_SetChnRotation failed with %#x!","TEST_VPSS_SetChnRotation",0xb5,
         iVar1);
  return iVar1;
}



/* ===== TEST_VPSS_SetChnRotationEx @ 0001aa10 size=120 ===== */

int TEST_VPSS_SetChnRotationEx(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int local_2c [2];
  int local_24;
  
  if (param_3 != 0) {
    local_2c[0] = 1;
    local_24 = param_3;
    iVar1 = RK_MPI_VPSS_SetChnRotationEx(param_1,param_2,local_2c);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = RK_MPI_VPSS_GetChnRotationEx(param_1,param_2,local_2c);
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((local_2c[0] != 1) || (local_24 != param_3)) {
      return -1;
    }
  }
  return 0;
}



/* ===== TEST_VPSS_StartProc @ 0001aa88 size=300 ===== */

int TEST_VPSS_StartProc(int param_1,undefined4 param_2,undefined4 *param_3)

{
  FILE *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1 * 0x34;
  uVar4 = param_3[3];
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  *(undefined4 *)(&DAT_0002d1f8 + iVar5) = *param_3;
  *(undefined4 *)(&DAT_0002d1fc + iVar5) = uVar2;
  *(undefined4 *)(&DAT_0002d200 + iVar5) = uVar3;
  *(undefined4 *)(&DAT_0002d204 + iVar5) = uVar4;
  uVar2 = param_3[5];
  *(undefined4 *)(&DAT_0002d208 + iVar5) = param_3[4];
  *(undefined4 *)(&DAT_0002d20c + iVar5) = uVar2;
  if (*(char **)(&DAT_0002d1f8 + iVar5) != (char *)0x0) {
    pFVar1 = fopen64(*(char **)(&DAT_0002d1f8 + iVar5),"r");
    *(FILE **)(&DAT_0002d1e0 + iVar5) = pFVar1;
    if (pFVar1 == (FILE *)0x0) {
      uVar2 = *(undefined4 *)(&DAT_0002d1f8 + iVar5);
      uVar3 = 0x134;
      goto LAB_0001ab80;
    }
  }
  iVar6 = param_1 * 0x34;
  if (*(char **)(&DAT_0002d1fc + iVar6) != (char *)0x0) {
    pFVar1 = fopen64(*(char **)(&DAT_0002d1fc + iVar6),"wb");
    *(FILE **)(&DAT_0002d1e4 + iVar6) = pFVar1;
    if (pFVar1 == (FILE *)0x0) {
      uVar2 = *(undefined4 *)(&DAT_0002d1fc + iVar6);
      uVar3 = 0x13b;
LAB_0001ab80:
      RK_LOG(2,0x17171700,"can\'t open file %s!","TEST_VPSS_StartProc",uVar3,uVar2);
      return -1;
    }
  }
  uVar2 = param_3[5];
  iVar6 = param_1 * 0x34;
  *(undefined4 *)(&DAT_0002d1dc + iVar6) = 1;
  *(undefined4 *)(&DAT_0002d1f0 + iVar6) = uVar2;
  *(int *)(&DAT_0002d1e8 + iVar6) = param_1;
  *(undefined4 *)(&DAT_0002d1ec + iVar6) = param_2;
  iVar5 = pthread_create((pthread_t *)(&DAT_0002d1f4 + iVar5),(pthread_attr_t *)0x0,TEST_VPSS_Proc,
                         &DAT_0002d1dc + iVar5);
  return iVar5;
}



/* ===== TEST_VPSS_StopProc @ 0001abb4 size=128 ===== */

undefined4 TEST_VPSS_StopProc(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x34;
  if (*(int *)(&DAT_0002d1dc + iVar1) == 1) {
    *(undefined4 *)(&DAT_0002d1dc + iVar1) = 0;
    pthread_join(*(pthread_t *)(&DAT_0002d1f4 + iVar1),(void **)0x0);
    if (*(FILE **)(&DAT_0002d1e0 + iVar1) != (FILE *)0x0) {
      fclose(*(FILE **)(&DAT_0002d1e0 + iVar1));
      *(undefined4 *)(&DAT_0002d1e0 + iVar1) = 0;
    }
    if (*(FILE **)(&DAT_0002d1e4 + param_1 * 0x34) != (FILE *)0x0) {
      fclose(*(FILE **)(&DAT_0002d1e4 + param_1 * 0x34));
      *(undefined4 *)(&DAT_0002d1e4 + param_1 * 0x34) = 0;
      return 0;
    }
  }
  return 0;
}



/* ===== _fini @ 0001ac34 size=16 ===== */

void _fini(void)

{
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00031000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __register_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr0 @ 00031004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_unwind_cpp_pr1 @ 00031010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_unwind_cpp_pr1(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00031014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SendFrame @ 00031018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SendFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 0003101c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 00031020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetGrpFrame @ 00031024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetGrpFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00031028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fwrite @ 0003102c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_ReleaseChnFrame @ 00031030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_ReleaseChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fclose @ 00031034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memmove @ 00031038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 0003103c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetGrpCrop @ 00031040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetGrpCrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_join @ 00031044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnCrop @ 00031048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetChnCrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 0003104c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00031050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_DestroyPool @ 00031054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_DestroyPool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_COMM_GetHorStride @ 00031058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_COMM_GetHorStride(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0003105c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00031060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Bind @ 00031064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Bind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00031068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mkdir @ 0003106c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnRotation @ 00031070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetChnRotation(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DetachMbPool @ 00031074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_DetachMbPool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnFrame @ 00031078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetChnFrame(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StopGrp @ 0003107c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_StopGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fseek @ 00031080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnCrop @ 00031084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetChnCrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzFlushCache @ 00031088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzFlushCache(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_StartGrp @ 0003108c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_StartGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_CreateGrp @ 00031090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_CreateGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ftell @ 00031094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long ftell(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__errno_location @ 00031098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 0003109c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_CreatePool @ 000310a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_CreatePool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_LOG @ 000310a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_LOG(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DisableChn @ 000310a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_DisableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::exit @ 000310ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fflush @ 000310b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clock_gettime @ 000310b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::stat64 @ 000310b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat64(char *__file,stat64 *__buf)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnRotationEx @ 000310bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetChnRotationEx(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_AttachMbPool @ 000310c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_AttachMbPool(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetChnAttr @ 000310c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetChnAttr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_MmzAlloc_Cached @ 000310c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_MmzAlloc_Cached(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_DestroyGrp @ 000310cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_DestroyGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen64 @ 000310d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen64(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pthread_create @ 000310d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_CAL_VGS_GetPicBufferSize @ 000310d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_CAL_VGS_GetPicBufferSize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_SetVProcDev @ 000310dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_SetVProcDev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::malloc @ 000310e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Exit @ 000310e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Exit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__fputc_unlocked @ 000310e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __fputc_unlocked(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000310ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_ResetGrp @ 000310f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_ResetGrp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep @ 000310f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int usleep(__useconds_t __useconds)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getline @ 000310f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__ssize_t getline(char **__lineptr,size_t *__n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free @ 000310fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 00031100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtof @ 00031104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 00031108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_EnableChn @ 0003110c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_EnableChn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 00031110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_Handle2VirAddr @ 00031114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_Handle2VirAddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 00031118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtol @ 0003111c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnRotationEx @ 00031120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetChnRotationEx(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MMZ_Alloc @ 00031124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MMZ_Alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_UnBind @ 00031128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_UnBind(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_MB_ReleaseMB @ 0003112c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_MB_ReleaseMB(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00031130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fread @ 00031134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_SYS_Init @ 00031138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_SYS_Init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 0003113c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetGrpCrop @ 00031140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetGrpCrop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uldivmod @ 00031144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uldivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::RK_MPI_VPSS_GetChnRotation @ 00031148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void RK_MPI_VPSS_GetChnRotation(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


