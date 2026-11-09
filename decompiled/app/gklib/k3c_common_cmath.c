// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/common/cmath   functions: 9
/* k3c/common/cmath.CmplxExp @ 00488884 (size 428) */

/* WARNING: Removing unreachable block (ram,0x004889ac) */
/* WARNING: Removing unreachable block (ram,0x004889c4) */

void k3c_common_cmath_CmplxExp(undefined4 param_1)

{
  int unaff_r10;
  double in_stack_00000004;
  double in_stack_0000000c;
  undefined8 in_stack_00000014;
  undefined8 in_stack_0000001c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    param_1 = FUN_0009bf64();
  }
  if ((*DAT_00488a34 < in_stack_00000004) || (in_stack_00000004 < *DAT_00488a38)) {
    if ((0.0 < in_stack_00000004) && (in_stack_0000000c == 0.0)) {
      return;
    }
    if ((*DAT_00488a34 < in_stack_0000000c) || (in_stack_0000000c < *DAT_00488a38)) {
      if (0.0 <= in_stack_00000004) {
        return;
      }
      return;
    }
  }
  k3c_common_cmath__Cfunc_exp(param_1);
  k3c_common_cmath_Sincos();
  return;
}



/* k3c/common/cmath._Cfunc_cos @ 00488a44 (size 140) */

void k3c_common_cmath__Cfunc_cos(void)

{
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined8 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_0000000c = 0;
  FUN_0008ed9c();
  if (*DAT_00488ad8 != '\0') {
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/common/cmath._Cfunc_exp @ 00488ae0 (size 140) */

void k3c_common_cmath__Cfunc_exp(void)

{
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined8 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_0000000c = 0;
  FUN_0008ed9c();
  if (*DAT_00488b74 != '\0') {
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/common/cmath._Cfunc_fmax @ 00488b7c (size 188) */

void k3c_common_cmath__Cfunc_fmax(void)

{
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined8 in_stack_0000000c;
  undefined8 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000014 = 0;
  FUN_0008ed9c();
  if (*DAT_00488c40 != '\0') {
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/common/cmath._Cfunc_pow @ 00488c48 (size 188) */

void k3c_common_cmath__Cfunc_pow(void)

{
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined8 in_stack_0000000c;
  undefined8 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000014 = 0;
  FUN_0008ed9c();
  if (*DAT_00488d0c != '\0') {
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/common/cmath._Cfunc_round @ 00488d14 (size 140) */

void k3c_common_cmath__Cfunc_round(void)

{
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined8 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_0000000c = 0;
  FUN_0008ed9c();
  if (*DAT_00488da8 != '\0') {
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/common/cmath._Cfunc_sin @ 00488db0 (size 140) */

void k3c_common_cmath__Cfunc_sin(void)

{
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined8 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_0000000c = 0;
  FUN_0008ed9c();
  if (*DAT_00488e44 != '\0') {
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/common/cmath._Cfunc_sqrt @ 00488e4c (size 140) */

void k3c_common_cmath__Cfunc_sqrt(void)

{
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined8 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_0000000c = 0;
  FUN_0008ed9c();
  if (*DAT_00488ee0 != '\0') {
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/common/cmath.Sincos @ 00488ee8 (size 80) */

void k3c_common_cmath_Sincos(void)

{
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined8 in_stack_0000000c;
  undefined8 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_common_cmath__Cfunc_sin();
  k3c_common_cmath__Cfunc_cos();
  return;
}




// ---- rebuilt functions (fixed language + exact size) ----
// gklib — rebuilt function bodies (fixed language)

/* ===== k3c/internal/pkg/printer.(*PrinterConfig)._strip_duplicates @ 00450bcc size=1132 ===== */

/* WARNING: Removing unreachable block (ram,0x00450e90) */
/* WARNING: Removing unreachable block (ram,0x00450ee8) */
/* WARNING: Removing unreachable block (ram,0x00450fe4) */
/* WARNING: Removing unreachable block (ram,0x00450ef4) */
/* WARNING: Removing unreachable block (ram,0x00450ee0) */
/* WARNING: Removing unreachable block (ram,0x00450f14) */
/* WARNING: Removing unreachable block (ram,0x00450f2c) */
/* WARNING: Removing unreachable block (ram,0x00450f84) */
/* WARNING: Removing unreachable block (ram,0x00450f78) */
/* WARNING: Removing unreachable block (ram,0x00450f20) */
/* WARNING: Removing unreachable block (ram,0x00450fa0) */
/* WARNING: Removing unreachable block (ram,0x00450d20) */
/* WARNING: Removing unreachable block (ram,0x00450d78) */
/* WARNING: Removing unreachable block (ram,0x00450d6c) */

void k3c_internal_pkg_printer___PrinterConfig___strip_duplicates(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int unaff_r10;
  undefined4 in_lr;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puStack_44;
  int iStack_40;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    in_lr = 0x451034;
    FUN_0009bf64();
  }
  FUN_0014f168();
  iVar3 = 0;
  do {
    if (iStack_40 <= iVar3) {
      FUN_0014f8fc();
      return;
    }
    iVar5 = 1;
    uVar6 = 0;
    pcVar4 = PTR_DAT_00451040;
    FUN_0014f168();
    if (iStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0009dbd4(0,0);
    }
    iVar2 = puStack_44[1];
    if (iVar2 != 0) {
      pcVar1 = (char *)*puStack_44;
      if ((*pcVar1 != ' ') && (*pcVar1 != '\t')) {
        FUN_00151ce4();
        if (iVar5 == 0) {
LAB_00451010:
                    /* WARNING: Subroutine does not return */
          FUN_0009dbd4(0,0);
        }
        if (*pcVar4 != '[') {
          FUN_0014f168();
          if (iStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0009dbd4(0,0);
          }
          FUN_00151ce4();
          FUN_00093560();
                    /* WARNING: Subroutine does not return */
          FUN_00025f60();
        }
        if (iVar5 == 1) {
          FUN_0009dc34(1,0,pcVar4,0,in_lr,pcVar1,iVar2,pcVar4,1,uVar6);
          goto LAB_00451010;
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}



/* ===== k3c/common/errors.init @ 00468a78 size=21068 ===== */

void k3c_common_errors_init(void)

{
  int unaff_r10;
  char cStack_4a0;
  
  while (&stack0x00000000 + iRam00469238 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  func_0x0046e164();
  FUN_00093560();
  if (cStack_4a0 == '\0') {
    FUN_000763e8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00022cf8();
}



/* ===== k3c/internal/pkg/toolhead.(*PrinterHoming).Cmd_G28 @ 00501660 (assembly) ===== */
k3c/internal/pkg/toolhead.(*PrinterHoming).Cmd_G28:
    00501660  ldr r1,[r10,#0x8]
    00501664  sub r2,sp,#0x20
    00501668  cmp r2,r1
    0050166c  bls 0x00501ad0
    00501670  str lr,[sp,#-0xa0]!
    00501674  mov r0,#0x0
    00501678  str r0,[sp,#0x9c]
    0050167c  mov r2,#0x0
    00501680  strb r2,[sp,#0x2b]
    00501684  mov r3,#0x0
    00501688  str r3,[sp,#0xac]
    0050168c  mov r4,#0x0
    00501690  str r4,[sp,#0xb0]
    00501694  mov r5,#0x1
    00501698  ldr r11,[0x501ae0]
    0050169c  str r5,[r11,#0x0]
    005016a0  ldr r6,[0x501ae4]
    005016a4  str r6,[sp,#0x9c]
    005016a8  mov r6,#0x1
    005016ac  strb r6,[sp,#0x2b]
    005016b0  ldr r6,[sp,#0xa8]
    005016b4  ldr r7,[r6,#0x14]
    005016b8  cmp r7,#0x0
    005016bc  beq 0x005016f4
    005016c0  add r1,sp,#0x6c
    005016c4  mov r0,#0x0
    005016c8  bl 0x0009dee4
    005016cc  ldr r2,[0x501ae8]
    005016d0  str r2,[sp,#0x4]
    005016d4  str r7,[sp,#0x8]
    005016d8  add r2,sp,#0x6c
    005016dc  str r2,[sp,#0xc]
    005016e0  bl 0x00091764
    005016e4  mov r0,#0x0
    005016e8  ldr r1,[0x501aec]
    005016ec  mov r2,#0x0
    005016f0  b 0x00501978
    005016f4  ldr r0,[0x501af0]
    005016f8  str r0,[sp,#0x4]
    005016fc  mov r0,#0x5
    00501700  str r0,[sp,#0x8]
    00501704  ldr r0,[0x501af4]
    00501708  str r0,[sp,#0xc]
    0050170c  str r5,[sp,#0x10]
    00501710  mov r0,#0x0
    00501714  str r0,[sp,#0x14]
    00501718  mvn r1,#0x0
    0050171c  str r1,[sp,#0x18]
    00501720  bl 0x0014f168
    00501724  ldr r0,[sp,#0x1c]
    00501728  str r0,[sp,#0x50]
    0050172c  ldr r1,[sp,#0x20]
    00501730  str r1,[sp,#0x2c]
    00501734  mov r2,#0x0
    00501738  b 0x0050174c
    0050173c  ldr r3,[sp,#0x34]
    00501740  add r2,r3,#0x1
    00501744  ldr r0,[sp,#0x50]
    00501748  ldr r1,[sp,#0x2c]
    0050174c  cmp r2,r1
    00501750  bge 0x005017d0
    00501754  str r2,[sp,#0x34]
    00501758  ldr r1,[r0,r2,lsl #0x3]
    0050175c  add r3,r0,r2, lsl #0x3
    00501760  ldr r3,[r3,#0x4]
    00501764  ldr r4,[sp,#0xa8]
    00501768  ldr r5,[r4,#0x14]
    0050176c  ldr r6,[0x501ae8]
    00501770  str r6,[sp,#0x4]
    00501774  str r5,[sp,#0x8]
    00501778  str r1,[sp,#0xc]
    0050177c  str r3,[sp,#0x10]
    00501780  bl 0x00093560
    00501784  ldrb r0,[sp,#0x18]
    00501788  cmp r0,#0x0
    0050178c  beq 0x0050173c
    00501790  ldr r0,[0x501aec]
    00501794  str r0,[sp,#0x4]
    00501798  mov r0,#0x1
    0050179c  str r0,[sp,#0x8]
    005017a0  mov r1,#0x0
    005017a4  str r1,[sp,#0xc]
    005017a8  str r0,[sp,#0x10]
    005017ac  ldr r1,[0x501af8]
    005017b0  str r1,[sp,#0x14]
    005017b4  bl 0x000987f4
    005017b8  ldr r0,[sp,#0x18]
    005017bc  ldr r1,[sp,#0x20]
    005017c0  ldr r2,[sp,#0x34]
    005017c4  str r2,[r0,#0x0]
    005017c8  mov r2,#0x1
    005017cc  b 0x005017dc
    005017d0  mov r2,#0x0
    005017d4  mov r1,#0x0
    005017d8  ldr r0,[0x501aec]
    005017dc  cmp r2,#0x0
    005017e0  bne 0x0050180c
    005017e4  ldr r0,[0x501afc]
    005017e8  str r0,[sp,#0x4]
    005017ec  bl 0x00022cf8
    005017f0  ldr r0,[sp,#0x8]
    005017f4  mov r1,#0x1
    005017f8  str r1,[r0,#0x4]
    005017fc  mov r1,#0x2
    00501800  str r1,[r0,#0x8]
    00501804  mov r2,#0x3
    00501808  mov r1,#0x3
    0050180c  str r0,[sp,#0x60]
    00501810  str r2,[sp,#0x3c]
    00501814  str r1,[sp,#0x40]
    00501818  ldr r3,[sp,#0xa4]
    0050181c  ldr r4,[r3,#0x0]
    00501820  str r4,[sp,#0x4]
    00501824  bl 0x004ff444
    00501828  ldr r0,[sp,#0x8]
    0050182c  ldr r1,[sp,#0x3c]
    00501830  str r1,[r0,#0xc]
    00501834  ldr r1,[sp,#0x40]
    00501838  str r1,[r0,#0x10]
    0050183c  ldr r11,[0x501b00]
    00501840  ldr r1,[r11,#0x0]
    00501844  cmp r1,#0x0
    00501848  bne 0x00501854
    0050184c  ldr r1,[sp,#0x60]
    00501850  b 0x00501868
    00501854  bl 0x0009db64
    00501858  ldr r1,[sp,#0x60]
    0050185c  str r1,[r8,#0x0]
    00501860  ldr r2,[r0,#0x8]
    00501864  str r2,[r8,#0x4]
    00501868  str r0,[sp,#0x5c]
    0050186c  str r1,[r0,#0x8]
    00501870  ldr r1,[sp,#0xa4]
    00501874  ldr r2,[r1,#0x0]
    00501878  str r2,[sp,#0x4]
    0050187c  ldr r2,[0x501b04]
    00501880  str r2,[sp,#0x8]
    00501884  mov r2,#0x8
    00501888  str r2,[sp,#0xc]
    0050188c  ldr r2,[0x501b08]
    00501890  str r2,[sp,#0x10]
    00501894  ldr r2,[0x501aec]
    00501898  str r2,[sp,#0x14]
    0050189c  bl 0x0045bb60
    005018a0  ldr r0,[sp,#0x18]
    005018a4  ldr r1,[0x501b0c]
    005018a8  cmp r0,r1
    005018ac  bne 0x00501940
    005018b0  ldr r0,[sp,#0x1c]
    005018b4  ldr r1,[r0,#0x14c]
    005018b8  cmp r1,#0x0
    005018bc  beq 0x005018c4
    005018c0  ldr r1,[r1,#0x4]
    005018c4  cmp r1,#0x0
    005018c8  beq 0x00501934
    005018cc  ldr r0,[r0,#0x150]
    005018d0  str r0,[sp,#0x58]
    005018d4  ldr r2,[0x501b10]
    005018d8  str r2,[sp,#0x4]
    005018dc  str r1,[sp,#0x8]
    005018e0  bl 0x00020dac
    005018e4  ldr r0,[sp,#0xc]
    005018e8  ldr r1,[sp,#0xa4]
    005018ec  str r1,[sp,#0x4]
    005018f0  str r0,[sp,#0x8]
    005018f4  ldr r0,[sp,#0x58]
    005018f8  str r0,[sp,#0xc]
    005018fc  ldr r0,[sp,#0x5c]
    00501900  str r0,[sp,#0x10]
    00501904  bl 0x00501b1c
    00501908  mov r0,#0x2
    0050190c  ldr r11,[0x501ae0]
    00501910  str r0,[r11,#0x0]
    00501914  mov r0,#0x0
    00501918  str r0,[sp,#0xac]
    0050191c  mov r0,#0x0
    00501920  str r0,[sp,#0xb0]
    00501924  mov r0,#0x0
    00501928  strb r0,[sp,#0x2b]
    0050192c  bl 0x00517c28
    00501930  ldr pc,[sp],#0xa0
    00501934  ldr r0,[0x501b14]
    00501938  str r0,[sp,#0x4]
    0050193c  bl 0x00020b18
    00501940  str r0,[sp,#0x4]
    00501944  str r1,[sp,#0x8]
    00501948  ldr r0,[0x501b18]
    0050194c  str r0,[sp,#0xc]
    00501950  bl 0x000209b4
    00501954  str r2,[sp,#0x4c]
    00501958  str r0,[sp,#0x48]
    0050195c  str r1,[sp,#0x68]
    00501960  add r3,sp,#0x6c
    00501964  str r3,[sp,#0x4]
    00501968  bl 0x000919c8
    0050196c  ldr r0,[sp,#0x4c]
    00501970  ldr r1,[sp,#0x68]
    00501974  ldr r2,[sp,#0x48]
    00501978  ldr r3,[sp,#0x6c]
    0050197c  cmp r3,#0x0
    00501980  beq 0x00501a60
    00501984  str r0,[sp,#0x40]
    00501988  str r2,[sp,#0x3c]
    0050198c  str r1,[sp,#0x60]
    00501990  ldr r0,[r3,#0x4]
    00501994  str r0,[sp,#0x44]
    00501998  ldr r1,[r3,#0x0]
    0050199c  str r1,[sp,#0x64]
    005019a0  ldr r2,[0x501af0]
    005019a4  str r2,[sp,#0x4]
    005019a8  mov r3,#0x5
    005019ac  str r3,[sp,#0x8]
    005019b0  ldr r4,[0x501af4]
    005019b4  str r4,[sp,#0xc]
    005019b8  mov r5,#0x1
    005019bc  str r5,[sp,#0x10]
    005019c0  mov r6,#0x0
    005019c4  str r6,[sp,#0x14]
    005019c8  mvn r7,#0x0
    005019cc  str r7,[sp,#0x18]
    005019d0  bl 0x0014f168
    005019d4  ldr r0,[sp,#0x1c]
    005019d8  str r0,[sp,#0x54]
    005019dc  ldr r1,[sp,#0x20]
    005019e0  str r1,[sp,#0x30]
    005019e4  ldr r2,[sp,#0x44]
    005019e8  mov r3,#0x0
    005019ec  b 0x00501a74
    005019f0  ldr r0,[sp,#0x3c]
    005019f4  add r0,r0,#0x1
    005019f8  ldr r1,[sp,#0x40]
    005019fc  cmp r1,r0
    00501a00  bcc 0x00501a10
    00501a04  ldr r1,[sp,#0x60]
    00501a08  ldr r2,[sp,#0x40]
    00501a0c  b 0x00501a40
    00501a10  ldr r2,[sp,#0x60]
    00501a14  str r2,[sp,#0x4]
    00501a18  str r0,[sp,#0x8]
    00501a1c  str r1,[sp,#0xc]
    00501a20  mov r0,#0x1
    00501a24  str r0,[sp,#0x10]
    00501a28  ldr r1,[0x501af8]
    00501a2c  str r1,[sp,#0x14]
    00501a30  bl 0x000987f4
    00501a34  ldr r1,[sp,#0x18]
    00501a38  ldr r0,[sp,#0x1c]
    00501a3c  ldr r2,[sp,#0x20]
    00501a40  sub r3,r0,#0x1
    00501a44  ldr r4,[sp,#0x38]
    00501a48  str r4,[r1,r3,lsl #0x2]
    00501a4c  b 0x00501954
    00501a50  ldr r2,[sp,#0x40]
    00501a54  ldr r0,[sp,#0x3c]
    00501a58  ldr r1,[sp,#0x60]
    00501a5c  b 0x00501954
    00501a60  cpy r3,r1
    00501a64  cpy r1,r0
    00501a68  cpy r0,r3
    00501a6c  b 0x005017dc
    00501a70  add r3,r3,#0x1
    00501a74  cmp r3,r1
    00501a78  bge 0x00501a50
    00501a7c  add r4,r0,r3, lsl #0x3
    00501a80  ldr r4,[r4,#0x4]
    00501a84  ldr r5,[r0,r3,lsl #0x3]
    00501a88  cmp r4,r2
    00501a8c  bne 0x00501a70
    00501a90  str r3,[sp,#0x38]
    00501a94  ldr r0,[sp,#0x64]
    00501a98  str r0,[sp,#0x4]
    00501a9c  str r5,[sp,#0x8]
    00501aa0  str r2,[sp,#0xc]
    00501aa4  bl 0x00018250
    00501aa8  ldrb r0,[sp,#0x10]
    00501aac  cmp r0,#0x0
    00501ab0  bne 0x005019f0
    00501ab4  ldr r0,[sp,#0x54]
    00501ab8  ldr r1,[sp,#0x30]
    00501abc  ldr r2,[sp,#0x44]
    00501ac0  ldr r3,[sp,#0x38]
    00501ac4  b 0x00501a70
    00501ad0  cpy r3,lr
    00501ad4  bl 0x0009bf64
    00501ad8  b 0x00501660
