

Dump of assembler code for function pp:
0x0804851e <+0>:	push   %ebp
0x0804851f <+1>:	mov    %esp,%ebp
0x08048521 <+3>:	push   %edi
0x08048522 <+4>:	push   %ebx
0x08048523 <+5>:	sub    $0x50,%esp
0x08048526 <+8>:	movl   $0x80486a0,0x4(%esp)
0x0804852e <+16>:	lea    -0x30(%ebp),%eax
0x08048531 <+19>:	mov    %eax,(%esp)
0x08048534 <+22>:	call   0x80484b4 <p>
0x08048539 <+27>:	movl   $0x80486a0,0x4(%esp)
0x08048541 <+35>:	lea    -0x1c(%ebp),%eax
0x08048544 <+38>:	mov    %eax,(%esp)
0x08048547 <+41>:	call   0x80484b4 <p>
0x0804854c <+46>:	lea    -0x30(%ebp),%eax
0x0804854f <+49>:	mov    %eax,0x4(%esp)
0x08048553 <+53>:	mov    0x8(%ebp),%eax
0x08048556 <+56>:	mov    %eax,(%esp)
0x08048559 <+59>:	call   0x80483a0 <strcpy@plt>
0x0804855e <+64>:	mov    $0x80486a4,%ebx
0x08048563 <+69>:	mov    0x8(%ebp),%eax
0x08048566 <+72>:	movl   $0xffffffff,-0x3c(%ebp)
0x0804856d <+79>:	mov    %eax,%edx
0x0804856f <+81>:	mov    $0x0,%eax
0x08048574 <+86>:	mov    -0x3c(%ebp),%ecx
0x08048577 <+89>:	mov    %edx,%edi
0x08048579 <+91>:	repnz scas %es:(%edi),%al
0x0804857b <+93>:	mov    %ecx,%eax
0x0804857d <+95>:	not    %eax
0x0804857f <+97>:	sub    $0x1,%eax
0x08048582 <+100>:	add    0x8(%ebp),%eax
0x08048585 <+103>:	movzwl (%ebx),%edx
0x08048588 <+106>:	mov    %dx,(%eax)
0x0804858b <+109>:	lea    -0x1c(%ebp),%eax
0x0804858e <+112>:	mov    %eax,0x4(%esp)
0x08048592 <+116>:	mov    0x8(%ebp),%eax
0x08048595 <+119>:	mov    %eax,(%esp)
0x08048598 <+122>:	call   0x8048390 <strcat@plt>
0x0804859d <+127>:	add    $0x50,%esp
0x080485a0 <+130>:	pop    %ebx
0x080485a1 <+131>:	pop    %edi
0x080485a2 <+132>:	pop    %ebp
0x080485a3 <+133>:	ret

char *p(char *buf, char *str)
{
	puts (str);
	read(0, buf2, 4096);
	*strchr(buf, 10) = 0;
	return (strncpy(buf, buf2, 20);
}

char			*pp(char *buf)
{
	char		buf2[64];
	p(buf2, " - ");
	char		buf3[64];
	p(buf3, " - ");
	strcpy(buf, buf2);
	return (strcat(buf, buf3);
}

int			main(void)
	{
	char	buf[64];
	pp(buf);
	puts(buf);
	return (1);
}
