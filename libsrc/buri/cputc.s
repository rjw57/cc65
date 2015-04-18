.import v_putc

.export _cputc
.proc _cputc
        jmp (v_putc)
        rts
.endproc
