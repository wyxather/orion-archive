PUBLIC retSpoof
.code
retSpoof PROC
    pop r11 ; poping without setting up stack frame, r11 is the return address (the one in our code).
    add rsp, 8 ; skipping callee reserved space.
    mov rax, [rsp+24] ; dereference retSpoofContext.
    mov r10, [rax] ; load retSpoofContext.gadgetAddress.
    mov [rsp], r10 ; store retSpoofContext.gadgetAddress as return address.
    mov r10, [rax+8] ; load retSpoofContext.functionAddress.
    mov [rax+8], r11 ; store the original return address in retSpoofContext.functionAddress.
    mov [rax+16], rbx ; preserve rbx in retSpoofContext.rbxBackup.
    lea rbx, retSpoofFix
    mov [rax], rbx ; store address of retSpoofFix label in retSpoofContext.gadgetAddress.
    mov rbx, rax ; preserve address of Context in rbx.
    jmp r10 ; call retSpoofContext.functionAddress.
retSpoofFix:
    sub rsp, 16
    mov rcx, rbx ; restore address of retSpoofContext.
    mov rbx, [rcx+16] ; restore rbx from retSpoofContext.rbxBackup.
    jmp QWORD PTR [rcx+8] ; jmp to the original return address.
retSpoof ENDP
END