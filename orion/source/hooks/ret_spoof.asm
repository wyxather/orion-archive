PUBLIC retSpoof

.code

retSpoof PROC
    pop r11 ; poping without setting up stack frame, r11 is the return address (the one in our code).
    add rsp, 8 ; skipping callee reserved space.
    mov rax, [rsp+24] ; dereference Context.

    mov r10, [rax] ; load Context.gadgetAddress.
    mov [rsp], r10 ; store Context.gadgetAddress as return address.

    mov r10, [rax+8] ; load Context.functionAddress.
    mov [rax+8], r11 ; store the original return address in Context.functionAddress.

    mov [rax+16], rbx ; preserve rbx in Context.rbxBackup.
    lea rbx, retSpoofFix
    mov [rax], rbx ; store address of retSpoofFix label in Context.gadgetAddress.
    mov rbx, rax ; preserve address of Context in rbx.

    jmp r10 ; call Context.functionAddress.

retSpoofFix:
    sub rsp, 16
    mov rcx, rbx ; restore address of Context.
    mov rbx, [rcx+16] ; restore rbx from Context.rbxBackup.
    jmp QWORD PTR [rcx+8] ; jmp to the original return address.

retSpoof ENDP

END