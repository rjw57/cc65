.import putc

.export _cputc
.proc _cputc
        jsr putc
        rts
.endproc
