.globl count

count:                                       # int count(const char *s1){
    xorl %eax, %eax                          # int a=0;
    movl 4(%esp), %ecx                       # const char* c = s1;
A:  cmpb $0, (%ecx)                            # if(!*c) goto E;  
    je E
    incl %eax                                # a++;
    incl %ecx                                # c++;
    jmp A                                    # goto A;
E:  ret

# 1 noto che si usa cmpl, quando in realtà stiamo lavorando con char, quindi basterebbe usare cmpb
# 2 noto che sto accendendo al puntaote alla stringa e non al valore puntato, qunindi modifico utilizzando le parentesi
# 3 noto che la condizione del ciclo è sbagliata; dovrebbe essere je e non jne
# 4 aggiunto spazio dopo ret