        .file   "helo_hol.c"
        .section        .rodata
.LC0:
        .string "Hello, Holberton\n"
        .text
        .globl  main
        .type   main, @function
main:
.LFB2:
        .cfi_startproc
        pushq   %rbp
        .cfi_def_cfa_offset 16
        .cfi_offset 6, -16
        movq    %rsp, %rbp
        .cfi_def_cfa_register 6
        movl    $17, %edx
        movl    $.LC0, %esi
        movl    $1, %edi
        call    write
        popq    %rbp
        .cfi_def_cfa 7, 8
        ret
        .cfi_endproc
.LFE2:
        .size   main, .-main
        .ident  "GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4"
        .section        .note.GNU-stack,"",@progbits
