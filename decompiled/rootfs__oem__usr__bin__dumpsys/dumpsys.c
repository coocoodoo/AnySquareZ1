// dumpsys — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== _init @ 00012d78 size=16 ===== */

int _init(EVP_PKEY_CTX *ctx)

{
  return (int)ctx;
}



/* ===== <EXTERNAL>::std::__throw_length_error @ 00012d9c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
  (*(code *)PTR___throw_length_error_0002700c)(param_1);
  return;
}



/* ===== <EXTERNAL>::__register_frame_info @ 00012da8 size=12 ===== */

void __register_frame_info(void)

{
  (*(code *)PTR___register_frame_info_00027010)();
  return;
}



/* ===== <EXTERNAL>::strtok_r @ 00012db4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok_r(char *__s,char *__delim,char **__save_ptr)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strtok_r_00027014)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::__errno_location @ 00012dc0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(code *)PTR___errno_location_00027018)();
  return piVar1;
}



/* ===== <EXTERNAL>::connect @ 00012dcc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_0002701c)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::std::__cxx11::string::operator= @ 00012dd8 size=12 ===== */

void __thiscall std::__cxx11::string::operator=(string *this,string *param_1)

{
  (*(code *)PTR_operator__00027020)(this);
  return;
}



/* ===== <EXTERNAL>::send @ 00012de4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_00027024)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::operator.delete @ 00012df0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00027028)(param_1);
  return;
}



/* ===== <EXTERNAL>::std::ios_base::Init::Init @ 00012dfc size=12 ===== */

void __thiscall std::ios_base::Init::Init(Init *this)

{
  (*(code *)PTR_Init_0002702c)(this);
  return;
}



/* ===== <EXTERNAL>::std::__cxx11::string::append @ 00012e08 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::append(char *param_1)

{
  (*(code *)PTR_append_00027030)(param_1);
  return;
}



/* ===== <EXTERNAL>::recv @ 00012e20 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_00027038)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::strlen @ 00012e2c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0002703c)(__s);
  return sVar1;
}



/* ===== <EXTERNAL>::snprintf @ 00012e38 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00027040)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::std::operator<< @ 00012e44 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_operator<<_00027044)(param_1);
  return poVar1;
}



/* ===== <EXTERNAL>::std::__cxx11::string::string @ 00012e50 size=12 ===== */

void __thiscall std::__cxx11::string::string(string *this,string *param_1)

{
  (*(code *)PTR_string_00027048)(this);
  return;
}



/* ===== <EXTERNAL>::access @ 00012e5c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_0002704c)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::std::__cxx11::string::_S_copy_chars @ 00012e68 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_S_copy_chars(char *param_1,char *param_2,char *param_3)

{
  (*(code *)PTR__S_copy_chars_00027050)(param_1);
  return;
}



/* ===== <EXTERNAL>::pclose @ 00012e74 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pclose_00027054)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::fopen @ 00012e80 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_00027058)(__filename);
  return pFVar1;
}



/* ===== <EXTERNAL>::write @ 00012e8c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0002705c)(__fd);
  return sVar1;
}



/* ===== <EXTERNAL>::close @ 00012e98 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00027060)(__fd);
  return iVar1;
}



/* ===== <EXTERNAL>::fputc @ 00012ea4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00027064)(__c);
  return iVar1;
}



/* ===== <EXTERNAL>::fgets @ 00012eb0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_00027068)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::strncpy @ 00012ebc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_0002706c)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::operator.new @ 00012ec8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00027070)(param_1);
  return pvVar1;
}



/* ===== <EXTERNAL>::fputs @ 00012ed4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00027074)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::operator.new[] @ 00012ee0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new__(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new___00027078)(param_1);
  return pvVar1;
}



/* ===== <EXTERNAL>::unlink @ 00012eec size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_0002707c)(__name);
  return iVar1;
}



/* ===== <EXTERNAL>::memset @ 00012ef8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00027080)(__s);
  return pvVar1;
}



/* ===== <EXTERNAL>::fprintf @ 00012f04 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00027084)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::inet_addr @ 00012f10 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

in_addr_t inet_addr(char *__cp)

{
  in_addr_t iVar1;
  
  iVar1 = (*(code *)PTR_inet_addr_00027088)(__cp);
  return iVar1;
}



/* ===== <EXTERNAL>::abort @ 00012f1c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0002708c)();
  return;
}



/* ===== <EXTERNAL>::vsnprintf @ 00012f28 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_00027090)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::isprint @ 00012f34 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isprint(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isprint_00027094)(param_1);
  return iVar1;
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_dispose @ 00012f40 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_dispose(void)

{
  (*(code *)PTR__M_dispose_00027098)();
  return;
}



/* ===== <EXTERNAL>::std::__throw_logic_error @ 00012f4c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_logic_error(char *param_1)

{
  (*(code *)PTR___throw_logic_error_0002709c)(param_1);
  return;
}



/* ===== <EXTERNAL>::socket @ 00012f58 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_000270a0)(__domain);
  return iVar1;
}



/* ===== <EXTERNAL>::operator.delete[] @ 00012f64 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete__(void *param_1)

{
  (*(code *)PTR_operator_delete___000270a4)(param_1);
  return;
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_create @ 00012f7c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_create(uint *param_1,uint param_2)

{
  (*(code *)PTR__M_create_000270ac)(param_1);
  return;
}



/* ===== <EXTERNAL>::std::__throw_bad_alloc @ 00012f88 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  (*(code *)PTR___throw_bad_alloc_000270b0)();
  return;
}



/* ===== <EXTERNAL>::strstr @ 00012f94 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strstr_000270b4)(__haystack);
  return pcVar1;
}



/* ===== <EXTERNAL>::strcmp @ 00012fa0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_000270b8)(__s1);
  return iVar1;
}



/* ===== <EXTERNAL>::std::__cxx11::string::append @ 00012fac size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::append(char *param_1,uint param_2)

{
  (*(code *)PTR_append_000270bc)(param_1);
  return;
}



/* ===== <EXTERNAL>::std::endl<char,std::char_traits<char>> @ 00012fb8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::endl<char,std::char_traits<char>>(ostream *param_1)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)(*(code *)PTR_endl<char,std_char_traits<char>>_000270c0)(param_1);
  return poVar1;
}



/* ===== <EXTERNAL>::std::__cxx11::string::string @ 00012fc4 size=12 ===== */

void __thiscall std::__cxx11::string::string(string *this,string *param_1)

{
  (*(code *)PTR_string_000270c4)(this);
  return;
}



/* ===== <EXTERNAL>::atoi @ 00012fd0 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_000270c8)(__nptr);
  return iVar1;
}



/* ===== <EXTERNAL>::strchr @ 00012fdc size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_000270cc)(__s);
  return pcVar1;
}



/* ===== <EXTERNAL>::getc @ 00012fe8 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getc_000270d0)(__stream);
  return iVar1;
}



/* ===== <EXTERNAL>::strerror @ 00012ff4 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_000270d4)(__errnum);
  return pcVar1;
}



/* ===== <EXTERNAL>::printf @ 00013000 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_000270d8)(__format);
  return iVar1;
}



/* ===== <EXTERNAL>::getopt_long @ 0001300c size=12 ===== */

void getopt_long(void)

{
  (*(code *)PTR_getopt_long_000270dc)();
  return;
}



/* ===== <EXTERNAL>::popen @ 00013018 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * popen(char *__command,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_popen_000270e0)(__command);
  return pFVar1;
}



/* ===== <EXTERNAL>::puts @ 00013024 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_000270e4)(__s);
  return iVar1;
}



/* ===== <EXTERNAL>::signal @ 00013030 size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_000270e8)(__sig);
  return p_Var1;
}



/* ===== <EXTERNAL>::strcpy @ 0001303c size=12 ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strcpy_000270ec)(__dest);
  return pcVar1;
}



/* ===== <EXTERNAL>::std::__cxx11::string::operator= @ 00013048 size=12 ===== */

void __thiscall std::__cxx11::string::operator=(string *this,char *param_1)

{
  (*(code *)PTR_operator__000270f0)(this);
  return;
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00013054 size=12 ===== */

void __deregister_frame_info(void)

{
  (*(code *)PTR___deregister_frame_info_000270f4)();
  return;
}



/* ===== main @ 00013060 size=84 ===== */

undefined4 main(int param_1,char **param_2)

{
  Dumpsys *this;
  undefined4 uVar1;
  
  signal(0xd,(__sighandler_t)0x1);
  this = operator_new(0x150);
  Dumpsys::Dumpsys(this);
  uVar1 = Dumpsys::start(this,param_1,param_2);
  Dumpsys::~Dumpsys(this);
  operator_delete(this);
  return uVar1;
}



/* ===== _INIT_1 @ 000130b4 size=68 ===== */

void _INIT_1(void)

{
  Init *this;
  int iVar1;
  
  this = (Init *)(DAT_000130f8 + 0x130c8);
  iVar1 = DAT_000130fc + 0x130cc;
  std::ios_base::Init::Init(this);
  (*(code *)PTR___aeabi_atexit_000270a8)
            (this,*(undefined4 *)(iVar1 + DAT_00013100),DAT_00013104 + 0x130e8);
  return;
}



/* ===== _INIT_2 @ 00013108 size=80 ===== */

void _INIT_2(void)

{
  Init *this;
  int iVar1;
  
  this = (Init *)(DAT_0001314c + 0x1311c);
  iVar1 = DAT_00013150 + 0x13120;
  std::ios_base::Init::Init(this);
  (*(code *)PTR___aeabi_atexit_000270a8)
            (this,*(undefined4 *)(iVar1 + DAT_00013154),DAT_00013158 + 0x1313c);
  return;
}



/* ===== _start @ 0001315c size=56 ===== */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR___uClibc_main_00027034)
            (DAT_00013190,param_2,&stack0x00000004,DAT_00013194,DAT_0001318c,param_1);
  return;
}



/* ===== FUN_00013198 @ 00013198 size=32 ===== */

void FUN_00013198(void)

{
  if (DAT_000131bc == DAT_000131b8) {
    return;
  }
  if (DAT_000131c0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000131b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000131c0)();
  return;
}



/* ===== _FINI_0 @ 000131fc size=60 ===== */

void _FINI_0(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_00013238;
  if (*DAT_00013238 != '\0') {
    return;
  }
  FUN_00013198();
  if (DAT_0001323c != 0) {
    __deregister_frame_info(DAT_00013240);
  }
  *pcVar1 = '\x01';
  return;
}



/* ===== _INIT_0 @ 00013244 size=80 ===== */

void _INIT_0(void)

{
  if (DAT_00013268 != 0) {
    __register_frame_info(DAT_00013270,DAT_0001326c);
  }
  if ((DAT_000131f4 - DAT_000131f0 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000131f8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000131ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000131f8)();
  return;
}



/* ===== FUN_00013274 @ 00013274 size=136 ===== */

/* WARNING: Control flow encountered bad instruction data */

uint * FUN_00013274(uint *param_1,char *param_2)

{
  uint uVar1;
  char *pcVar2;
  char *local_14;
  
  *param_1 = (uint)(param_1 + 2);
  local_14 = param_2;
  if (param_2 != (char *)0x0) {
    local_14 = (char *)strlen(param_2);
    pcVar2 = param_2 + (int)local_14;
    if ((char *)0xf < local_14) {
      uVar1 = std::__cxx11::string::_M_create(param_1,(uint)&local_14);
      param_1[2] = (uint)local_14;
      *param_1 = uVar1;
    }
    std::__cxx11::string::_S_copy_chars((char *)*param_1,param_2,pcVar2);
    param_1[1] = (uint)local_14;
    local_14[*param_1] = '\0';
    return param_1;
  }
  std::__throw_logic_error((char *)((int)&DAT_000132fc + DAT_000132fc));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== FUN_00013300 @ 00013300 size=88 ===== */

string * FUN_00013300(string *param_1,string *param_2,string *param_3)

{
  string *psVar1;
  string *this;
  
  this = param_3;
  for (psVar1 = param_1; psVar1 != param_2; psVar1 = psVar1 + 0x18) {
    std::__cxx11::string::string(this,psVar1);
    this = this + 0x18;
  }
  return param_3 + (DAT_00013358 * ((uint)((int)psVar1 - (int)param_1) >> 3) & 0x1fffffff) * 0x18;
}



/* ===== Dumpsys::Dumpsys @ 0001335c size=148 ===== */

/* Dumpsys::Dumpsys() */

Dumpsys * __thiscall Dumpsys::Dumpsys(Dumpsys *this)

{
  int iVar1;
  DumpClient *this_00;
  DumpVersion *this_01;
  DumpMemory *this_02;
  
  *(Dumpsys **)(this + 0x118) = this + 0x120;
  *(undefined4 *)(this + 0x11c) = 0;
  *(Dumpsys **)(this + 0x130) = this + 0x138;
  this[0x120] = (Dumpsys)0x0;
  *(undefined4 *)(this + 0x134) = 0;
  this[0x138] = (Dumpsys)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  this_00 = operator_new(0x3c);
  DumpClient::DumpClient(this_00);
  *(DumpClient **)this = this_00;
  this_01 = operator_new(8);
  DumpVersion::DumpVersion(this_01);
  *(DumpVersion **)(this + 4) = this_01;
  this_02 = operator_new(8);
  DumpMemory::DumpMemory(this_02);
  iVar1 = DAT_000133f0;
  *(DumpMemory **)(this + 8) = this_02;
  std::__cxx11::string::operator=((string *)(this + 0x130),(char *)(iVar1 + 0x133dc));
  this[0x14c] = (Dumpsys)0x0;
  *(undefined4 *)(this + 0x148) = 1;
  return this;
}



/* ===== Dumpsys::~Dumpsys @ 000133f4 size=152 ===== */

/* Dumpsys::~Dumpsys() */

Dumpsys * __thiscall Dumpsys::~Dumpsys(Dumpsys *this)

{
  if (*(int **)this != (int *)0x0) {
    (**(code **)(**(int **)this + 4))();
    *(undefined4 *)this = 0;
  }
  if (*(void **)(this + 0xc) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(int **)(this + 4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 4) + 4))();
    *(undefined4 *)(this + 4) = 0;
  }
  if (*(int **)(this + 8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 8) + 4))();
    *(undefined4 *)(this + 8) = 0;
  }
  std::__cxx11::string::_M_dispose();
  std::__cxx11::string::_M_dispose();
  return this;
}



/* ===== Dumpsys::InitDumpClient @ 0001348c size=32 ===== */

/* Dumpsys::InitDumpClient() */

undefined4 __thiscall Dumpsys::InitDumpClient(Dumpsys *this)

{
  undefined4 uVar1;
  
  if (*(DumpClient **)this != (DumpClient *)0x0) {
    uVar1 = DumpClient::sockClientOpen(*(DumpClient **)this,(char *)(DAT_000134ac + 0x134a4));
    return uVar1;
  }
  return 1;
}



/* ===== Dumpsys::DumpClientSendModule @ 000134b0 size=112 ===== */

/* Dumpsys::DumpClientSendModule() */

void __thiscall Dumpsys::DumpClientSendModule(Dumpsys *this)

{
  char acStack_410 [1028];
  
  memset(acStack_410,0,0x400);
  snprintf(acStack_410,0x400,(char *)(DAT_00013520 + 0x134f0),*(undefined4 *)(this + 0x130),
           *(undefined4 *)(this + 0x118));
  if (*(DumpClient **)this != (DumpClient *)0x0) {
    DumpClient::sendDump(*(DumpClient **)this,5,acStack_410,0x400);
  }
  return;
}



/* ===== Dumpsys::DumpClientReceiveDump @ 00013524 size=132 ===== */

/* Dumpsys::DumpClientReceiveDump() */

undefined4 __thiscall Dumpsys::DumpClientReceiveDump(Dumpsys *this)

{
  int iVar1;
  void *__s;
  char *pcVar2;
  size_t __n;
  
  if (*(DumpClient **)this != (DumpClient *)0x0) {
    iVar1 = DumpClient::receiveDumpMessage
                      (*(DumpClient **)this,(uint *)(this + 0x114),(uint *)(this + 0x110));
    if (iVar1 == 0) {
      return 0;
    }
    __s = operator_new__(*(uint *)(this + 0x110));
    __n = *(size_t *)(this + 0x110);
    *(void **)(this + 0xc) = __s;
    pcVar2 = memset(__s,0,__n);
    iVar1 = DumpClient::receiveDump(*(DumpClient **)this,pcVar2,__n);
    if (iVar1 == 0) {
      if (*(void **)(this + 0xc) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0xc));
      }
      *(undefined4 *)(this + 0xc) = 0;
      return 0;
    }
  }
  return 1;
}



/* ===== Dumpsys::generateJson @ 000135a8 size=324 ===== */

/* Dumpsys::generateJson(std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string > >&,
   std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string > >&) */

undefined4 __thiscall Dumpsys::generateJson(Dumpsys *this,vector *param_1,vector *param_2)

{
  Dumpsys *pDVar1;
  int iVar2;
  
  if (*(int *)param_1 == *(int *)(param_1 + 4)) {
LAB_00013650:
    if (*(int *)(param_2 + 4) == *(int *)param_2) goto LAB_00013660;
  }
  else {
    pDVar1 = this + 0x118;
    std::__cxx11::string::append((char *)pDVar1);
    std::__cxx11::string::append((char *)pDVar1);
    std::__cxx11::string::append((char *)pDVar1);
    std::__cxx11::string::append((char *)pDVar1);
    std::__cxx11::string::append((char *)pDVar1);
    if (*(int *)param_2 == *(int *)(param_2 + 4)) {
      std::__cxx11::string::append((char *)pDVar1);
      goto LAB_00013650;
    }
  }
  std::__cxx11::string::append((char *)(this + 0x118));
LAB_00013660:
  for (iVar2 = *(int *)param_2; *(int *)(param_2 + 4) != iVar2; iVar2 = iVar2 + 0x18) {
    pDVar1 = this + 0x118;
    std::__cxx11::string::append((char *)pDVar1);
    std::__cxx11::string::append((char *)pDVar1);
    std::__cxx11::string::append((char *)pDVar1);
    std::__cxx11::string::append((char *)pDVar1);
  }
  return 1;
}



/* ===== Dumpsys::writeDumpHeader @ 00013714 size=88 ===== */

/* Dumpsys::writeDumpHeader(int, char const*) */

undefined4 __thiscall Dumpsys::writeDumpHeader(Dumpsys *this,int param_1,char *param_2)

{
  string asStack_28 [24];
  
  FUN_00013274(asStack_28,DAT_0001376c + 0x13734);
  StringAppendF(asStack_28,(char *)(DAT_00013770 + 0x1374c),param_2);
  WriteStringToFd(asStack_28,param_1);
  std::__cxx11::string::_M_dispose();
  return 1;
}



/* ===== Dumpsys::writeDumpFooter @ 00013774 size=88 ===== */

/* Dumpsys::writeDumpFooter(int, char const*) */

undefined4 __thiscall Dumpsys::writeDumpFooter(Dumpsys *this,int param_1,char *param_2)

{
  string asStack_28 [24];
  
  FUN_00013274(asStack_28,DAT_000137cc + 0x13794);
  StringAppendF(asStack_28,(char *)(DAT_000137d0 + 0x137ac),param_2);
  WriteStringToFd(asStack_28,param_1);
  std::__cxx11::string::_M_dispose();
  return 1;
}



/* ===== Dumpsys::writeDump @ 000137d4 size=192 ===== */

/* Dumpsys::writeDump(int, char const*) */

int __thiscall Dumpsys::writeDump(Dumpsys *this,int param_1,char *param_2)

{
  int iVar1;
  ostream *poVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = DAT_00013894 + 0x137f0;
  if ((*(int *)this == 0) || (*(void **)(this + 0xc) == (void *)0x0)) {
    iVar1 = 1;
  }
  else {
    iVar1 = WriteFully(param_1,*(void **)(this + 0xc),*(uint *)(this + 0x110));
    if (iVar1 == 0) {
      poVar2 = std::operator<<(*(ostream **)(iVar5 + DAT_00013898),(char *)(DAT_0001389c + 0x1382c))
      ;
      poVar2 = std::operator<<(poVar2,param_2);
      poVar2 = std::operator<<(poVar2,(char *)(DAT_000138a0 + 0x13848));
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      poVar2 = std::operator<<(poVar2,pcVar4);
      std::endl<char,std::char_traits<char>>(poVar2);
    }
    if (*(void **)(this + 0xc) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0xc));
    }
    *(undefined4 *)(this + 0xc) = 0;
  }
  return iVar1;
}



/* ===== Dumpsys::writeDumpToStd @ 000138a4 size=68 ===== */

/* Dumpsys::writeDumpToStd() */

undefined4 __thiscall Dumpsys::writeDumpToStd(Dumpsys *this)

{
  undefined4 uVar1;
  Dumpsys *pDVar2;
  
  pDVar2 = this + 0x10;
  writeDumpHeader(this,1,(char *)pDVar2);
  uVar1 = writeDump(this,1,(char *)pDVar2);
  writeDumpFooter(this,1,(char *)pDVar2);
  return uVar1;
}



/* ===== std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::~vector @ 000138e8 size=60 ===== */

/* std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string > >::~vector() */

vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> * __thiscall
std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::~vector
          (vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 4);
  for (iVar1 = *(int *)this; iVar2 != iVar1; iVar1 = iVar1 + 0x18) {
    std::__cxx11::string::_M_dispose();
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  return this;
}



/* ===== std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::_M_check_len @ 00013924 size=92 ===== */

/* std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string > >::_M_check_len(unsigned
   int, char const*) const */

void __thiscall
std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::_M_check_len
          (vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this,uint param_1,
          char *param_2)

{
  uint extraout_r1;
  uint uVar1;
  uint extraout_r3;
  uint uVar2;
  uint extraout_r12;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = DAT_00013984 * (*(int *)(this + 4) - *(int *)this >> 3);
  uVar3 = DAT_00013980;
  if (DAT_00013980 - uVar1 < param_1) {
    UNRECOVERED_JUMPTABLE = (code *)0x13954;
    std::__throw_length_error(param_2);
    param_1 = extraout_r1;
    uVar1 = extraout_r3;
    uVar3 = extraout_r12;
  }
  if (param_1 < uVar1) {
    param_1 = uVar1;
  }
  uVar2 = uVar1 + param_1;
  if (uVar3 < uVar2 || CARRY4(uVar1,param_1)) {
    uVar2 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001397c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



/* ===== std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::_M_realloc_insert<std::__cxx11::string> @ 00013988 size=200 ===== */

/* void std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   >::_M_realloc_insert<std::__cxx11::string >(__gnu_cxx::__normal_iterator<std::__cxx11::string*,
   std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string > > >,
   std::__cxx11::string&&) */

void __thiscall
std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
_M_realloc_insert<std::__cxx11::string>
          (vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this,int param_2,
          string *param_3)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  
  uVar1 = _M_check_len(this,1,(char *)(DAT_00013a50 + 0x139a8));
  pvVar5 = *(void **)this;
  pvVar7 = *(void **)(this + 4);
  if (uVar1 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (DAT_00013a54 < uVar1) {
      std::__throw_bad_alloc();
    }
    pvVar2 = operator_new(uVar1 * 0x18);
  }
  std::__cxx11::string::string((string *)((int)pvVar2 + (param_2 - (int)pvVar5)),param_3);
  iVar3 = FUN_00013300(pvVar5,param_2,pvVar2);
  uVar4 = FUN_00013300(param_2,pvVar7,iVar3 + 0x18);
  for (pvVar6 = pvVar5; pvVar7 != pvVar6; pvVar6 = (void *)((int)pvVar6 + 0x18)) {
    std::__cxx11::string::_M_dispose();
  }
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  *(void **)this = pvVar2;
  *(undefined4 *)(this + 4) = uVar4;
  *(void **)(this + 8) = (void *)(uVar1 * 0x18 + (int)pvVar2);
  return;
}



/* ===== std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::emplace_back<std::__cxx11::string> @ 00013a58 size=60 ===== */

/* void std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   >::emplace_back<std::__cxx11::string >(std::__cxx11::string&&) */

void __thiscall
std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
emplace_back<std::__cxx11::string>
          (vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this,string *param_1)

{
  string *this_00;
  
  this_00 = *(string **)(this + 4);
  if (this_00 != *(string **)(this + 8)) {
    std::__cxx11::string::string(this_00,param_1);
    *(int *)(this + 4) = *(int *)(this + 4) + 0x18;
    return;
  }
  _M_realloc_insert<std::__cxx11::string>(this,this_00,param_1);
  return;
}



/* ===== std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::_M_realloc_insert<std::__cxx11::string_const&> @ 00013a94 size=200 ===== */

/* void std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   >::_M_realloc_insert<std::__cxx11::string
   const&>(__gnu_cxx::__normal_iterator<std::__cxx11::string*, std::vector<std::__cxx11::string,
   std::allocator<std::__cxx11::string > > >, std::__cxx11::string const&) */

void __thiscall
std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
_M_realloc_insert<std::__cxx11::string_const&>
          (vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this,int param_2,
          string *param_3)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  
  uVar1 = _M_check_len(this,1,(char *)(DAT_00013b5c + 0x13ab4));
  pvVar5 = *(void **)this;
  pvVar7 = *(void **)(this + 4);
  if (uVar1 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (DAT_00013b60 < uVar1) {
      std::__throw_bad_alloc();
    }
    pvVar2 = operator_new(uVar1 * 0x18);
  }
  std::__cxx11::string::string((string *)((int)pvVar2 + (param_2 - (int)pvVar5)),param_3);
  iVar3 = FUN_00013300(pvVar5,param_2,pvVar2);
  uVar4 = FUN_00013300(param_2,pvVar7,iVar3 + 0x18);
  for (pvVar6 = pvVar5; pvVar7 != pvVar6; pvVar6 = (void *)((int)pvVar6 + 0x18)) {
    std::__cxx11::string::_M_dispose();
  }
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  *(void **)this = pvVar2;
  *(undefined4 *)(this + 4) = uVar4;
  *(void **)(this + 8) = (void *)(uVar1 * 0x18 + (int)pvVar2);
  return;
}



/* ===== Dumpsys::start @ 00013b64 size=944 ===== */

/* Dumpsys::start(int, char* const*) */

undefined4 __thiscall Dumpsys::start(Dumpsys *this,int param_1,char **param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *__s1;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  string *local_48;
  string *local_44;
  string asStack_40 [28];
  
  local_58 = 0;
  local_54 = 0;
  iVar6 = DAT_00013f14 + 0x13b88;
  local_50 = 0;
  local_4c = 0;
  local_48 = (string *)0x0;
  local_44 = (string *)0x0;
  piVar7 = *(int **)(iVar6 + DAT_00013f18);
  iVar8 = DAT_00013f1c + 0x13bb4;
  *piVar7 = 1;
  iVar3 = DAT_00013f20 + 0x13bc0;
  pcVar4 = (char *)(DAT_00013f24 + 0x13bcc);
  do {
    local_5c = 0;
    iVar1 = getopt_long(param_1,param_2,iVar3,iVar8,&local_5c);
    if (iVar1 == -1) break;
    if (iVar1 == 0) {
      __s1 = *(char **)(iVar8 + local_5c * 0x10);
      iVar1 = strcmp(__s1,(char *)(DAT_00013f28 + 0x13c14));
      if (iVar1 == 0) {
        fputs((char *)(DAT_00013f30 + 0x13c34),(FILE *)**(undefined4 **)(iVar6 + DAT_00013f2c));
        uVar2 = 0;
        goto LAB_00013c38;
      }
      iVar1 = strcmp(__s1,(char *)(DAT_00013f34 + 0x13c64));
      if (iVar1 == 0) {
        FUN_00013274(asStack_40,**(undefined4 **)(iVar6 + DAT_00013f38));
        std::__cxx11::string::operator=((string *)(this + 0x130),asStack_40);
        std::__cxx11::string::_M_dispose();
        this[0x148] = (Dumpsys)0x0;
        break;
      }
      iVar1 = strcmp(__s1,(char *)(DAT_00013f3c + 0x13cc8));
      if (iVar1 == 0) {
        this[0x149] = (Dumpsys)0x1;
      }
      else {
        iVar1 = strcmp(__s1,(char *)(DAT_00013f40 + 0x13ce8));
        if (iVar1 == 0) {
          this[0x14a] = (Dumpsys)0x1;
        }
        else {
          iVar1 = strcmp(__s1,(char *)(DAT_00013f44 + 0x13d08));
          if (iVar1 == 0) {
            this[0x14b] = (Dumpsys)0x1;
          }
          else {
            iVar1 = strcmp(__s1,(char *)(DAT_00013f48 + 0x13d28));
            if (iVar1 == 0) {
              this[0x14c] = (Dumpsys)0x1;
            }
          }
        }
      }
    }
    else {
      puVar5 = *(undefined4 **)(iVar6 + DAT_00013f2c);
      fputc(10,(FILE *)*puVar5);
      fputs(pcVar4,(FILE *)*puVar5);
    }
  } while (this[0x148] != (Dumpsys)0x0);
  if (this[0x14b] != (Dumpsys)0x0) {
    uVar2 = DumpMemory::dumpModuleFreq(*(DumpMemory **)(this + 8));
    goto LAB_00013c38;
  }
  if (this[0x14c] != (Dumpsys)0x0) {
    uVar2 = DumpMemory::dumpMemoryInfo(*(DumpMemory **)(this + 8));
    goto LAB_00013c38;
  }
  if (this[0x149] == (Dumpsys)0x0) {
    if (param_1 < 2) {
      if (param_1 == 1) {
        pcVar4 = (char *)(DAT_00013f50 + 0x13dd8);
        FUN_00013274(asStack_40,pcVar4);
        std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
        emplace_back<std::__cxx11::string>
                  ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)&local_58,
                   asStack_40);
        std::__cxx11::string::_M_dispose();
        strcpy((char *)(this + 0x10),pcVar4);
      }
    }
    else {
      iVar3 = strcmp(param_2[1],(char *)(DAT_00013f4c + 0x13da4));
      if (iVar3 == 0) goto LAB_00013dac;
    }
    pcVar4 = (char *)(DAT_00013f54 + 0x13e18);
    for (iVar3 = *piVar7; iVar3 < param_1; iVar3 = iVar3 + 1) {
      if ((this[0x148] == (Dumpsys)0x0) || (*piVar7 != iVar3)) {
        FUN_00013274(asStack_40,param_2[iVar3]);
        if (local_48 == local_44) {
          std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
          _M_realloc_insert<std::__cxx11::string_const&>
                    ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)&local_4c,
                     local_48,asStack_40);
        }
        else {
          std::__cxx11::string::string(local_48,asStack_40);
          local_48 = local_48 + 0x18;
        }
        std::__cxx11::string::_M_dispose();
      }
      else {
        FUN_00013274(asStack_40,param_2[iVar3]);
        std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
        emplace_back<std::__cxx11::string>
                  ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)&local_58,
                   asStack_40);
        std::__cxx11::string::_M_dispose();
        snprintf((char *)(this + 0x10),0x100,pcVar4,param_2[iVar3]);
      }
    }
    generateJson(this,(vector *)&local_58,(vector *)&local_4c);
    iVar3 = InitDumpClient(this);
    if (iVar3 != 0) {
      iVar3 = DumpClientSendModule(this);
      if (iVar3 == 0) {
        printf((char *)(DAT_00013f5c + 0x13f10),DAT_00013f58 + 0x13f0c);
      }
      else {
        DumpClientReceiveDump(this);
      }
    }
    uVar2 = writeDumpToStd(this);
  }
  else {
LAB_00013dac:
    DumpVersion::dumpSetDumpList(*(DumpVersion **)(this + 4),(bool)this[0x14a]);
    uVar2 = DumpVersion::dumpModuleVersion(*(DumpVersion **)(this + 4));
  }
LAB_00013c38:
  std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::~vector
            ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)&local_4c);
  std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::~vector
            ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)&local_58);
  return uVar2;
}



/* ===== DumpClient::~DumpClient @ 00013f60 size=96 ===== */

/* DumpClient::~DumpClient() */

DumpClient * __thiscall DumpClient::~DumpClient(DumpClient *this)

{
  *(int *)this = *(int *)(DAT_00013fc0 + 0x13f70 + DAT_00013fc4) + 8;
  if (*(int *)(this + 0x34) != 0) {
    close(*(int *)(this + 0x34));
  }
  unlink(*(char **)(this + 4));
  if (*(void **)(this + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x38));
  }
  *(undefined4 *)(this + 0x38) = 0;
  std::__cxx11::string::_M_dispose();
  return this;
}



/* ===== DumpClient::~DumpClient @ 00013fc8 size=28 ===== */

/* DumpClient::~DumpClient() */

DumpClient * __thiscall DumpClient::~DumpClient(DumpClient *this)

{
  ~DumpClient(this);
  operator_delete(this);
  return this;
}



/* ===== DumpClient::DumpClient @ 00013fe4 size=96 ===== */

/* DumpClient::DumpClient() */

DumpClient * __thiscall DumpClient::DumpClient(DumpClient *this)

{
  void *pvVar1;
  
  *(int *)this = *(int *)(DAT_00014044 + 0x13ff8 + DAT_00014048) + 8;
  *(DumpClient **)(this + 4) = this + 0xc;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (DumpClient)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(this + 0x38) = 0;
  pvVar1 = operator_new__(0x100000);
  *(void **)(this + 0x38) = pvVar1;
  return this;
}



/* ===== DumpClient::init @ 0001404c size=204 ===== */

/* DumpClient::init(char const*, int) */

undefined4 DumpClient::init(char *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  uint in_r2;
  undefined4 local_20;
  in_addr_t local_1c;
  
  local_20 = param_1;
  local_1c = param_2;
  if (in_r2 - 1 < 0xffff) {
    iVar2 = socket(2,1,0);
    *(int *)(param_1 + 0x34) = iVar2;
    if (iVar2 == -1) {
      printf((char *)(DAT_00014120 + 0x140b4),DAT_0001411c + 0x140b0);
    }
    else {
      uVar1 = (ushort)((in_r2 & 0xff) << 8) | (ushort)(in_r2 >> 8) & 0xff;
      local_20._2_1_ = (char)uVar1;
      local_20._3_1_ = (char)(uVar1 >> 8);
      local_20._0_2_ = 2;
      local_1c = inet_addr((char *)param_2);
      iVar2 = connect(*(int *)(param_1 + 0x34),(sockaddr *)&local_20,0x10);
      if (iVar2 != -1) {
        return 1;
      }
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      printf((char *)(DAT_00014124 + 0x1410c),pcVar4);
      close(*(int *)(param_1 + 0x34));
    }
  }
  else {
    puts((char *)(DAT_00014118 + 0x14070));
  }
  return 0;
}



/* ===== DumpClient::init @ 00014128 size=192 ===== */

/* DumpClient::init(char const*) */

undefined4 __thiscall DumpClient::init(DumpClient *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  sockaddr local_80 [7];
  
  std::__cxx11::string::operator=((string *)(this + 4),param_1);
  iVar1 = socket(1,1,0);
  *(int *)(this + 0x34) = iVar1;
  if (iVar1 == -1) {
    printf((char *)(DAT_000141ec + 0x1416c),DAT_000141e8 + 0x14168);
    uVar2 = 0;
  }
  else {
    local_80[0].sa_family = 1;
    snprintf(local_80[0].sa_data,0x6c,(char *)(DAT_000141f0 + 0x14190),*(undefined4 *)(this + 4));
    sVar3 = strlen(local_80[0].sa_data);
    iVar1 = connect(*(int *)(this + 0x34),local_80,sVar3 + 2);
    if (iVar1 == -1) {
      printf((char *)(DAT_000141f8 + 0x141d4),DAT_000141f4 + 0x141d0);
      close(*(int *)(this + 0x34));
      uVar2 = 0;
      *(undefined4 *)(this + 0x34) = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ===== DumpClient::sendBuffer @ 000141fc size=112 ===== */

/* DumpClient::sendBuffer(char const*, unsigned int) */

bool __thiscall DumpClient::sendBuffer(DumpClient *this,char *param_1,uint param_2)

{
  ssize_t sVar1;
  
  if (*(int *)(this + 0x34) != 0) {
    while ((param_2 != 0 && (sVar1 = send(*(int *)(this + 0x34),param_1,param_2,0x4000), 0 < sVar1))
          ) {
      param_2 = param_2 - sVar1;
      param_1 = param_1 + sVar1;
    }
    return param_2 == 0;
  }
  printf((char *)(DAT_00014270 + 0x1422c),DAT_0001426c + 0x14228);
  return false;
}



/* ===== DumpClient::sendMessage @ 00014274 size=96 ===== */

/* DumpClient::sendMessage(unsigned int, char const*, unsigned int) */

undefined4 __thiscall
DumpClient::sendMessage(DumpClient *this,uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  uint local_14;
  char *pcStack_10;
  
  local_18 = param_3;
  local_14 = param_1;
  pcStack_10 = param_2;
  iVar1 = sendBuffer(this,(char *)&local_14,4);
  if ((iVar1 == 0) || (iVar1 = sendBuffer(this,(char *)&local_18,4), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = sendBuffer(this,param_2,local_18);
  }
  return uVar2;
}



/* ===== DumpClient::sendDump @ 000142d4 size=76 ===== */

/* DumpClient::sendDump(unsigned int, char const*, unsigned int) */

int __thiscall DumpClient::sendDump(DumpClient *this,uint param_1,char *param_2,uint param_3)

{
  char *__format;
  int iVar1;
  
  if (*(int *)(this + 0x34) == 0) {
    iVar1 = DAT_00014320 + 0x142f4;
    __format = (char *)(DAT_00014324 + 0x142f8);
  }
  else {
    iVar1 = sendMessage(this,param_1,param_2,param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = DAT_00014328 + 0x1431c;
    __format = (char *)((int)&DAT_00014320 + DAT_0001432c);
  }
  printf(__format,iVar1);
  return 0;
}



/* ===== DumpClient::receiveBuffer @ 00014330 size=72 ===== */

/* DumpClient::receiveBuffer(int, char*, unsigned int) */

bool __thiscall DumpClient::receiveBuffer(DumpClient *this,int param_1,char *param_2,uint param_3)

{
  ssize_t sVar1;
  
  while ((param_3 != 0 && (sVar1 = recv(param_1,param_2,param_3,0), 0 < sVar1))) {
    param_3 = param_3 - sVar1;
    param_2 = param_2 + sVar1;
  }
  return param_3 == 0;
}



/* ===== DumpClient::receiveMessage @ 00014378 size=100 ===== */

/* DumpClient::receiveMessage(int, unsigned int&, unsigned int&) */

int __thiscall DumpClient::receiveMessage(DumpClient *this,int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  
  iVar1 = receiveBuffer(this,param_1,(char *)param_2,4);
  if ((iVar1 == 0) || (iVar1 = receiveBuffer(this,param_1,(char *)param_3,4), iVar1 == 0)) {
    iVar1 = 0;
  }
  else if (0x100000 < *param_3) {
    puts((char *)(DAT_000143dc + 0x143d8));
  }
  return iVar1;
}



/* ===== DumpClient::receiveDumpMessage @ 000143e0 size=60 ===== */

/* DumpClient::receiveDumpMessage(unsigned int&, unsigned int&) */

undefined4 __thiscall DumpClient::receiveDumpMessage(DumpClient *this,uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x34) != -1) {
    uVar1 = receiveMessage(this,*(int *)(this + 0x34),param_1,param_2);
    return uVar1;
  }
  printf((char *)(DAT_00014420 + 0x14414),DAT_0001441c + 0x14410);
  return 0;
}



/* ===== DumpClient::receiveDump @ 00014424 size=60 ===== */

/* DumpClient::receiveDump(char*, unsigned int) */

undefined4 __thiscall DumpClient::receiveDump(DumpClient *this,char *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x34) != -1) {
    uVar1 = receiveBuffer(this,*(int *)(this + 0x34),param_1,param_2);
    return uVar1;
  }
  printf((char *)(DAT_00014464 + 0x14458),DAT_00014460 + 0x14454);
  return 0;
}



/* ===== DumpClient::strlcpy @ 00014468 size=72 ===== */

/* DumpClient::strlcpy(char*, char const*, int) */

int __thiscall DumpClient::strlcpy(DumpClient *this,char *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  while( true ) {
    iVar3 = iVar2 + 1;
    if (param_3 <= iVar3) break;
    if (*param_2 == '\0') goto LAB_0001449c;
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    iVar2 = iVar3;
  }
  if (iVar3 == param_3) {
LAB_0001449c:
    *param_1 = '\0';
  }
  sVar1 = strlen(param_2);
  return iVar2 + sVar1;
}



/* ===== DumpClient::urlSplit @ 000144b0 size=632 ===== */

/* DumpClient::urlSplit(char*, int, char*, int, char*, int, int*, char*, int, char const*) */

void __thiscall
DumpClient::urlSplit
          (DumpClient *this,char *param_1,int param_2,char *param_3,int param_4,char *param_5,
          int param_6,int *param_7,char *param_8,int param_9,char *param_10)

{
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  char *pcVar5;
  
  if (param_7 != (int *)0x0) {
    *param_7 = -1;
  }
  if (0 < param_2) {
    *param_1 = '\0';
  }
  if (0 < param_4) {
    *param_3 = '\0';
  }
  if (0 < param_6) {
    *param_5 = '\0';
  }
  if (0 < param_9) {
    *param_8 = '\0';
  }
  pcVar1 = strchr(param_10,0x3a);
  if (pcVar1 == (char *)0x0) goto LAB_00014624;
  pcVar5 = pcVar1 + 1;
  iVar4 = (int)pcVar5 - (int)param_10;
  if (param_2 <= (int)pcVar5 - (int)param_10) {
    iVar4 = param_2;
  }
  strlcpy(this,param_1,param_10,iVar4);
  if (pcVar1[1] == '/') {
    pcVar5 = pcVar1 + 2;
  }
  if (*pcVar5 == '/') {
    pcVar5 = pcVar5 + 1;
  }
  pcVar2 = strchr(pcVar5,0x2f);
  pcVar1 = strchr(pcVar5,0x3f);
  if (pcVar2 == (char *)0x0) {
    if (pcVar1 != (char *)0x0) goto LAB_000145b8;
    sVar3 = strlen(pcVar5);
    pcVar1 = pcVar5 + sVar3;
  }
  else {
    if (pcVar1 == (char *)0x0 || pcVar2 <= pcVar1) {
      pcVar1 = pcVar2;
    }
LAB_000145b8:
    strlcpy(this,param_8,pcVar1,param_9);
  }
  param_10 = pcVar5;
  if (pcVar5 != pcVar1) {
    while (pcVar2 = strchr(param_10,0x40), pcVar2 != (char *)0x0 && pcVar2 < pcVar1) {
      iVar4 = (int)(pcVar2 + 1) - (int)pcVar5;
      if (param_4 <= iVar4) {
        iVar4 = param_4;
      }
      strlcpy(this,param_3,pcVar5,iVar4);
      param_10 = pcVar2 + 1;
    }
    if ((*param_10 == '[') &&
       (pcVar5 = strchr(param_10,0x5d), pcVar5 != (char *)0x0 && pcVar5 < pcVar1)) {
      iVar4 = (int)pcVar5 - (int)param_10;
      if (param_6 <= (int)pcVar5 - (int)param_10) {
        iVar4 = param_6;
      }
      strlcpy(this,param_5,param_10 + 1,iVar4);
      if (param_7 == (int *)0x0 || pcVar5[1] != ':') {
        return;
      }
      pcVar5 = pcVar5 + 2;
    }
    else {
      pcVar5 = strchr(param_10,0x3a);
      if (pcVar5 == (char *)0x0 || pcVar1 <= pcVar5) {
        param_9 = (int)(pcVar1 + (1 - (int)param_10));
        param_8 = param_5;
        if (param_6 <= param_9) {
          param_9 = param_6;
        }
LAB_00014624:
        strlcpy(this,param_8,param_10,param_9);
        return;
      }
      pcVar5 = pcVar5 + 1;
      iVar4 = (int)pcVar5 - (int)param_10;
      if (param_6 <= (int)pcVar5 - (int)param_10) {
        iVar4 = param_6;
      }
      strlcpy(this,param_5,param_10,iVar4);
      if (param_7 == (int *)0x0) {
        return;
      }
    }
    iVar4 = atoi(pcVar5);
    *param_7 = iVar4;
  }
  return;
}



/* ===== DumpClient::sockClientOpen @ 00014728 size=176 ===== */

/* DumpClient::sockClientOpen(char const*) */

undefined4 __thiscall DumpClient::sockClientOpen(DumpClient *this,char *param_1)

{
  int iVar1;
  int local_c1c;
  char acStack_c18 [1024];
  char acStack_818 [1024];
  char acStack_418 [1028];
  
  urlSplit(this,acStack_818,0x400,(char *)0x0,0,acStack_c18,0x400,&local_c1c,acStack_418,0x400,
           param_1);
  iVar1 = strcmp(acStack_818,(char *)(DAT_000147d8 + 0x14788));
  if (iVar1 == 0) {
    init((char *)this,(int)acStack_c18);
  }
  else {
    iVar1 = strcmp(acStack_818,(char *)(DAT_000147dc + 0x147c0));
    if (iVar1 == 0) {
      init(this,acStack_418);
    }
  }
  return 1;
}



/* ===== DumpVersion::~DumpVersion @ 000147e0 size=4 ===== */

/* DumpVersion::~DumpVersion() */

DumpVersion * __thiscall DumpVersion::~DumpVersion(DumpVersion *this)

{
  return this;
}



/* ===== DumpVersion::~DumpVersion @ 000147e4 size=28 ===== */

/* DumpVersion::~DumpVersion() */

DumpVersion * __thiscall DumpVersion::~DumpVersion(DumpVersion *this)

{
  ~DumpVersion(this);
  operator_delete(this);
  return this;
}



/* ===== DumpVersion::DumpVersion @ 00014800 size=36 ===== */

/* DumpVersion::DumpVersion() */

void __thiscall DumpVersion::DumpVersion(DumpVersion *this)

{
  *(int *)this = *(int *)(DAT_00014824 + 0x14810 + DAT_00014828) + 8;
  this[4] = (DumpVersion)0x0;
  return;
}



/* ===== DumpVersion::dumpDumpVersion @ 0001482c size=80 ===== */

/* DumpVersion::dumpDumpVersion(std::__cxx11::string&) */

undefined4 __thiscall DumpVersion::dumpDumpVersion(DumpVersion *this,string *param_1)

{
  std::__cxx11::string::append((char *)param_1);
  std::__cxx11::string::append((char *)param_1);
  std::__cxx11::string::append((char *)param_1);
  std::__cxx11::string::append((char *)param_1);
  return 1;
}



/* ===== DumpVersion::getLibPath @ 00014888 size=424 ===== */

/* DumpVersion::getLibPath() */

undefined4 DumpVersion::getLibPath(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *__delim;
  char *local_2444;
  char *local_2440;
  size_t local_243c;
  char local_2438 [16];
  char acStack_2428 [1024];
  char acStack_2028 [4096];
  char acStack_1028 [4100];
  
  memset(acStack_2428,0,0x400);
  local_2440 = local_2438;
  local_243c = 0;
  local_2438[0] = '\0';
  Snprintf(acStack_2428,0x400,(char *)(DAT_00014a30 + 0x148cc));
  iVar2 = executeCMD(acStack_2428,(string *)&local_2440,true);
  iVar8 = DAT_00014a34 + 0x148f8;
  pcVar7 = *(char **)(iVar8 + DAT_00014a38);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    pcVar9 = (char *)(DAT_00014a3c + 0x1491c);
    strncpy(acStack_2028,local_2440,local_243c);
    local_2444 = (char *)0x0;
    pcVar3 = strtok_r(acStack_2028,pcVar9,&local_2444);
    if (pcVar3 != (char *)0x0) {
      pcVar3 = strtok_r((char *)0x0,pcVar9,&local_2444);
      Snprintf(acStack_1028,0x1000,(char *)(DAT_00014a40 + 0x14964),pcVar3);
    }
    local_2444 = (char *)0x0;
    pcVar9 = strtok_r(acStack_1028,(char *)(DAT_00014a44 + 0x14984),&local_2444);
    __delim = (char *)(DAT_00014a48 + 0x1499c);
    pcVar5 = (char *)(DAT_00014a4c + 0x149a4);
    iVar2 = 0;
    pcVar3 = pcVar7;
    while( true ) {
      if (pcVar9 == (char *)0x0) break;
      Snprintf(pcVar3,0x400,pcVar5);
      pcVar9 = strtok_r((char *)0x0,__delim,&local_2444);
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 0x400;
    }
  }
  iVar6 = 0;
  iVar8 = *(int *)(iVar8 + DAT_00014a50);
  pcVar3 = (char *)(DAT_00014a54 + 0x149fc);
  do {
    iVar4 = iVar8 + iVar6;
    iVar1 = iVar6 + iVar2 * 0x400;
    iVar6 = iVar6 + 0x400;
    Snprintf(pcVar7 + iVar1,0x400,pcVar3,iVar4);
  } while (iVar6 != 0x2000);
  std::__cxx11::string::_M_dispose();
  return 1;
}



/* ===== DumpVersion::executeStrings @ 00014a58 size=32 ===== */

/* DumpVersion::executeStrings(char const*, char const*, std::__cxx11::string&) */

void __thiscall
DumpVersion::executeStrings(DumpVersion *this,char *param_1,char *param_2,string *param_3)

{
  strings(param_1,param_2,param_3,(bool)this[4]);
  return;
}



/* ===== DumpVersion::getVersionStrings @ 00014a78 size=132 ===== */

/* DumpVersion::getVersionStrings(char const*, char const*, std::__cxx11::string&) */

void __thiscall
DumpVersion::getVersionStrings(DumpVersion *this,char *param_1,char *param_2,string *param_3)

{
  int iVar1;
  char acStack_418 [1024];
  
  memset(acStack_418,0,0x400);
  iVar1 = executeStrings(this,param_1,param_2,param_3);
  if (iVar1 == 0) {
    Snprintf(acStack_418,0x400,(char *)(DAT_00014afc + 0x14adc),param_1,param_2);
    executeCMD(acStack_418,param_3,(bool)this[4]);
  }
  return;
}



/* ===== DumpVersion::writeVersionHead @ 00014b00 size=96 ===== */

/* DumpVersion::writeVersionHead(char const*, std::__cxx11::string&) */

undefined4 __thiscall DumpVersion::writeVersionHead(DumpVersion *this,char *param_1,string *param_2)

{
  char acStack_418 [1028];
  
  memset(acStack_418,0,0x400);
  Snprintf(acStack_418,0x400,(char *)(DAT_00014b60 + 0x14b40),param_1);
  std::__cxx11::string::append((char *)param_2);
  return 1;
}



/* ===== DumpVersion::dumpRockitVersion @ 00014b64 size=288 ===== */

/* DumpVersion::dumpRockitVersion(std::__cxx11::string&) */

undefined4 __thiscall DumpVersion::dumpRockitVersion(DumpVersion *this,string *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char acStack_428 [1028];
  
  iVar4 = DAT_00014c88;
  pcVar2 = (char *)(DAT_00014c84 + 0x14b84);
  memset(acStack_428,0,0x400);
  writeVersionHead(this,pcVar2,param_1);
  pcVar6 = (char *)(DAT_00014c8c + 0x14bc0);
  iVar7 = DAT_00014c94 + 0x14bc4;
  iVar5 = *(int *)(iVar4 + 0x14bb8 + DAT_00014c90);
  iVar4 = 0;
  while( true ) {
    Snprintf(acStack_428,0x400,pcVar6,iVar5,pcVar2,iVar7);
    iVar1 = access(acStack_428,4);
    if (((iVar1 == 0) &&
        (iVar1 = getVersionStrings(this,acStack_428,(char *)(DAT_00014ca0 + 0x14c38),param_1),
        0 < iVar1)) &&
       (iVar1 = getVersionStrings(this,acStack_428,(char *)(DAT_00014ca4 + 0x14c58),param_1),
       0 < iVar1)) break;
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x400;
    if (iVar4 == 0x1e) {
      uVar3 = 0;
      printf((char *)(DAT_00014c9c + 0x14c1c),DAT_00014c98 + 0x14c18);
LAB_00014c64:
      std::__cxx11::string::append((char *)param_1);
      return uVar3;
    }
  }
  uVar3 = 1;
  goto LAB_00014c64;
}



/* ===== DumpVersion::dumpRockchipMppVersion @ 00014cac size=256 ===== */

/* DumpVersion::dumpRockchipMppVersion(std::__cxx11::string&) */

undefined4 __thiscall DumpVersion::dumpRockchipMppVersion(DumpVersion *this,string *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char acStack_428 [1028];
  
  iVar4 = DAT_00014db0;
  pcVar2 = (char *)(DAT_00014dac + 0x14ccc);
  memset(acStack_428,0,0x400);
  writeVersionHead(this,pcVar2,param_1);
  pcVar6 = (char *)(DAT_00014db4 + 0x14d08);
  iVar7 = DAT_00014dbc + 0x14d0c;
  iVar5 = *(int *)(iVar4 + 0x14d00 + DAT_00014db8);
  iVar4 = 0;
  while( true ) {
    Snprintf(acStack_428,0x400,pcVar6,iVar5,pcVar2,iVar7);
    iVar1 = access(acStack_428,4);
    if ((iVar1 == 0) &&
       (iVar1 = getVersionStrings(this,acStack_428,(char *)(DAT_00014dc8 + 0x14d80),param_1),
       iVar1 != 0)) break;
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x400;
    if (iVar4 == 0x1e) {
      uVar3 = 0;
      printf((char *)(DAT_00014dc4 + 0x14d64),DAT_00014dc0 + 0x14d60);
LAB_00014d8c:
      std::__cxx11::string::append((char *)param_1);
      return uVar3;
    }
  }
  uVar3 = 1;
  goto LAB_00014d8c;
}



/* ===== DumpVersion::dumpGfxAvsVersion @ 00014dd0 size=320 ===== */

/* DumpVersion::dumpGfxAvsVersion(std::__cxx11::string&) */

undefined4 __thiscall DumpVersion::dumpGfxAvsVersion(DumpVersion *this,string *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char acStack_828 [1024];
  char acStack_428 [1028];
  
  pcVar2 = (char *)(DAT_00014f10 + 0x14e08);
  memset(acStack_828,0,0x400);
  iVar4 = DAT_00014f14;
  memset(acStack_428,0,0x400);
  writeVersionHead(this,pcVar2,param_1);
  pcVar6 = (char *)(DAT_00014f18 + 0x14e44);
  iVar7 = DAT_00014f20 + 0x14e48;
  iVar5 = *(int *)(iVar4 + 0x14e3c + DAT_00014f1c);
  iVar4 = 0;
  do {
    Snprintf(acStack_828,0x400,pcVar6,iVar5,pcVar2,iVar7);
    iVar1 = access(acStack_828,4);
    if (iVar1 == 0) {
      Snprintf(acStack_428,0x400,(char *)(DAT_00014f30 + 0x14ec8),acStack_828,DAT_00014f34 + 0x14ecc
               ,DAT_00014f2c + 0x14ebc);
      iVar1 = executeCMD(acStack_428,param_1,true);
      if (0 < iVar1) {
        uVar3 = 1;
        goto LAB_00014ef0;
      }
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x400;
  } while (iVar4 != 0x1e);
  uVar3 = 0;
  printf((char *)(DAT_00014f28 + 0x14ea0),DAT_00014f24 + 0x14e9c);
LAB_00014ef0:
  std::__cxx11::string::append((char *)param_1);
  return uVar3;
}



/* ===== DumpVersion::dumpRgaVersion @ 00014f3c size=288 ===== */

/* DumpVersion::dumpRgaVersion(std::__cxx11::string&) */

undefined4 __thiscall DumpVersion::dumpRgaVersion(DumpVersion *this,string *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char acStack_428 [1028];
  
  iVar4 = DAT_00015060;
  pcVar2 = (char *)(DAT_0001505c + 0x14f5c);
  memset(acStack_428,0,0x400);
  writeVersionHead(this,pcVar2,param_1);
  pcVar6 = (char *)(DAT_00015064 + 0x14f98);
  iVar7 = DAT_0001506c + 0x14f9c;
  iVar5 = *(int *)(iVar4 + 0x14f90 + DAT_00015068);
  iVar4 = 0;
  while( true ) {
    Snprintf(acStack_428,0x400,pcVar6,iVar5,pcVar2,iVar7);
    iVar1 = access(acStack_428,4);
    if ((iVar1 == 0) &&
       ((iVar1 = getVersionStrings(this,acStack_428,(char *)(DAT_00015078 + 0x15010),param_1),
        0 < iVar1 ||
        (iVar1 = getVersionStrings(this,acStack_428,(char *)(DAT_0001507c + 0x15030),param_1),
        0 < iVar1)))) break;
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x400;
    if (iVar4 == 0x1e) {
      uVar3 = 0;
      printf((char *)(DAT_00015074 + 0x14ff4),DAT_00015070 + 86000);
LAB_0001503c:
      std::__cxx11::string::append((char *)param_1);
      return uVar3;
    }
  }
  uVar3 = 1;
  goto LAB_0001503c;
}



/* ===== DumpVersion::dumpGraPhicVersion @ 00015084 size=144 ===== */

/* DumpVersion::dumpGraPhicVersion(std::__cxx11::string&) */

bool __thiscall DumpVersion::dumpGraPhicVersion(DumpVersion *this,string *param_1)

{
  int iVar1;
  char acStack_418 [1028];
  
  memset(acStack_418,0,0x400);
  writeVersionHead(this,(char *)(DAT_00015114 + 0x150c4),param_1);
  Snprintf(acStack_418,0x400,(char *)(DAT_00015118 + 0x150d8));
  iVar1 = executeCMD(acStack_418,param_1,true);
  std::__cxx11::string::append((char *)param_1);
  return 0 < iVar1;
}



/* ===== DumpVersion::dumpMppServiceVersion @ 00015120 size=144 ===== */

/* DumpVersion::dumpMppServiceVersion(std::__cxx11::string&) */

bool __thiscall DumpVersion::dumpMppServiceVersion(DumpVersion *this,string *param_1)

{
  int iVar1;
  char acStack_418 [1028];
  
  memset(acStack_418,0,0x400);
  writeVersionHead(this,(char *)(DAT_000151b0 + 0x15160),param_1);
  Snprintf(acStack_418,0x400,(char *)(DAT_000151b4 + 0x15174));
  iVar1 = executeCMD(acStack_418,param_1,true);
  std::__cxx11::string::append((char *)param_1);
  return 0 < iVar1;
}



/* ===== DumpVersion::dumpModuleVersion @ 000151bc size=180 ===== */

/* DumpVersion::dumpModuleVersion() */

bool __thiscall DumpVersion::dumpModuleVersion(DumpVersion *this)

{
  int iVar1;
  undefined1 *local_28;
  uint local_24;
  undefined1 local_20 [20];
  
  local_28 = local_20;
  local_24 = 0;
  local_20[0] = 0;
  getLibPath();
  dumpDumpVersion(this,(string *)&local_28);
  dumpRockitVersion(this,(string *)&local_28);
  dumpRockchipMppVersion(this,(string *)&local_28);
  dumpMppServiceVersion(this,(string *)&local_28);
  dumpGraPhicVersion(this,(string *)&local_28);
  dumpGfxAvsVersion(this,(string *)&local_28);
  dumpRgaVersion(this,(string *)&local_28);
  iVar1 = WriteFully(1,local_28,local_24);
  if (iVar1 == 0) {
    puts((char *)(DAT_00015270 + 0x1525c));
  }
  std::__cxx11::string::_M_dispose();
  return iVar1 != 0;
}



/* ===== DumpVersion::dumpSetDumpList @ 00015274 size=12 ===== */

/* DumpVersion::dumpSetDumpList(bool) */

undefined4 __thiscall DumpVersion::dumpSetDumpList(DumpVersion *this,bool param_1)

{
  this[4] = (DumpVersion)param_1;
  return 1;
}



/* ===== DumpMemory::~DumpMemory @ 00015280 size=4 ===== */

/* DumpMemory::~DumpMemory() */

DumpMemory * __thiscall DumpMemory::~DumpMemory(DumpMemory *this)

{
  return this;
}



/* ===== DumpMemory::~DumpMemory @ 00015284 size=28 ===== */

/* DumpMemory::~DumpMemory() */

DumpMemory * __thiscall DumpMemory::~DumpMemory(DumpMemory *this)

{
  ~DumpMemory(this);
  operator_delete(this);
  return this;
}



/* ===== DumpMemory::DumpMemory @ 000152a0 size=36 ===== */

/* DumpMemory::DumpMemory() */

void __thiscall DumpMemory::DumpMemory(DumpMemory *this)

{
  *(int *)this = *(int *)(DAT_000152c4 + 0x152b0 + DAT_000152c8) + 8;
  this[4] = (DumpMemory)0x0;
  return;
}



/* ===== DumpMemory::writeStrHead @ 000152cc size=96 ===== */

/* DumpMemory::writeStrHead(char const*, std::__cxx11::string&) */

undefined4 __thiscall DumpMemory::writeStrHead(DumpMemory *this,char *param_1,string *param_2)

{
  char acStack_418 [1028];
  
  memset(acStack_418,0,0x400);
  Snprintf(acStack_418,0x400,(char *)(DAT_0001532c + 0x1530c),param_1);
  std::__cxx11::string::append((char *)param_2);
  return 1;
}



/* ===== DumpMemory::dumpCpuFreq @ 00015330 size=144 ===== */

/* DumpMemory::dumpCpuFreq(std::__cxx11::string&) */

bool __thiscall DumpMemory::dumpCpuFreq(DumpMemory *this,string *param_1)

{
  int iVar1;
  char acStack_418 [1028];
  
  memset(acStack_418,0,0x400);
  writeStrHead(this,(char *)(DAT_000153c0 + 0x15370),param_1);
  Snprintf(acStack_418,0x400,(char *)(DAT_000153c4 + 0x15384));
  iVar1 = executeCMD(acStack_418,param_1,true);
  std::__cxx11::string::append((char *)param_1);
  return iVar1 < 1;
}



/* ===== DumpMemory::dumpVpuFreq @ 000153cc size=144 ===== */

/* DumpMemory::dumpVpuFreq(std::__cxx11::string&) */

bool __thiscall DumpMemory::dumpVpuFreq(DumpMemory *this,string *param_1)

{
  int iVar1;
  char acStack_418 [1028];
  
  memset(acStack_418,0,0x400);
  writeStrHead(this,(char *)(DAT_0001545c + 0x1540c),param_1);
  Snprintf(acStack_418,0x400,(char *)(DAT_00015460 + 0x15420));
  iVar1 = executeCMD(acStack_418,param_1,true);
  std::__cxx11::string::append((char *)param_1);
  return 0 < iVar1;
}



/* ===== DumpMemory::dumpGpuFreq @ 00015468 size=228 ===== */

/* DumpMemory::dumpGpuFreq(std::__cxx11::string&) */

undefined4 __thiscall DumpMemory::dumpGpuFreq(DumpMemory *this,string *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char acStack_418 [1028];
  
  memset(acStack_418,0,0x400);
  writeStrHead(this,(char *)(DAT_0001554c + 0x154a4),param_1);
  Snprintf(acStack_418,0x400,(char *)(DAT_00015550 + 0x154b8));
  iVar1 = executeCMD(acStack_418,param_1,true);
  std::__cxx11::string::append((char *)param_1);
  writeStrHead(this,(char *)(DAT_00015558 + 0x154f0),param_1);
  Snprintf(acStack_418,0x400,(char *)(DAT_0001555c + 0x15504));
  iVar2 = executeCMD(acStack_418,param_1,true);
  if (iVar2 < 1) {
    uVar3 = 0;
  }
  else if (iVar1 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  std::__cxx11::string::append((char *)param_1);
  return uVar3;
}



/* ===== DumpMemory::dumpRgaFreq @ 00015564 size=144 ===== */

/* DumpMemory::dumpRgaFreq(std::__cxx11::string&) */

bool __thiscall DumpMemory::dumpRgaFreq(DumpMemory *this,string *param_1)

{
  int iVar1;
  char acStack_418 [1028];
  
  memset(acStack_418,0,0x400);
  writeStrHead(this,(char *)(DAT_000155f4 + 0x155a4),param_1);
  Snprintf(acStack_418,0x400,(char *)(DAT_000155f8 + 0x155b8));
  iVar1 = executeCMD(acStack_418,param_1,true);
  std::__cxx11::string::append((char *)param_1);
  return 0 < iVar1;
}



/* ===== DumpMemory::dumpModuleFreq @ 00015600 size=136 ===== */

/* DumpMemory::dumpModuleFreq() */

bool __thiscall DumpMemory::dumpModuleFreq(DumpMemory *this)

{
  int iVar1;
  undefined1 *local_28;
  uint local_24;
  undefined1 local_20 [20];
  
  local_28 = local_20;
  local_24 = 0;
  local_20[0] = 0;
  dumpCpuFreq(this,(string *)&local_28);
  dumpVpuFreq(this,(string *)&local_28);
  dumpGpuFreq(this,(string *)&local_28);
  dumpRgaFreq(this,(string *)&local_28);
  iVar1 = WriteFully(1,local_28,local_24);
  if (iVar1 == 0) {
    puts((char *)(DAT_00015688 + 0x15674));
  }
  std::__cxx11::string::_M_dispose();
  return iVar1 != 0;
}



/* ===== DumpMemory::dumpMemoryMMdump @ 0001568c size=364 ===== */

/* DumpMemory::dumpMemoryMMdump(std::__cxx11::string&) */

undefined4 __thiscall DumpMemory::dumpMemoryMMdump(DumpMemory *this,string *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *local_830;
  undefined4 local_82c;
  undefined1 local_828 [16];
  char acStack_818 [1024];
  char acStack_418 [1024];
  
  memset(acStack_818,0,0x400);
  memset(acStack_418,0,0x400);
  local_82c = 0;
  local_828[0] = 0;
  local_830 = local_828;
  writeStrHead(this,(char *)(DAT_000157f8 + 0x156e4),param_1);
  Snprintf(acStack_818,0x400,(char *)(DAT_000157fc + 0x1570c));
  iVar1 = executeCMD(acStack_818,param_1,true);
  if (0 < iVar1) {
    Snprintf(acStack_818,0x400,(char *)(DAT_00015800 + 0x15754));
    iVar1 = executeCMD(acStack_818,(string *)&local_830,true);
    if (0 < iVar1) {
      Snprintf(acStack_418,0x400,(char *)(DAT_00015804 + 0x15784),iVar1 + -1);
      std::__cxx11::string::append((char *)param_1);
      Snprintf(acStack_818,0x400,(char *)(DAT_00015808 + 0x157a4));
      iVar1 = executeCMD(acStack_818,(string *)&local_830,true);
      if (0 < iVar1) {
        uVar2 = 1;
        Snprintf(acStack_418,0x400,(char *)(DAT_0001580c + 0x157d4),iVar1 + -1);
        std::__cxx11::string::append((char *)param_1);
        std::__cxx11::string::append((char *)param_1);
        goto LAB_00015728;
      }
    }
  }
  uVar2 = 0;
LAB_00015728:
  std::__cxx11::string::_M_dispose();
  return uVar2;
}



/* ===== DumpMemory::dumpMemoryFree @ 00015814 size=144 ===== */

/* DumpMemory::dumpMemoryFree(std::__cxx11::string&) */

bool __thiscall DumpMemory::dumpMemoryFree(DumpMemory *this,string *param_1)

{
  int iVar1;
  char acStack_418 [1028];
  
  memset(acStack_418,0,0x400);
  writeStrHead(this,(char *)(DAT_000158a4 + 0x15854),param_1);
  Snprintf(acStack_418,0x400,(char *)(DAT_000158a8 + 0x15868));
  iVar1 = executeCMD(acStack_418,param_1,true);
  std::__cxx11::string::append((char *)param_1);
  return 0 < iVar1;
}



/* ===== DumpMemory::dumpMemoryInfo @ 000158b0 size=112 ===== */

/* DumpMemory::dumpMemoryInfo() */

bool __thiscall DumpMemory::dumpMemoryInfo(DumpMemory *this)

{
  int iVar1;
  undefined1 *local_28;
  uint local_24;
  undefined1 local_20 [20];
  
  local_28 = local_20;
  local_24 = 0;
  local_20[0] = 0;
  dumpMemoryFree(this,(string *)&local_28);
  dumpMemoryMMdump(this,(string *)&local_28);
  iVar1 = WriteFully(1,local_28,local_24);
  if (iVar1 == 0) {
    puts((char *)(DAT_00015920 + 0x1590c));
  }
  std::__cxx11::string::_M_dispose();
  return iVar1 != 0;
}



/* ===== StringAppendV @ 00015924 size=168 ===== */

/* StringAppendV(std::__cxx11::string*, char const*, std::__va_list) */

void StringAppendV(char *param_1,char *param_2,__gnuc_va_list param_3)

{
  int iVar1;
  char *__s;
  uint uVar2;
  uint __maxlen;
  char acStack_418 [1024];
  
  iVar1 = vsnprintf(acStack_418,0x400,param_2,param_3);
  if (iVar1 < 0x400) {
    if (-1 < iVar1) {
      std::__cxx11::string::append(param_1,(uint)acStack_418);
    }
  }
  else {
    __maxlen = iVar1 + 1;
    __s = operator_new__(__maxlen);
    uVar2 = vsnprintf(__s,__maxlen,param_2,param_3);
    if (uVar2 < __maxlen) {
      std::__cxx11::string::append(param_1,(uint)__s);
    }
    operator_delete__(__s);
  }
  return;
}



/* ===== StringPrintf[abi:cxx11] @ 000159cc size=68 ===== */

/* StringPrintf[abi:cxx11](char const*, ...) */

char * StringPrintf_abi_cxx11_(char *param_1,...)

{
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(char **)param_1 = param_1 + 8;
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  uStack_8 = in_r2;
  uStack_4 = in_r3;
  StringAppendV(param_1,in_r1,&uStack_8,0,param_1,&uStack_8,in_r2);
  return param_1;
}



/* ===== StringAppendF @ 00015a10 size=40 ===== */

/* StringAppendF(std::__cxx11::string*, char const*, ...) */

void StringAppendF(string *param_1,char *param_2,...)

{
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = in_r2;
  uStack_4 = in_r3;
  StringAppendV(param_1,param_2,&uStack_8,in_r3,param_1,&uStack_8);
  return;
}



/* ===== Snprintf @ 00015a38 size=40 ===== */

/* Snprintf(char*, unsigned int, char const*, ...) */

void Snprintf(char *param_1,uint param_2,char *param_3,...)

{
  undefined4 in_r3;
  undefined4 uStack_4;
  
  uStack_4 = in_r3;
  vsnprintf(param_1,param_2,param_3,&uStack_4);
  return;
}



/* ===== WriteStringToFd @ 00015a60 size=92 ===== */

/* WriteStringToFd(std::__cxx11::string const&, int) */

undefined4 WriteStringToFd(string *param_1,int param_2)

{
  ssize_t sVar1;
  int *piVar2;
  size_t __n;
  void *__buf;
  
  __buf = *(void **)param_1;
  __n = *(size_t *)(param_1 + 4);
  do {
    if (__n == 0) {
      return 1;
    }
    while (sVar1 = write(param_2,__buf,__n), sVar1 == -1) {
      piVar2 = __errno_location();
      if (*piVar2 != 4) {
        return 0;
      }
    }
    __buf = (void *)((int)__buf + sVar1);
    __n = __n - sVar1;
  } while( true );
}



/* ===== WriteFully @ 00015abc size=92 ===== */

/* WriteFully(int, void const*, unsigned int) */

undefined4 WriteFully(int param_1,void *param_2,uint param_3)

{
  ssize_t sVar1;
  int *piVar2;
  
  do {
    if (param_3 == 0) {
      return 1;
    }
    while (sVar1 = write(param_1,param_2,param_3), sVar1 == -1) {
      piVar2 = __errno_location();
      if (*piVar2 != 4) {
        return 0;
      }
    }
    param_2 = (void *)((int)param_2 + sVar1);
    param_3 = param_3 - sVar1;
  } while( true );
}



/* ===== strings @ 00015b18 size=296 ===== */

/* strings(char const*, char const*, std::__cxx11::string&, bool) */

bool strings(char *param_1,char *param_2,string *param_3,bool param_4)

{
  FILE *__stream;
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  bool bVar5;
  char acStack_1028 [4100];
  
  iVar4 = DAT_00015c44;
  __stream = fopen(param_1,(char *)(DAT_00015c40 + 0x15b44));
  if (__stream == (FILE *)0x0) {
    fprintf((FILE *)**(undefined4 **)(iVar4 + 0x15b4c + DAT_00015c48),
            (char *)(DAT_00015c4c + 0x15b6c),param_1);
    bVar5 = false;
  }
  else {
    bVar5 = false;
    iVar4 = 0;
    do {
      iVar1 = getc(__stream);
      iVar2 = isprint(iVar1);
      if (iVar1 == 9 || iVar2 != 0) {
        if (iVar4 < 0xfff) {
          acStack_1028[iVar4] = (char)iVar1;
          iVar4 = iVar4 + 1;
        }
        else {
LAB_00015bdc:
          acStack_1028[iVar4] = '\0';
          pcVar3 = strstr(acStack_1028,param_2);
          iVar4 = 0;
          if (pcVar3 != (char *)0x0) {
            std::__cxx11::string::append((char *)param_3);
            std::__cxx11::string::append((char *)param_3);
            if (!param_4) {
              return true;
            }
            iVar4 = 0;
            bVar5 = param_4;
          }
        }
      }
      else {
        if (3 < iVar4) goto LAB_00015bdc;
        iVar4 = 0;
      }
    } while (iVar1 != -1);
  }
  return bVar5;
}



/* ===== executeCMD @ 00015c54 size=192 ===== */

/* executeCMD(char const*, std::__cxx11::string&, bool) */

int executeCMD(char *param_1,string *param_2,bool param_3)

{
  FILE *__stream;
  char *pcVar1;
  int iVar2;
  char acStack_1018 [4100];
  
  memset(acStack_1018,0,0x1000);
  __stream = popen(param_1,(char *)(DAT_00015d14 + 0x15c90));
  if (__stream == (FILE *)0x0) {
    iVar2 = 0;
  }
  else {
    if (param_3) {
      iVar2 = 0;
      while (pcVar1 = fgets(acStack_1018,0x1000,__stream), pcVar1 != (char *)0x0) {
        std::__cxx11::string::append((char *)param_2);
        iVar2 = iVar2 + 1;
      }
    }
    else {
      pcVar1 = fgets(acStack_1018,0x1000,__stream);
      iVar2 = 0;
      if (pcVar1 != (char *)0x0) {
        std::__cxx11::string::append((char *)param_2);
        iVar2 = 1;
      }
    }
    pclose(__stream);
  }
  return iVar2;
}



/* ===== _fini @ 00015d18 size=16 ===== */

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



/* ===== <EXTERNAL>::std::ios_base::Init::~Init @ 00031008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ios_base::Init::~Init(Init *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__deregister_frame_info @ 00031020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __deregister_frame_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__throw_bad_alloc @ 00031024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::ios_base::Init::Init @ 00031028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::ios_base::Init::Init(Init *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::abort @ 0003102c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputc @ 00031030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::string @ 00031034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__cxx11::string::string(string *this,string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::operator= @ 00031038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__cxx11::string::operator=(string *this,char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.new[] @ 0003103c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new__(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00031040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strtok_r @ 00031044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strtok_r(char *__s,char *__delim,char **__save_ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::write @ 00031048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_atexit @ 0003104c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::close @ 00031050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::unlink @ 00031054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__uClibc_main @ 00031058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __uClibc_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.delete @ 0003105c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fprintf @ 00031060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fputs @ 00031064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fgets @ 00031068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printf @ 0003106c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00031070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 00031074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::send @ 00031078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::recv @ 0003107c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::isprint @ 00031080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isprint(int param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getopt_long @ 00031084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void getopt_long(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_dispose @ 00031088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_dispose(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::atoi @ 0003108c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::string @ 00031090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__cxx11::string::string(string *this,string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::append @ 00031094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::append(char *param_1)

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



/* ===== <EXTERNAL>::std::__cxx11::string::operator= @ 0003109c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __thiscall std::__cxx11::string::operator=(string *this,string *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fopen @ 000310a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__throw_length_error @ 000310a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_length_error(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::socket @ 000310a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::_S_copy_chars @ 000310ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_S_copy_chars(char *param_1,char *param_2,char *param_3)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::connect @ 000310b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.new @ 000310b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::_M_create @ 000310b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::_M_create(uint *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::inet_addr @ 000310bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

in_addr_t inet_addr(char *__cp)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__throw_logic_error @ 000310c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_logic_error(char *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::operator.delete[] @ 000310c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete__(void *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::signal @ 000310c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::operator<< @ 000310cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::operator<<(ostream *param_1,char *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pclose @ 000310d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::popen @ 000310d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * popen(char *__command,char *__modes)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 000310d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::__cxx11::string::append @ 000310dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__cxx11::string::append(char *param_1,uint param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vsnprintf @ 000310e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::access @ 000310e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access(char *__name,int __type)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::getc @ 000310e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getc(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strerror @ 000310ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 000310f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlen @ 000310f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 000310f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::std::endl<char,std::char_traits<char>> @ 000310fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ostream * std::endl<char,std::char_traits<char>>(ostream *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 00031100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::puts @ 00031104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


