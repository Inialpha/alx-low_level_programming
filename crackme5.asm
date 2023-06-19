│           ; arg int argc @ rdi
│           ; arg char **argv @ rsi
│           ; var int64_t var_8h @ rbp-0x8
│           ; var int64_t var_10h @ rbp-0x10
│           ; var int64_t var_18h @ rbp-0x18
│           ; var int64_t var_20h @ rbp-0x20
│           ; var int64_t var_28h @ rbp-0x28
│           ; var int64_t var_30h @ rbp-0x30
│           ; var int64_t var_38h @ rbp-0x38
│           ; var int64_t var_40h @ rbp-0x40
│           ; var int64_t var_48h @ rbp-0x48
│           ; var int64_t var_50h @ rbp-0x50
│           ; var int64_t var_58h @ rbp-0x58
│           ; var int64_t var_60h @ rbp-0x60
│           ; var int64_t var_64h @ rbp-0x64
│           ; var int64_t var_68h @ rbp-0x68
│           ; var int64_t var_74h @ rbp-0x74
│           ; var int64_t var_80h @ rbp-0x80
push rbp
mov rbp, rsp
add rsp,
mov dword [var_74h], edi    ; argc
mov qword [var_80h], rsi    ; argv
mov rax, qword fs:[0x28]
mov qword [var_8h], rax
xor eax, eax
movabs rax, 0x3877445248432d41 ; 'A-CHRDw8'
mov qword [var_50h], rax
movabs rax, 0x42394530534e6c37 ; '7lNS0E9B'
mov qword [var_48h], rax
movabs rax, 0x4d6e706762695432 ; '2TibgpnM'
mov qword [var_40h], rax
movabs rax, 0x74767a5835737956 ; 'Vys5Xzvt'
mov qword [var_38h], rax
movabs rax, 0x2b554c59634a474f ; 'OGJcYLU+'
mov qword [var_30h], rax
movabs rax, 0x71786636576a6d34 ; '4mjW6fxq'
mov qword [var_28h], rax
movabs rax, 0x723161513346655a ; 'ZeF3Qa1r'
mov qword [var_20h], rax
movabs rax, 0x6b756f494b646850 ; 'PhdKIouk'
mov qword [var_18h], rax
mov byte [var_10h], 0
cmp dword [var_74h], 3
je 0x40091e
call sym.segf
mov rax, qword [var_80h]
mov rax, qword [rax + 8]
mov qword [var_60h], rax
mov rax, qword [var_80h]
mov rax, qword [rax + 0x10]
mov qword [var_58h], rax
mov rax, qword [var_58h]
mov rdi, rax
call sym.imp.strlen         ; size_t strlen(const char *s)
cmp rax, 6                  ; 6
je 0x40094d
call sym.segf
mov rax, qword [var_60h]
mov rdi, rax
call sym.imp.strlen         ; size_t strlen(const char *s)
mov dword [var_68h], eax
mov eax, dword [var_68h]
mov edi, eax
call sym.f1
mov dword [var_64h], eax
mov rax, qword [var_58h]
movzx edx, byte [rax]
mov eax, dword [var_64h]
cdqe
movzx eax, byte [rbp + rax - 0x50]
cmp dl, al
je 0x400983
call sym.segf
mov edx, dword [var_68h]
mov rax, qword [var_60h]
mov esi, edx
mov rdi, rax
call sym.f2
mov dword [var_64h], eax
mov rax, qword [var_58h]
add rax, 1
movzx edx, byte [rax]
