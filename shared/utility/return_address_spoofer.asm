PUBLIC ret_spoof
.code
ret_spoof PROC
    pop r11                 ; Poping without setting up stack frame, r11 is the return address (the one in our code).
    add rsp, 8              ; Skipping callee reserved space.
    mov rax, [rsp+24]       ; Dereference ret_spoof_context.
    mov r10, [rax]          ; Load ret_spoof_context.gadget_address.
    mov [rsp], r10          ; Store ret_spoof_context.gadget_address as return address.
    mov r10, [rax+8]        ; Load ret_spoof_context.function_address.
    mov [rax+8], r11        ; Store the original return address in ret_spoof_context.function_address.
    mov [rax+16], rbx       ; Preserve rbx in ret_spoof_context.rbx_backup.
    lea rbx, ret_spoof_fix
    mov [rax], rbx          ; Store address of ret_spoof_fix label in ret_spoof_context.gadget_address.
    mov rbx, rax            ; Preserve address of context in rbx.
    jmp r10                 ; Call ret_spoof_context.function_address.
ret_spoof_fix:
    sub rsp, 16
    mov rcx, rbx            ; Restore address of ret_spoof_context.
    mov rbx, [rcx+16]       ; Restore rbx from ret_spoof_context.rbx_backup.
    jmp QWORD PTR [rcx+8]   ; Jump to the original return address.
ret_spoof ENDP
END