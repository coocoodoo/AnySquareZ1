// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/pkg/chelper   functions: 83
/* k3c/internal/pkg/chelper.init @ 0043f580 (size 84) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_chelper_init(void)

{
  undefined4 extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x43f5d0;
    FUN_0009bf64();
  }
  k3c_internal_pkg_chelper__Cmacro_NULL();
  if (*_UNK_0043f5d8 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *_UNK_0043f5dc;
    uStack_4 = extraout_r1;
  }
  *_UNK_0043f5dc = uStack_4;
                    /* WARNING: Could not recover jumptable at 0x0043f5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/chelper._Cmacro_NULL @ 0043f5e0 (size 72) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_chelper__Cmacro_NULL(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x43f624;
    FUN_0009bf64();
  }
  in_stack_00000004 = 0;
  FUN_0008ed9c();
                    /* WARNING: Could not recover jumptable at 0x0043f618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_cartesian_stepper_alloc @ 0043f630 (size 116) */

void k3c_internal_pkg_chelper__Cfunc_cartesian_stepper_alloc(void)

{
  int unaff_r10;
  undefined1 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000008 = 0;
  FUN_0008ed9c();
  if (*PTR_DAT_0043f6ac != '\0') {
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_corexy_stepper_alloc @ 0043f6b8 (size 116) */

void k3c_internal_pkg_chelper__Cfunc_corexy_stepper_alloc(void)

{
  int unaff_r10;
  undefined1 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000008 = 0;
  FUN_0008ed9c();
  if (*PTR_DAT_0043f734 != '\0') {
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_extruder_set_pressure_advance @ 0043f740 (size 196) */

void k3c_internal_pkg_chelper__Cfunc_extruder_set_pressure_advance(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*PTR_DAT_0043f80c != '\0') {
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_extruder_stepper_alloc @ 0043f818 (size 72) */

void k3c_internal_pkg_chelper__Cfunc_extruder_stepper_alloc(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000004 = 0;
  FUN_0008ed9c();
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_get_monotonic @ 0043f868 (size 76) */

void k3c_internal_pkg_chelper__Cfunc_get_monotonic(void)

{
  int unaff_r10;
  undefined8 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000004 = 0;
  FUN_0008ed9c();
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_init_logging_callback @ 0043f8bc (size 64) */

void k3c_internal_pkg_chelper__Cfunc_init_logging_callback(void)

{
  int unaff_r10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_input_shaper_alloc @ 0043f904 (size 72) */

void k3c_internal_pkg_chelper__Cfunc_input_shaper_alloc(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000004 = 0;
  FUN_0008ed9c();
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_input_shaper_get_step_generation_window @ 0043f954 (size 156) */

void k3c_internal_pkg_chelper__Cfunc_input_shaper_get_step_generation_window(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined8 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000010 = 0;
  FUN_0008ed9c();
  if (*PTR_DAT_0043f9f8 != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008ed60();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_input_shaper_set_shaper_params @ 0043fa04 (size 200) */

void k3c_internal_pkg_chelper__Cfunc_input_shaper_set_shaper_params(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000018 = 0;
  FUN_0008ed9c();
  if (*PTR_DAT_0043fad4 != '\0') {
    FUN_0008ed60();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008ed60();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_input_shaper_set_sk @ 0043faec (size 128) */

void k3c_internal_pkg_chelper__Cfunc_input_shaper_set_sk(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_0000000c = 0;
  FUN_0008ed9c();
  if (*DAT_0043fb74 != '\0') {
    FUN_0008ed60();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_itersolve_calc_position_from_coord @ 0043fb7c (size 256) */

void k3c_internal_pkg_chelper__Cfunc_itersolve_calc_position_from_coord(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000020 = 0;
  FUN_0008ed9c();
  if (*DAT_0043fc84 != '\0') {
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_itersolve_check_active @ 0043fc90 (size 160) */

void k3c_internal_pkg_chelper__Cfunc_itersolve_check_active(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x43fd2c;
    FUN_0009bf64();
  }
  in_stack_00000010 = 0;
  FUN_0008ed9c();
  if (*PTR_DAT_0043fd38 != '\0') {
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
                    /* WARNING: Could not recover jumptable at 0x0043fd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_itersolve_generate_steps @ 0043fd44 (size 156) */

void k3c_internal_pkg_chelper__Cfunc_itersolve_generate_steps(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x43fddc;
    FUN_0009bf64();
  }
  in_stack_00000010 = 0;
  FUN_0008ed9c();
  if (*PTR_DAT_0043fde8 != '\0') {
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
                    /* WARNING: Could not recover jumptable at 0x0043fdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_itersolve_get_commanded_pos @ 0043fdf4 (size 112) */

void k3c_internal_pkg_chelper__Cfunc_itersolve_get_commanded_pos(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000008 = 0;
  FUN_0008ed9c();
  if (*DAT_0043fe6c != '\0') {
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_itersolve_is_active_axis @ 0043fe74 (size 136) */

void k3c_internal_pkg_chelper__Cfunc_itersolve_is_active_axis(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_0000000c = 0;
  FUN_0008ed9c();
  if (*PTR_DAT_0043ff04 != '\0') {
    FUN_0008ed60();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_itersolve_set_position @ 0043ff14 (size 244) */

void k3c_internal_pkg_chelper__Cfunc_itersolve_set_position(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*PTR_DAT_00440010 != '\0') {
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_itersolve_set_stepcompress @ 0044001c (size 172) */

void k3c_internal_pkg_chelper__Cfunc_itersolve_set_stepcompress(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined8 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*PTR_DAT_004400d0 != '\0') {
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_itersolve_set_trapq @ 004400e0 (size 120) */

void k3c_internal_pkg_chelper__Cfunc_itersolve_set_trapq(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*PTR_DAT_00440160 != '\0') {
    FUN_0008ed60();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_serialqueue_alloc @ 0044016c (size 164) */

void k3c_internal_pkg_chelper__Cfunc_serialqueue_alloc(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000010 = 0;
  FUN_0008ed9c();
  if (*PTR_DAT_00440218 != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_serialqueue_alloc_commandqueue @ 00440228 (size 72) */

void k3c_internal_pkg_chelper__Cfunc_serialqueue_alloc_commandqueue(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000004 = 0;
  FUN_0008ed9c();
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_serialqueue_exit @ 00440278 (size 104) */

void k3c_internal_pkg_chelper__Cfunc_serialqueue_exit(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*DAT_004402e8 != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_serialqueue_extract_old @ 004402f0 (size 180) */

void k3c_internal_pkg_chelper__Cfunc_serialqueue_extract_old(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000014 = 0;
  FUN_0008ed9c();
  if (*DAT_004403ac != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_serialqueue_free @ 004403bc (size 104) */

void k3c_internal_pkg_chelper__Cfunc_serialqueue_free(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*DAT_0044042c != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_serialqueue_free_commandqueue @ 00440434 (size 104) */

void k3c_internal_pkg_chelper__Cfunc_serialqueue_free_commandqueue(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*DAT_004404a4 != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_serialqueue_get_stats @ 004404ac (size 148) */

void k3c_internal_pkg_chelper__Cfunc_serialqueue_get_stats(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*DAT_00440548 != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_serialqueue_pull @ 00440558 (size 124) */

void k3c_internal_pkg_chelper__Cfunc_serialqueue_pull(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*PTR_DAT_004405dc != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_serialqueue_send @ 004405e8 (size 292) */

void k3c_internal_pkg_chelper__Cfunc_serialqueue_send(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*DAT_00440714 != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_serialqueue_set_clock_est @ 0044072c (size 280) */

void k3c_internal_pkg_chelper__Cfunc_serialqueue_set_clock_est(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*PTR_DAT_0044084c != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_serialqueue_set_receive_window @ 0044085c (size 128) */

void k3c_internal_pkg_chelper__Cfunc_serialqueue_set_receive_window(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*PTR_DAT_004408e4 != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_serialqueue_set_wire_frequency @ 004408f0 (size 152) */

void k3c_internal_pkg_chelper__Cfunc_serialqueue_set_wire_frequency(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*PTR_DAT_00440990 != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_stepcompress_alloc @ 0044099c (size 112) */

void k3c_internal_pkg_chelper__Cfunc_stepcompress_alloc(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000008 = 0;
  FUN_0008ed9c();
  if (*DAT_00440a14 != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_stepcompress_extract_old @ 00440a1c (size 236) */

void k3c_internal_pkg_chelper__Cfunc_stepcompress_extract_old(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000020 = 0;
  FUN_0008ed9c();
  if (*PTR_DAT_00440b10 != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_stepcompress_fill @ 00440b24 (size 176) */

void k3c_internal_pkg_chelper__Cfunc_stepcompress_fill(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*PTR_DAT_00440bdc != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_stepcompress_find_past_position @ 00440bec (size 160) */

void k3c_internal_pkg_chelper__Cfunc_stepcompress_find_past_position(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  FUN_0008ed9c();
  if (*DAT_00440c94 != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_stepcompress_queue_msg @ 00440ca0 (size 156) */

void k3c_internal_pkg_chelper__Cfunc_stepcompress_queue_msg(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000010 = 0;
  FUN_0008ed9c();
  if (*DAT_00440d44 != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_stepcompress_reset @ 00440d54 (size 152) */

void k3c_internal_pkg_chelper__Cfunc_stepcompress_reset(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000010 = 0;
  FUN_0008ed9c();
  if (*DAT_00440df4 != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_stepcompress_set_invert_sdir @ 00440e00 (size 128) */

void k3c_internal_pkg_chelper__Cfunc_stepcompress_set_invert_sdir(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*PTR_DAT_00440e88 != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_stepcompress_set_last_position @ 00440e94 (size 192) */

void k3c_internal_pkg_chelper__Cfunc_stepcompress_set_last_position(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000018 = 0;
  FUN_0008ed9c();
  if (*DAT_00440f5c != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_steppersync_alloc @ 00440f6c (size 180) */

void k3c_internal_pkg_chelper__Cfunc_steppersync_alloc(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000014 = 0;
  FUN_0008ed9c();
  if (*PTR_DAT_00441028 != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_steppersync_flush @ 00441038 (size 192) */

void k3c_internal_pkg_chelper__Cfunc_steppersync_flush(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000018 = 0;
  FUN_0008ed9c();
  if (*DAT_00441100 != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_steppersync_free @ 0044110c (size 104) */

void k3c_internal_pkg_chelper__Cfunc_steppersync_free(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*DAT_0044117c != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_steppersync_set_time @ 00441184 (size 200) */

void k3c_internal_pkg_chelper__Cfunc_steppersync_set_time(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*PTR_DAT_00441254 != '\0') {
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_trapq_alloc @ 00441260 (size 72) */

void k3c_internal_pkg_chelper__Cfunc_trapq_alloc(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000004 = 0;
  FUN_0008ed9c();
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_trapq_append @ 004412b0 (size 724) */

void k3c_internal_pkg_chelper__Cfunc_trapq_append(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x441580;
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*PTR_DAT_0044158c != '\0') {
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
                    /* WARNING: Could not recover jumptable at 0x00441574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_trapq_extract_old @ 00441598 (size 248) */

void k3c_internal_pkg_chelper__Cfunc_trapq_extract_old(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000020 = 0;
  FUN_0008ed9c();
  if (*PTR_DAT_00441698 != '\0') {
    FUN_0008ed60();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_trapq_finalize_moves @ 004416ac (size 196) */

void k3c_internal_pkg_chelper__Cfunc_trapq_finalize_moves(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x44176c;
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*PTR_DAT_00441778 != '\0') {
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
                    /* WARNING: Could not recover jumptable at 0x00441760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_trapq_set_position @ 00441784 (size 292) */

void k3c_internal_pkg_chelper__Cfunc_trapq_set_position(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*DAT_004418b0 != '\0') {
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_trdispatch_alloc @ 004418bc (size 72) */

void k3c_internal_pkg_chelper__Cfunc_trdispatch_alloc(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000004 = 0;
  FUN_0008ed9c();
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_trdispatch_mcu_alloc @ 0044190c (size 252) */

void k3c_internal_pkg_chelper__Cfunc_trdispatch_mcu_alloc(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000020 = 0;
  FUN_0008ed9c();
  if (*PTR_DAT_00441a10 != '\0') {
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_trdispatch_mcu_setup @ 00441a24 (size 260) */

void k3c_internal_pkg_chelper__Cfunc_trdispatch_mcu_setup(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*DAT_00441b30 != '\0') {
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
    FUN_0008f6c0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_trdispatch_start @ 00441b3c (size 124) */

void k3c_internal_pkg_chelper__Cfunc_trdispatch_start(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*DAT_00441bc0 != '\0') {
    FUN_0008ed60();
    FUN_00020ce0();
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper._Cfunc_trdispatch_stop @ 00441bcc (size 100) */

void k3c_internal_pkg_chelper__Cfunc_trdispatch_stop(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008ed9c();
  if (*DAT_00441c38 != '\0') {
    FUN_0008ed60();
  }
  return;
}



/* k3c/internal/pkg/chelper.goLogCallback @ 00441c40 (size 140) */

void k3c_internal_pkg_chelper_goLogCallback(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_000992e4();
  FUN_0008f77c();
  k3c_internal_pkg_logger_Infof();
  return;
}



/* k3c/internal/pkg/chelper.Serialqueue_pull @ 00441cd8 (size 88) */

void k3c_internal_pkg_chelper_Serialqueue_pull(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if ((in_stack_00000004 != 0) && (in_stack_0000000c != 0)) {
    k3c_internal_pkg_chelper_Serialqueue_pull_func1();
    return;
  }
  return;
}



/* k3c/internal/pkg/chelper.Serialqueue_pull.func1 @ 00441d30 (size 176) */

void k3c_internal_pkg_chelper_Serialqueue_pull_func1(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  undefined1 uVar3;
  undefined8 uVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      uVar4 = CONCAT44(DAT_00441de4,*(int *)((int)register0x00000054 + 4));
      uVar3 = 0;
      if (*(int *)((int)register0x00000054 + 4) == DAT_00441de4) {
        uVar3 = *(int *)((int)register0x00000054 + 0xc) == DAT_00441de8;
        if ((bool)uVar3) {
          uVar1 = **(undefined4 **)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -4) = uVar1;
          *(int *)((int)register0x00000054 + -0x18) = DAT_00441de4;
          *(undefined1 **)((int)register0x00000054 + -0x14) =
               (undefined1 *)((int)register0x00000054 + -4);
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
          FUN_0008ee8c();
          *(undefined4 *)((int)register0x00000054 + -0x18) =
               *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          k3c_internal_pkg_chelper__Cfunc_serialqueue_pull();
          return;
        }
        *(int *)((int)register0x00000054 + -0x18) = *(int *)((int)register0x00000054 + 0xc);
        *(int *)((int)register0x00000054 + -0x14) = DAT_00441de8;
        *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_00441dec;
        uVar4 = FUN_000209b4();
      }
      *(undefined8 *)((int)register0x00000054 + -0x18) = uVar4;
      *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_00441dec;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if ((bool)uVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x441ddc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/chelper.Steppersync_alloc @ 00441df0 (size 424) */

void k3c_internal_pkg_chelper_Steppersync_alloc(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  undefined *extraout_r2;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  undefined1 uVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x44) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      iVar3 = *(int *)((int)register0x00000054 + 0x14);
      if (iVar3 < 1) {
        *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00441fa4;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 1;
        FUN_000986b8();
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0xc) = 1;
        *(undefined4 *)((int)register0x00000054 + -8) = 1;
        iVar3 = extraout_r1;
LAB_00441e88:
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined1 **)((int)register0x00000054 + -0x38) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + 0x18);
        k3c_internal_pkg_chelper_Steppersync_alloc_func1
                  (*(undefined4 *)((int)register0x00000054 + 0x18),iVar3);
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
                    /* WARNING: Could not recover jumptable at 0x00441ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x44))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_00441f9c;
      *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      puVar1 = *(undefined **)((int)register0x00000054 + 0xc);
      uVar11 = 0;
      puVar6 = PTR_DAT_00441fa0;
      if (puVar1 == PTR_DAT_00441fa0) {
        iVar4 = **(int **)((int)register0x00000054 + 0x10);
        *(int *)((int)register0x00000054 + -4) = iVar4;
        iVar2 = (*(int **)((int)register0x00000054 + 0x10))[1];
        *(int *)((int)register0x00000054 + -0x14) = iVar2;
        iVar5 = 0;
        while( true ) {
          if (iVar2 <= iVar5) goto LAB_00441e88;
          puVar6 = *(undefined **)(iVar4 + iVar5 * 8);
          uVar11 = puVar6 == PTR_DAT_00441fa4;
          if (!(bool)uVar11) break;
          uVar8 = *(int *)((int)register0x00000054 + -0xc) + 1;
          iVar9 = *(int *)((int)register0x00000054 + -0x10);
          uVar7 = **(undefined4 **)(iVar4 + iVar5 * 8 + 4);
          if (*(uint *)((int)register0x00000054 + -8) < uVar8) {
            *(int *)((int)register0x00000054 + -0x18) = iVar5;
            *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar7;
            *(int *)((int)register0x00000054 + -0x40) = iVar9;
            *(uint *)((int)register0x00000054 + -0x3c) = uVar8;
            *(uint *)((int)register0x00000054 + -0x38) = *(uint *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
            *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_00441fa4;
            FUN_000987f4();
            iVar9 = *(int *)((int)register0x00000054 + -0x2c);
            uVar8 = *(uint *)((int)register0x00000054 + -0x28);
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + -0x24);
            *(int *)((int)register0x00000054 + -0x10) = iVar9;
            iVar2 = *(int *)((int)register0x00000054 + -0x14);
            iVar3 = *(int *)((int)register0x00000054 + 0x14);
            iVar4 = *(int *)((int)register0x00000054 + -4);
            iVar5 = *(int *)((int)register0x00000054 + -0x18);
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x1c);
          }
          *(uint *)((int)register0x00000054 + -0xc) = uVar8;
          *(undefined4 *)(iVar9 + (uVar8 - 1) * 4) = uVar7;
          iVar5 = iVar5 + 1;
        }
        *(undefined **)((int)register0x00000054 + -0x40) = puVar6;
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_00441fa4;
        *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_00441fa8;
        puVar1 = (undefined *)FUN_000209b4();
        puVar6 = extraout_r2;
      }
      *(undefined **)((int)register0x00000054 + -0x40) = puVar1;
      *(undefined **)((int)register0x00000054 + -0x3c) = puVar6;
      *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_00441fa8;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
      if ((bool)uVar11) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x441f94;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/chelper.Steppersync_alloc.func1 @ 00441fac (size 264) */

void k3c_internal_pkg_chelper_Steppersync_alloc_func1(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined *extraout_r2;
  undefined *extraout_r3;
  undefined *puVar5;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  undefined1 uVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
      puVar3 = *(undefined **)((int)register0x00000054 + 4);
      uVar7 = 0;
      puVar5 = PTR_DAT_004420b8;
      if (puVar3 == PTR_DAT_004420b8) {
        uVar7 = (*(undefined4 **)((int)register0x00000054 + 0xc))[1] == 0;
        if (!(bool)uVar7) {
          uVar1 = **(undefined4 **)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x18) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               **(undefined4 **)((int)register0x00000054 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x14) = uVar1;
          *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_004420b8;
          *(undefined1 **)((int)register0x00000054 + -0x28) =
               (undefined1 *)((int)register0x00000054 + -0x14);
          *(undefined4 *)((int)register0x00000054 + -0x24) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
          FUN_0008ee8c();
          puVar2 = *(undefined4 **)((int)register0x00000054 + 0xc);
          uVar4 = puVar2[1];
          uVar1 = puVar2[2];
          *(undefined4 *)((int)register0x00000054 + -0xc) = *puVar2;
          *(undefined4 *)((int)register0x00000054 + -8) = uVar4;
          *(undefined4 *)((int)register0x00000054 + -4) = uVar1;
          *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_004420bc;
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + -0x10);
          *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_004420c0;
          *(undefined1 **)((int)register0x00000054 + -0x20) =
               (undefined1 *)((int)register0x00000054 + -0xc);
          FUN_0008ee8c();
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + 0x14);
          k3c_internal_pkg_chelper__Cfunc_steppersync_alloc();
          *(undefined4 *)((int)register0x00000054 + 0x18) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          return;
        }
        FUN_0009dbd4(0,0);
        puVar3 = extraout_r2;
        puVar5 = extraout_r3;
      }
      *(undefined **)((int)register0x00000054 + -0x2c) = puVar3;
      *(undefined **)((int)register0x00000054 + -0x28) = puVar5;
      *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_004420c4;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
      if ((bool)uVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x4420b0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/chelper.Stepcompress_queue_msg @ 004420c8 (size 136) */

void k3c_internal_pkg_chelper_Stepcompress_queue_msg(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  bool bVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar6 = *(int *)((int)register0x00000054 + 0xc) == DAT_00442154;
      if (bVar6) {
        puVar1 = *(undefined4 **)((int)register0x00000054 + 0x10);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        uVar2 = puVar1[2];
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x14) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x10) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0xc) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        k3c_internal_pkg_chelper_Stepcompress_queue_msg_func1();
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -4);
        return;
      }
      *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 0xc);
      *(int *)((int)register0x00000054 + -0x18) = DAT_00442154;
      *(undefined4 *)((int)register0x00000054 + -0x14) = DAT_00442158;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if (bVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x44214c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/chelper.Stepcompress_queue_msg.func1 @ 0044215c (size 180) */

void k3c_internal_pkg_chelper_Stepcompress_queue_msg_func1(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r2;
  int extraout_r3;
  int iVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  undefined1 uVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      iVar2 = *(int *)((int)register0x00000054 + 4);
      uVar5 = 0;
      iVar3 = DAT_00442214;
      if (iVar2 == DAT_00442214) {
        uVar5 = *(int *)((int)register0x00000054 + 0x10) == 0;
        if (!(bool)uVar5) {
          uVar1 = **(undefined4 **)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -4) = uVar1;
          *(int *)((int)register0x00000054 + -0x18) = DAT_00442214;
          *(undefined1 **)((int)register0x00000054 + -0x14) =
               (undefined1 *)((int)register0x00000054 + -4);
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
          FUN_0008ee8c();
          *(undefined4 *)((int)register0x00000054 + -0x18) =
               *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + 0x18);
          k3c_internal_pkg_chelper__Cfunc_stepcompress_queue_msg();
          *(undefined4 *)((int)register0x00000054 + 0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0xc);
          return;
        }
        FUN_0009dbd4(0,0);
        iVar2 = extraout_r2;
        iVar3 = extraout_r3;
      }
      *(int *)((int)register0x00000054 + -0x18) = iVar2;
      *(int *)((int)register0x00000054 + -0x14) = iVar3;
      *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_00442218;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if ((bool)uVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x44220c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/chelper.Itersolve_set_trapq @ 0044221c (size 120) */

void k3c_internal_pkg_chelper_Itersolve_set_trapq(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (in_stack_0000000c == 0) {
    FUN_00022cf8();
    k3c_internal_pkg_chelper_Itersolve_set_trapq_func1();
  }
  else {
    k3c_internal_pkg_chelper_Itersolve_set_trapq_func2();
  }
  return;
}



/* k3c/internal/pkg/chelper.Itersolve_set_trapq.func2 @ 0044229c (size 196) */

void k3c_internal_pkg_chelper_Itersolve_set_trapq_func2(undefined4 param_1)

{
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  undefined1 uVar2;
  undefined8 uVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      uVar3 = CONCAT44(DAT_00442364,*(int *)((int)register0x00000054 + 4));
      uVar2 = 0;
      if (*(int *)((int)register0x00000054 + 4) == DAT_00442364) {
        uVar2 = *(int *)((int)register0x00000054 + 0xc) == DAT_00442368;
        if ((bool)uVar2) {
          *(int *)((int)register0x00000054 + -0x10) = DAT_00442364;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          FUN_0008ee8c();
          *(int *)((int)register0x00000054 + -0x10) = DAT_00442368;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          FUN_0008ee8c();
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          k3c_internal_pkg_chelper__Cfunc_itersolve_set_trapq();
          return;
        }
        *(int *)((int)register0x00000054 + -0x10) = *(int *)((int)register0x00000054 + 0xc);
        *(int *)((int)register0x00000054 + -0xc) = DAT_00442368;
        *(undefined4 *)((int)register0x00000054 + -8) = DAT_0044236c;
        uVar3 = FUN_000209b4();
      }
      *(undefined8 *)((int)register0x00000054 + -0x10) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -8) = DAT_0044236c;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if ((bool)uVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    unaff_lr = 0x44235c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/chelper.Itersolve_set_trapq.func1 @ 00442370 (size 160) */

void k3c_internal_pkg_chelper_Itersolve_set_trapq_func1(undefined4 param_1)

{
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      bVar2 = *(int *)((int)register0x00000054 + 4) == DAT_00442414;
      if (bVar2) {
        *(int *)((int)register0x00000054 + -0x10) = DAT_00442414;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        FUN_0008ee8c();
        *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_00442418;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        FUN_0008ee8c();
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        k3c_internal_pkg_chelper__Cfunc_itersolve_set_trapq();
        return;
      }
      *(int *)((int)register0x00000054 + -0x10) = *(int *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0xc) = DAT_00442414;
      *(undefined4 *)((int)register0x00000054 + -8) = DAT_0044241c;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    unaff_lr = 0x44240c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/chelper.Itersolve_generate_steps @ 00442420 (size 68) */

void k3c_internal_pkg_chelper_Itersolve_generate_steps(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined8 in_stack_0000000c;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x442460;
    FUN_0009bf64();
  }
  k3c_internal_pkg_chelper_Itersolve_generate_steps_func1();
                    /* WARNING: Could not recover jumptable at 0x00442454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/chelper.Itersolve_generate_steps.func1 @ 00442464 (size 132) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_chelper_Itersolve_generate_steps_func1
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      bVar2 = *(int *)((int)register0x00000054 + 4) == _UNK_004424ec;
      if (bVar2) {
        *(int *)((int)register0x00000054 + -0x10) = _UNK_004424ec;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        FUN_0008ee8c();
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined8 *)((int)register0x00000054 + -0xc) =
             *(undefined8 *)((int)register0x00000054 + 0xc);
        k3c_internal_pkg_chelper__Cfunc_itersolve_generate_steps();
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x004424c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x14))();
        return;
      }
      *(int *)((int)register0x00000054 + -0x10) = *(int *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0xc) = _UNK_004424ec;
      *(undefined4 *)((int)register0x00000054 + -8) = _UNK_004424f0;
      unaff_lr = 0x4424d8;
      uVar3 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x4424e4;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/chelper.Itersolve_check_active @ 004424f4 (size 68) */

void k3c_internal_pkg_chelper_Itersolve_check_active(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined8 in_stack_0000000c;
  undefined8 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x442534;
    FUN_0009bf64();
  }
  k3c_internal_pkg_chelper_Itersolve_check_active_func1();
                    /* WARNING: Could not recover jumptable at 0x00442528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/chelper.Itersolve_check_active.func1 @ 00442538 (size 132) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_chelper_Itersolve_check_active_func1
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      bVar2 = *(int *)((int)register0x00000054 + 4) == _UNK_004425c0;
      if (bVar2) {
        *(int *)((int)register0x00000054 + -0x14) = _UNK_004425c0;
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        FUN_0008ee8c();
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined8 *)((int)register0x00000054 + -0x10) =
             *(undefined8 *)((int)register0x00000054 + 0xc);
        k3c_internal_pkg_chelper__Cfunc_itersolve_check_active();
        *(undefined8 *)((int)register0x00000054 + 0x14) =
             *(undefined8 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x00442594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x18))();
        return;
      }
      *(int *)((int)register0x00000054 + -0x14) = *(int *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0x10) = _UNK_004425c0;
      *(undefined4 *)((int)register0x00000054 + -0xc) = _UNK_004425c4;
      unaff_lr = 0x4425ac;
      uVar3 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x4425b8;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/chelper.Trapq_append @ 004425c8 (size 156) */

void k3c_internal_pkg_chelper_Trapq_append(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined8 in_stack_0000000c;
  undefined8 in_stack_00000014;
  undefined8 in_stack_0000001c;
  undefined8 in_stack_00000024;
  undefined8 in_stack_0000002c;
  undefined8 in_stack_00000034;
  undefined8 in_stack_0000003c;
  undefined8 in_stack_00000044;
  undefined8 in_stack_0000004c;
  undefined8 in_stack_00000054;
  undefined8 in_stack_0000005c;
  undefined8 in_stack_00000064;
  undefined8 in_stack_0000006c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x442660;
    FUN_0009bf64();
  }
  k3c_internal_pkg_chelper_Trapq_append_func1();
                    /* WARNING: Could not recover jumptable at 0x00442654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/chelper.Trapq_append.func1 @ 00442664 (size 220) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_chelper_Trapq_append_func1
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x70);
      *(undefined4 *)((int)register0x00000054 + -0x70) = unaff_lr;
      bVar2 = *(int *)((int)register0x00000054 + 4) == _UNK_00442744;
      if (bVar2) {
        *(int *)((int)register0x00000054 + -0x6c) = _UNK_00442744;
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -100) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x60) = 0;
        FUN_0008ee8c();
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined8 *)((int)register0x00000054 + -0x68) =
             *(undefined8 *)((int)register0x00000054 + 0xc);
        *(undefined8 *)((int)register0x00000054 + -0x60) =
             *(undefined8 *)((int)register0x00000054 + 0x14);
        *(undefined8 *)((int)register0x00000054 + -0x58) =
             *(undefined8 *)((int)register0x00000054 + 0x1c);
        *(undefined8 *)((int)register0x00000054 + -0x50) =
             *(undefined8 *)((int)register0x00000054 + 0x24);
        *(undefined8 *)((int)register0x00000054 + -0x48) =
             *(undefined8 *)((int)register0x00000054 + 0x2c);
        *(undefined8 *)((int)register0x00000054 + -0x40) =
             *(undefined8 *)((int)register0x00000054 + 0x34);
        *(undefined8 *)((int)register0x00000054 + -0x38) =
             *(undefined8 *)((int)register0x00000054 + 0x3c);
        *(undefined8 *)((int)register0x00000054 + -0x30) =
             *(undefined8 *)((int)register0x00000054 + 0x44);
        *(undefined8 *)((int)register0x00000054 + -0x28) =
             *(undefined8 *)((int)register0x00000054 + 0x4c);
        *(undefined8 *)((int)register0x00000054 + -0x20) =
             *(undefined8 *)((int)register0x00000054 + 0x54);
        *(undefined8 *)((int)register0x00000054 + -0x18) =
             *(undefined8 *)((int)register0x00000054 + 0x5c);
        *(undefined8 *)((int)register0x00000054 + -0x10) =
             *(undefined8 *)((int)register0x00000054 + 100);
        *(undefined8 *)((int)register0x00000054 + -8) =
             *(undefined8 *)((int)register0x00000054 + 0x6c);
        k3c_internal_pkg_chelper__Cfunc_trapq_append();
                    /* WARNING: Could not recover jumptable at 0x00442718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x70))();
        return;
      }
      *(int *)((int)register0x00000054 + -0x6c) = *(int *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0x68) = _UNK_00442744;
      *(undefined4 *)((int)register0x00000054 + -100) = _UNK_00442748;
      unaff_lr = 0x442730;
      uVar3 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x70);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x44273c;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/chelper.Trapq_finalize_moves @ 0044274c (size 68) */

void k3c_internal_pkg_chelper_Trapq_finalize_moves(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined8 in_stack_0000000c;
  undefined8 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x44278c;
    FUN_0009bf64();
  }
  k3c_internal_pkg_chelper_Trapq_finalize_moves_func1();
                    /* WARNING: Could not recover jumptable at 0x00442780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/chelper.Trapq_finalize_moves.func1 @ 00442790 (size 132) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_chelper_Trapq_finalize_moves_func1
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      bVar2 = *(int *)((int)register0x00000054 + 4) == _UNK_00442818;
      if (bVar2) {
        *(int *)((int)register0x00000054 + -0x14) = _UNK_00442818;
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        FUN_0008ee8c();
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined8 *)((int)register0x00000054 + -0x10) =
             *(undefined8 *)((int)register0x00000054 + 0xc);
        *(undefined8 *)((int)register0x00000054 + -8) =
             *(undefined8 *)((int)register0x00000054 + 0x14);
        k3c_internal_pkg_chelper__Cfunc_trapq_finalize_moves();
                    /* WARNING: Could not recover jumptable at 0x004427ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x18))();
        return;
      }
      *(int *)((int)register0x00000054 + -0x14) = *(int *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0x10) = _UNK_00442818;
      *(undefined4 *)((int)register0x00000054 + -0xc) = _UNK_0044281c;
      unaff_lr = 0x442804;
      uVar3 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x442810;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/chelper.Input_shaper_set_shaper_params @ 00442820 (size 188) */

void k3c_internal_pkg_chelper_Input_shaper_set_shaper_params(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined1 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if ((in_stack_00000018 != 0) && (in_stack_00000024 != 0)) {
    k3c_internal_pkg_chelper_Input_shaper_set_shaper_params_func2();
    return;
  }
  k3c_internal_pkg_chelper_Input_shaper_set_shaper_params_func1();
  return;
}



/* k3c/internal/pkg/chelper.Input_shaper_set_shaper_params.func2 @ 004428dc (size 204) */

void k3c_internal_pkg_chelper_Input_shaper_set_shaper_params_func2(undefined4 param_1)

{
  int iVar1;
  int extraout_r2;
  int extraout_r3;
  int iVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  undefined1 uVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      iVar1 = *(int *)((int)register0x00000054 + 4);
      uVar4 = 0;
      iVar2 = DAT_004429ac;
      if (iVar1 == DAT_004429ac) {
        uVar4 = *(int *)((int)register0x00000054 + 0x18) == 0;
        if (!(bool)uVar4) {
          uVar4 = *(int *)((int)register0x00000054 + 0x24) == 0;
          if (!(bool)uVar4) {
            *(int *)((int)register0x00000054 + -0x18) = DAT_004429ac;
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
            FUN_0008ee8c();
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined1 *)((int)register0x00000054 + -0x14) =
                 *(undefined1 *)((int)register0x00000054 + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x10) =
                 *(undefined4 *)((int)register0x00000054 + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + 0x14);
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + 0x20);
            k3c_internal_pkg_chelper__Cfunc_input_shaper_set_shaper_params();
            *(undefined4 *)((int)register0x00000054 + 0x2c) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            return;
          }
          FUN_0009dbd4(0,0);
        }
        FUN_0009dbd4(0,0);
        iVar1 = extraout_r2;
        iVar2 = extraout_r3;
      }
      *(int *)((int)register0x00000054 + -0x18) = iVar1;
      *(int *)((int)register0x00000054 + -0x14) = iVar2;
      *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_004429b0;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if ((bool)uVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x4429a4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/chelper.Input_shaper_set_shaper_params.func1 @ 004429b4 (size 164) */

void k3c_internal_pkg_chelper_Input_shaper_set_shaper_params_func1(undefined4 param_1)

{
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(int *)((int)register0x00000054 + 4) == DAT_00442a5c;
      if (bVar2) {
        *(undefined4 *)((int)register0x00000054 + -4) = *DAT_00442a60;
        *(int *)((int)register0x00000054 + -0x1c) = DAT_00442a5c;
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
        FUN_0008ee8c();
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined1 *)((int)register0x00000054 + -0x18) =
             *(undefined1 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
        k3c_internal_pkg_chelper__Cfunc_input_shaper_set_shaper_params();
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -8);
        return;
      }
      *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0x18) = DAT_00442a5c;
      *(undefined4 *)((int)register0x00000054 + -0x14) = DAT_00442a64;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    unaff_lr = 0x442a54;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/chelper.Serialqueue_extract_old @ 00442a68 (size 1924) */

void k3c_internal_pkg_chelper_Serialqueue_extract_old(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int extraout_r2;
  uint extraout_r2_00;
  int extraout_r2_01;
  uint uVar4;
  undefined4 uVar5;
  uint extraout_r3;
  uint uVar6;
  code *pcVar7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x28)) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0xa8);
      *(undefined4 *)((int)register0x00000054 + -0xa8) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0xa4) = DAT_004431f0;
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 0x400;
      *(undefined4 *)((int)register0x00000054 + -0x9c) = 0x400;
      FUN_000986b8();
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + -0x98);
      *(undefined4 *)((int)register0x00000054 + -0xa4) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0xa0) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x9c) =
           *(undefined4 *)((int)register0x00000054 + -0x98);
      *(undefined4 *)((int)register0x00000054 + -0x98) = 0x400;
      *(undefined4 *)((int)register0x00000054 + -0x94) = 0x400;
      k3c_internal_pkg_chelper_Serialqueue_extract_old_func1();
      *(undefined4 *)((int)register0x00000054 + -0x68) =
           *(undefined4 *)((int)register0x00000054 + -0x90);
      *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa4) =
           *(undefined4 *)((int)register0x00000054 + -0x90);
      FUN_00020ce0();
      *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_004431f4;
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0xa0);
      *(undefined4 *)((int)register0x00000054 + -0xa4) = DAT_004431f8;
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 0x1e;
      *(undefined1 **)((int)register0x00000054 + -0x9c) =
           (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x98) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x94) = 1;
      FUN_0013b72c();
      *(undefined4 *)((int)register0x00000054 + -0x6c) =
           *(undefined4 *)((int)register0x00000054 + -0x8c);
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)((int)register0x00000054 + -0x90);
      *(undefined4 *)((int)register0x00000054 + -0xa4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x9c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x98) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x94) = DAT_004431fc;
      FUN_000987f4();
      uVar11 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x88),
                        *(int *)((int)register0x00000054 + -0x90));
      *(undefined4 *)(*(int *)((int)register0x00000054 + -0x90) + 4) =
           *(undefined4 *)((int)register0x00000054 + -0x6c);
      if (*DAT_00443200 == 0) {
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x40);
      }
      else {
        uVar11 = FUN_0009db64();
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x40);
        *unaff_r8 = uVar1;
        unaff_r8[1] = *(undefined4 *)uVar11;
      }
      *(undefined4 *)uVar11 = uVar1;
      iVar2 = 0;
      uVar4 = 1;
      while( true ) {
        *(int *)((int)register0x00000054 + -0x44) = (int)uVar11;
        *(uint *)((int)register0x00000054 + -0x80) = uVar4;
        *(int *)((int)register0x00000054 + -0x7c) = (int)((ulonglong)uVar11 >> 0x20);
        if (*(int *)((int)register0x00000054 + -0x68) <= iVar2) break;
        *(int *)((int)register0x00000054 + -0x74) = iVar2;
        *(undefined4 *)((int)register0x00000054 + -0xa4) = DAT_004431f0;
        FUN_00022cf8();
        uVar4 = *(uint *)((int)register0x00000054 + -0x74);
        uVar9 = uVar4 == 0x400;
        if (0x3ff < uVar4) goto LAB_004431d4;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0xa0);
        FUN_0009e258(uVar4,*(int *)((int)register0x00000054 + -0x3c) + uVar4 * 0x60);
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + -4);
        k3c_internal_pkg_chelper_Serialqueue_extract_old_func2();
        pcVar7 = (code *)**(undefined4 **)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + -0xa0);
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)((int)register0x00000054 + -0x9c);
        *(undefined4 *)((int)register0x00000054 + -0x9c) =
             *(undefined4 *)((int)register0x00000054 + -0x98);
        (*pcVar7)();
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + -0x98);
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)((int)register0x00000054 + -0x94);
        *(undefined4 *)((int)register0x00000054 + -0x9c) =
             *(undefined4 *)((int)register0x00000054 + -0x90);
        *(undefined4 *)((int)register0x00000054 + -0x98) = DAT_00443204;
        *(undefined4 *)((int)register0x00000054 + -0x94) = 2;
        FUN_0014f8fc();
        *(int *)((int)register0x00000054 + -0x6c) = *(int *)((int)register0x00000054 + -0x80) + 1;
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + -0x90);
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + -0x8c);
        FUN_0009deec(0,(undefined1 *)((int)register0x00000054 + -0x38));
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + -0x74);
        FUN_00020ce0();
        *(undefined4 *)((int)register0x00000054 + -0x38) = DAT_004431f4;
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0xa0);
        *(undefined8 *)((int)register0x00000054 + -0x4c) =
             *(undefined8 *)(*(int *)((int)register0x00000054 + -4) + 0x50);
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        FUN_0008f6c0();
        *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_00443208;
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + -0x9c);
        *(undefined8 *)((int)register0x00000054 + -0x54) =
             *(undefined8 *)(*(int *)((int)register0x00000054 + -4) + 0x48);
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        FUN_0008f6c0();
        *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_00443208;
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x9c);
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x40);
        FUN_00020ce0();
        *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_004431f4;
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0xa0);
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)((int)register0x00000054 + -0x70);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_004431fc;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x9c);
        *(undefined4 *)((int)register0x00000054 + -0xa4) = DAT_0044320c;
        *(undefined4 *)((int)register0x00000054 + -0xa0) = 0x14;
        *(undefined1 **)((int)register0x00000054 + -0x9c) =
             (undefined1 *)((int)register0x00000054 + -0x38);
        *(undefined4 *)((int)register0x00000054 + -0x98) = 5;
        *(undefined4 *)((int)register0x00000054 + -0x94) = 5;
        FUN_0013b72c();
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x90);
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x8c);
        uVar6 = *(uint *)((int)register0x00000054 + -0x7c);
        uVar4 = *(uint *)((int)register0x00000054 + -0x6c);
        if (uVar6 < uVar4) {
          *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x40) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0xa4) =
               *(undefined4 *)((int)register0x00000054 + -0x44);
          *(uint *)((int)register0x00000054 + -0xa0) = uVar4;
          *(uint *)((int)register0x00000054 + -0x9c) = uVar6;
          *(undefined4 *)((int)register0x00000054 + -0x98) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x94) = DAT_004431fc;
          FUN_000987f4();
          iVar2 = *(int *)((int)register0x00000054 + -0x90);
          uVar4 = *(uint *)((int)register0x00000054 + -0x8c);
          uVar6 = *(uint *)((int)register0x00000054 + -0x88);
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x6c);
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x40);
        }
        else {
          iVar2 = *(int *)((int)register0x00000054 + -0x44);
        }
        uVar10 = CONCAT44(iVar2,uVar1);
        iVar3 = uVar4 - 1;
        *(undefined4 *)(iVar2 + (iVar3 * 2 + 1) * 4) = uVar5;
        if (*DAT_00443200 != 0) {
          uVar10 = FUN_0009db64();
          *unaff_r8 = (int)uVar10;
          unaff_r8[1] = *(undefined4 *)((int)((ulonglong)uVar10 >> 0x20) + extraout_r2 * 8);
          iVar3 = extraout_r2;
        }
        iVar2 = (int)((ulonglong)uVar10 >> 0x20);
        uVar11 = CONCAT44(uVar6,iVar2);
        *(int *)(iVar2 + iVar3 * 8) = (int)uVar10;
        iVar2 = *(int *)((int)register0x00000054 + -0x74) + 1;
      }
      *(undefined4 *)((int)register0x00000054 + -0xa4) = DAT_004431f0;
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 0x400;
      *(undefined4 *)((int)register0x00000054 + -0x9c) = 0x400;
      FUN_000986b8();
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + -0x98);
      *(undefined4 *)((int)register0x00000054 + -0xa4) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0xa0) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x9c) =
           *(undefined4 *)((int)register0x00000054 + -0x98);
      *(undefined4 *)((int)register0x00000054 + -0x98) = 0x400;
      *(undefined4 *)((int)register0x00000054 + -0x94) = 0x400;
      k3c_internal_pkg_chelper_Serialqueue_extract_old_func3();
      *(undefined4 *)((int)register0x00000054 + -0x68) =
           *(undefined4 *)((int)register0x00000054 + -0x90);
      *(int *)((int)register0x00000054 + -0x6c) = *(int *)((int)register0x00000054 + -0x80) + 1;
      *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa4) =
           *(undefined4 *)((int)register0x00000054 + -0x90);
      FUN_00020ce0();
      *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_004431f4;
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0xa0);
      *(undefined4 *)((int)register0x00000054 + -0xa4) = DAT_00443210;
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 0x21;
      *(undefined1 **)((int)register0x00000054 + -0x9c) =
           (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x98) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x94) = 1;
      FUN_0013b72c();
      uVar1 = *(undefined4 *)((int)register0x00000054 + -0x90);
      uVar5 = *(undefined4 *)((int)register0x00000054 + -0x8c);
      uVar4 = *(uint *)((int)register0x00000054 + -0x7c);
      uVar6 = *(uint *)((int)register0x00000054 + -0x6c);
      if (uVar4 < uVar6) {
        *(undefined4 *)((int)register0x00000054 + -0x40) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        *(uint *)((int)register0x00000054 + -0xa0) = uVar6;
        *(uint *)((int)register0x00000054 + -0x9c) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x98) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x94) = DAT_004431fc;
        FUN_000987f4();
        iVar2 = *(int *)((int)register0x00000054 + -0x90);
        uVar6 = *(uint *)((int)register0x00000054 + -0x8c);
        uVar4 = *(uint *)((int)register0x00000054 + -0x88);
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x40);
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x6c);
      }
      else {
        iVar2 = *(int *)((int)register0x00000054 + -0x44);
      }
      iVar3 = uVar6 - 1;
      *(undefined4 *)(iVar2 + iVar3 * 8 + 4) = uVar5;
      if (*DAT_00443200 != 0) {
        uVar1 = FUN_0009db64();
        *unaff_r8 = uVar1;
        unaff_r8[1] = *(undefined4 *)(iVar2 + iVar3 * 8);
        uVar4 = extraout_r2_00;
        uVar6 = extraout_r3;
      }
      *(undefined4 *)(iVar2 + iVar3 * 8) = uVar1;
      iVar3 = 0;
      while( true ) {
        if (*(int *)((int)register0x00000054 + -0x68) <= iVar3) {
          *(int *)((int)register0x00000054 + 0x10) = iVar2;
          *(uint *)((int)register0x00000054 + 0x14) = uVar6;
          *(uint *)((int)register0x00000054 + 0x18) = uVar4;
          return;
        }
        *(int *)((int)register0x00000054 + -0x78) = iVar3;
        *(int *)((int)register0x00000054 + -0x44) = iVar2;
        *(uint *)((int)register0x00000054 + -0x80) = uVar6;
        *(uint *)((int)register0x00000054 + -0x7c) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0xa4) = DAT_004431f0;
        FUN_00022cf8();
        uVar4 = *(uint *)((int)register0x00000054 + -0x78);
        uVar9 = uVar4 == 0x400;
        if (0x3ff < uVar4) break;
        *(int *)((int)register0x00000054 + -0x6c) = *(int *)((int)register0x00000054 + -0x80) + 1;
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + -0xa0);
        FUN_0009e258(uVar4,*(int *)((int)register0x00000054 + -0x3c) + uVar4 * 0x60);
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + -8);
        k3c_internal_pkg_chelper_Serialqueue_extract_old_func4();
        pcVar7 = (code *)**(undefined4 **)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + -0xa0);
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)((int)register0x00000054 + -0x9c);
        *(undefined4 *)((int)register0x00000054 + -0x9c) =
             *(undefined4 *)((int)register0x00000054 + -0x98);
        (*pcVar7)();
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + -0x98);
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)((int)register0x00000054 + -0x94);
        *(undefined4 *)((int)register0x00000054 + -0x9c) =
             *(undefined4 *)((int)register0x00000054 + -0x90);
        *(undefined4 *)((int)register0x00000054 + -0x98) = DAT_00443204;
        *(undefined4 *)((int)register0x00000054 + -0x94) = 2;
        FUN_0014f8fc();
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + -0x90);
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + -0x8c);
        FUN_0009deec(0,(undefined1 *)((int)register0x00000054 + -0x38));
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + -0x78);
        FUN_00020ce0();
        *(undefined4 *)((int)register0x00000054 + -0x38) = DAT_004431f4;
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0xa0);
        *(undefined8 *)((int)register0x00000054 + -0x5c) =
             *(undefined8 *)(*(int *)((int)register0x00000054 + -8) + 0x50);
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + -0x5c);
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        FUN_0008f6c0();
        *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_00443208;
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + -0x9c);
        *(undefined8 *)((int)register0x00000054 + -100) =
             *(undefined8 *)(*(int *)((int)register0x00000054 + -8) + 0x48);
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + -100);
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)((int)register0x00000054 + -0x60);
        FUN_0008f6c0();
        *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_00443208;
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x9c);
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + -8) + 0x40);
        FUN_00020ce0();
        *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_004431f4;
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0xa0);
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)((int)register0x00000054 + -0x70);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_004431fc;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x9c);
        *(undefined4 *)((int)register0x00000054 + -0xa4) = DAT_00443214;
        *(undefined4 *)((int)register0x00000054 + -0xa0) = 0x17;
        *(undefined1 **)((int)register0x00000054 + -0x9c) =
             (undefined1 *)((int)register0x00000054 + -0x38);
        *(undefined4 *)((int)register0x00000054 + -0x98) = 5;
        *(undefined4 *)((int)register0x00000054 + -0x94) = 5;
        FUN_0013b72c();
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x90);
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x8c);
        uVar4 = *(uint *)((int)register0x00000054 + -0x7c);
        uVar6 = *(uint *)((int)register0x00000054 + -0x6c);
        if (uVar4 < uVar6) {
          *(undefined4 *)((int)register0x00000054 + -0x40) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0xa4) =
               *(undefined4 *)((int)register0x00000054 + -0x44);
          *(uint *)((int)register0x00000054 + -0xa0) = uVar6;
          *(uint *)((int)register0x00000054 + -0x9c) = uVar4;
          *(undefined4 *)((int)register0x00000054 + -0x98) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x94) = DAT_004431fc;
          FUN_000987f4();
          iVar2 = *(int *)((int)register0x00000054 + -0x90);
          uVar6 = *(uint *)((int)register0x00000054 + -0x8c);
          uVar4 = *(uint *)((int)register0x00000054 + -0x88);
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x40);
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x6c);
        }
        else {
          iVar2 = *(int *)((int)register0x00000054 + -0x44);
        }
        uVar11 = CONCAT44(iVar2,uVar1);
        iVar3 = uVar6 - 1;
        *(undefined4 *)(iVar2 + iVar3 * 8 + 4) = uVar5;
        if (*DAT_00443200 != 0) {
          uVar11 = FUN_0009db64();
          *unaff_r8 = (int)uVar11;
          unaff_r8[1] = *(undefined4 *)((int)((ulonglong)uVar11 >> 0x20) + extraout_r2_01 * 8);
          iVar3 = extraout_r2_01;
        }
        iVar2 = (int)((ulonglong)uVar11 >> 0x20);
        *(int *)(iVar2 + iVar3 * 8) = (int)uVar11;
        iVar3 = *(int *)((int)register0x00000054 + -0x78) + 1;
      }
      uVar4 = FUN_0009dbd4(uVar4,0x400);
LAB_004431d4:
      param_1 = FUN_0009dbd4(uVar4,0x400);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xa8);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x4431e8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/chelper.Serialqueue_extract_old.func4 @ 00443218 (size 152) */

void k3c_internal_pkg_chelper_Serialqueue_extract_old_func4(void)

{
  undefined1 *puVar1;
  undefined1 *puVar3;
  int unaff_r10;
  undefined1 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined1 auStack_44 [64];
  undefined4 local_4;
  undefined1 *puVar2;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_4 = *(undefined4 *)(in_stack_00000004 + 0x40);
  puVar2 = in_stack_00000004;
  puVar3 = auStack_44;
  do {
    puVar1 = puVar2 + 1;
    *puVar3 = *puVar2;
    puVar2 = puVar1;
    puVar3 = puVar3 + 1;
  } while ((int)puVar1 <= (int)(in_stack_00000004 + 0x3f));
  FUN_0008ee8c();
  FUN_00099218();
  return;
}



/* k3c/internal/pkg/chelper.Serialqueue_extract_old.func3 @ 004432bc (size 164) */

void k3c_internal_pkg_chelper_Serialqueue_extract_old_func3
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  undefined8 uVar4;
  
  do {
    uVar4 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar3 = *(int *)((int)register0x00000054 + 4) == DAT_00443364;
      if (bVar3) {
        uVar1 = **(undefined4 **)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -4) = uVar1;
        *(int *)((int)register0x00000054 + -0x1c) = DAT_00443364;
        *(undefined1 **)((int)register0x00000054 + -0x18) =
             (undefined1 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
        FUN_0008ee8c();
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        k3c_internal_pkg_chelper__Cfunc_serialqueue_extract_old();
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        return;
      }
      *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0x18) = DAT_00443364;
      *(undefined4 *)((int)register0x00000054 + -0x14) = DAT_00443368;
      unaff_lr = 0x443350;
      uVar4 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x44335c;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/chelper.Serialqueue_extract_old.func2 @ 0044336c (size 152) */

void k3c_internal_pkg_chelper_Serialqueue_extract_old_func2(void)

{
  undefined1 *puVar1;
  undefined1 *puVar3;
  int unaff_r10;
  undefined1 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined1 auStack_44 [64];
  undefined4 local_4;
  undefined1 *puVar2;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_4 = *(undefined4 *)(in_stack_00000004 + 0x40);
  puVar2 = in_stack_00000004;
  puVar3 = auStack_44;
  do {
    puVar1 = puVar2 + 1;
    *puVar3 = *puVar2;
    puVar2 = puVar1;
    puVar3 = puVar3 + 1;
  } while ((int)puVar1 <= (int)(in_stack_00000004 + 0x3f));
  FUN_0008ee8c();
  FUN_00099218();
  return;
}



/* k3c/internal/pkg/chelper.Serialqueue_extract_old.func1 @ 00443410 (size 164) */

void k3c_internal_pkg_chelper_Serialqueue_extract_old_func1
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  undefined8 uVar4;
  
  do {
    uVar4 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar3 = *(int *)((int)register0x00000054 + 4) == DAT_004434b8;
      if (bVar3) {
        uVar1 = **(undefined4 **)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -4) = uVar1;
        *(int *)((int)register0x00000054 + -0x1c) = DAT_004434b8;
        *(undefined1 **)((int)register0x00000054 + -0x18) =
             (undefined1 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
        FUN_0008ee8c();
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        k3c_internal_pkg_chelper__Cfunc_serialqueue_extract_old();
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        return;
      }
      *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0x18) = DAT_004434b8;
      *(undefined4 *)((int)register0x00000054 + -0x14) = DAT_004434bc;
      unaff_lr = 0x4434a4;
      uVar4 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x4434b0;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/chelper.Serialqueue_send @ 004434c0 (size 184) */

void k3c_internal_pkg_chelper_Serialqueue_send(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (in_stack_00000004 == 0) {
    return;
  }
  if (in_stack_0000000c == 0) {
    return;
  }
  if (in_stack_00000018 == 0) {
    return;
  }
  k3c_internal_pkg_chelper_Serialqueue_send_func1();
  return;
}



/* k3c/internal/pkg/chelper.Serialqueue_send.func1 @ 00443578 (size 320) */

void k3c_internal_pkg_chelper_Serialqueue_send_func1(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r3;
  int iVar4;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  undefined1 uVar6;
  
  do {
    iVar1 = DAT_004436c0;
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x3c) = unaff_lr;
      iVar3 = *(int *)((int)register0x00000054 + 4);
      uVar6 = 0;
      iVar4 = DAT_004436bc;
      if (iVar3 == DAT_004436bc) {
        iVar3 = *(int *)((int)register0x00000054 + 0xc);
        uVar6 = 0;
        if (iVar3 == DAT_004436c0) {
          uVar6 = *(int *)((int)register0x00000054 + 0x18) == 0;
          if (!(bool)uVar6) {
            uVar2 = **(undefined4 **)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0xc) = uVar2;
            *(undefined4 *)((int)register0x00000054 + -0x10) =
                 **(undefined4 **)((int)register0x00000054 + 0x10);
            *(undefined4 *)((int)register0x00000054 + -4) = uVar2;
            *(int *)((int)register0x00000054 + -0x38) = DAT_004436bc;
            *(undefined1 **)((int)register0x00000054 + -0x34) =
                 (undefined1 *)((int)register0x00000054 + -4);
            *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
            FUN_0008ee8c();
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + -0x10);
            *(int *)((int)register0x00000054 + -0x38) = DAT_004436c0;
            *(undefined1 **)((int)register0x00000054 + -0x34) =
                 (undefined1 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
            FUN_0008ee8c();
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -0xc);
            *(undefined4 *)((int)register0x00000054 + -0x34) =
                 *(undefined4 *)((int)register0x00000054 + -0x10);
            *(undefined4 *)((int)register0x00000054 + -0x30) =
                 *(undefined4 *)((int)register0x00000054 + 0x14);
            *(undefined4 *)((int)register0x00000054 + -0x2c) =
                 *(undefined4 *)((int)register0x00000054 + 0x20);
            *(undefined4 *)((int)register0x00000054 + -0x28) =
                 *(undefined4 *)((int)register0x00000054 + 0x24);
            *(undefined4 *)((int)register0x00000054 + -0x24) =
                 *(undefined4 *)((int)register0x00000054 + 0x28);
            *(undefined4 *)((int)register0x00000054 + -0x20) =
                 *(undefined4 *)((int)register0x00000054 + 0x2c);
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + 0x30);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + 0x34);
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + 0x38);
            k3c_internal_pkg_chelper__Cfunc_serialqueue_send();
            return;
          }
          FUN_0009dbd4(0,0);
          iVar3 = extraout_r2;
        }
        *(int *)((int)register0x00000054 + -0x38) = iVar3;
        *(int *)((int)register0x00000054 + -0x34) = iVar1;
        *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_004436c4;
        FUN_000209b4();
        iVar3 = extraout_r2_00;
        iVar4 = extraout_r3;
      }
      *(int *)((int)register0x00000054 + -0x38) = iVar3;
      *(int *)((int)register0x00000054 + -0x34) = iVar4;
      *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_004436c4;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x3c);
      if ((bool)uVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x4436b4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/chelper.(*FFI_lib).Get_monotonic @ 004436c8 (size 44) */

void k3c_internal_pkg_chelper___FFI_lib__Get_monotonic(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4436f0;
    FUN_0009bf64();
  }
  k3c_internal_pkg_chelper__Cfunc_get_monotonic();
                    /* WARNING: Could not recover jumptable at 0x004436e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



