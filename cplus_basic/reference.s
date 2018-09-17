
hello:     file format elf64-x86-64


Disassembly of section .init:

0000000000000638 <_init>:
 638:	48 83 ec 08          	sub    $0x8,%rsp
 63c:	48 8b 05 a5 09 20 00 	mov    0x2009a5(%rip),%rax        # 200fe8 <__gmon_start__>
 643:	48 85 c0             	test   %rax,%rax
 646:	74 02                	je     64a <_init+0x12>
 648:	ff d0                	callq  *%rax
 64a:	48 83 c4 08          	add    $0x8,%rsp
 64e:	c3                   	retq   

Disassembly of section .plt:

0000000000000650 <.plt>:
 650:	ff 35 52 09 20 00    	pushq  0x200952(%rip)        # 200fa8 <_GLOBAL_OFFSET_TABLE_+0x8>
 656:	ff 25 54 09 20 00    	jmpq   *0x200954(%rip)        # 200fb0 <_GLOBAL_OFFSET_TABLE_+0x10>
 65c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000000660 <__cxa_atexit@plt>:
 660:	ff 25 52 09 20 00    	jmpq   *0x200952(%rip)        # 200fb8 <__cxa_atexit@GLIBC_2.2.5>
 666:	68 00 00 00 00       	pushq  $0x0
 66b:	e9 e0 ff ff ff       	jmpq   650 <.plt>

0000000000000670 <__stack_chk_fail@plt>:
 670:	ff 25 4a 09 20 00    	jmpq   *0x20094a(%rip)        # 200fc0 <__stack_chk_fail@GLIBC_2.4>
 676:	68 01 00 00 00       	pushq  $0x1
 67b:	e9 d0 ff ff ff       	jmpq   650 <.plt>

0000000000000680 <_ZNSt8ios_base4InitC1Ev@plt>:
 680:	ff 25 42 09 20 00    	jmpq   *0x200942(%rip)        # 200fc8 <_ZNSt8ios_base4InitC1Ev@GLIBCXX_3.4>
 686:	68 02 00 00 00       	pushq  $0x2
 68b:	e9 c0 ff ff ff       	jmpq   650 <.plt>

Disassembly of section .plt.got:

0000000000000690 <__cxa_finalize@plt>:
 690:	ff 25 3a 09 20 00    	jmpq   *0x20093a(%rip)        # 200fd0 <__cxa_finalize@GLIBC_2.2.5>
 696:	66 90                	xchg   %ax,%ax

Disassembly of section .text:

00000000000006a0 <_start>:
 6a0:	31 ed                	xor    %ebp,%ebp
 6a2:	49 89 d1             	mov    %rdx,%r9
 6a5:	5e                   	pop    %rsi
 6a6:	48 89 e2             	mov    %rsp,%rdx
 6a9:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
 6ad:	50                   	push   %rax
 6ae:	54                   	push   %rsp
 6af:	4c 8d 05 1a 02 00 00 	lea    0x21a(%rip),%r8        # 8d0 <__libc_csu_fini>
 6b6:	48 8d 0d a3 01 00 00 	lea    0x1a3(%rip),%rcx        # 860 <__libc_csu_init>
 6bd:	48 8d 3d e6 00 00 00 	lea    0xe6(%rip),%rdi        # 7aa <main>
 6c4:	ff 15 16 09 20 00    	callq  *0x200916(%rip)        # 200fe0 <__libc_start_main@GLIBC_2.2.5>
 6ca:	f4                   	hlt    
 6cb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000006d0 <deregister_tm_clones>:
 6d0:	48 8d 3d 39 09 20 00 	lea    0x200939(%rip),%rdi        # 201010 <__TMC_END__>
 6d7:	55                   	push   %rbp
 6d8:	48 8d 05 31 09 20 00 	lea    0x200931(%rip),%rax        # 201010 <__TMC_END__>
 6df:	48 39 f8             	cmp    %rdi,%rax
 6e2:	48 89 e5             	mov    %rsp,%rbp
 6e5:	74 19                	je     700 <deregister_tm_clones+0x30>
 6e7:	48 8b 05 ea 08 20 00 	mov    0x2008ea(%rip),%rax        # 200fd8 <_ITM_deregisterTMCloneTable>
 6ee:	48 85 c0             	test   %rax,%rax
 6f1:	74 0d                	je     700 <deregister_tm_clones+0x30>
 6f3:	5d                   	pop    %rbp
 6f4:	ff e0                	jmpq   *%rax
 6f6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 6fd:	00 00 00 
 700:	5d                   	pop    %rbp
 701:	c3                   	retq   
 702:	0f 1f 40 00          	nopl   0x0(%rax)
 706:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 70d:	00 00 00 

0000000000000710 <register_tm_clones>:
 710:	48 8d 3d f9 08 20 00 	lea    0x2008f9(%rip),%rdi        # 201010 <__TMC_END__>
 717:	48 8d 35 f2 08 20 00 	lea    0x2008f2(%rip),%rsi        # 201010 <__TMC_END__>
 71e:	55                   	push   %rbp
 71f:	48 29 fe             	sub    %rdi,%rsi
 722:	48 89 e5             	mov    %rsp,%rbp
 725:	48 c1 fe 03          	sar    $0x3,%rsi
 729:	48 89 f0             	mov    %rsi,%rax
 72c:	48 c1 e8 3f          	shr    $0x3f,%rax
 730:	48 01 c6             	add    %rax,%rsi
 733:	48 d1 fe             	sar    %rsi
 736:	74 18                	je     750 <register_tm_clones+0x40>
 738:	48 8b 05 b1 08 20 00 	mov    0x2008b1(%rip),%rax        # 200ff0 <_ITM_registerTMCloneTable>
 73f:	48 85 c0             	test   %rax,%rax
 742:	74 0c                	je     750 <register_tm_clones+0x40>
 744:	5d                   	pop    %rbp
 745:	ff e0                	jmpq   *%rax
 747:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
 74e:	00 00 
 750:	5d                   	pop    %rbp
 751:	c3                   	retq   
 752:	0f 1f 40 00          	nopl   0x0(%rax)
 756:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 75d:	00 00 00 

0000000000000760 <__do_global_dtors_aux>:
 760:	80 3d a9 08 20 00 00 	cmpb   $0x0,0x2008a9(%rip)        # 201010 <__TMC_END__>
 767:	75 2f                	jne    798 <__do_global_dtors_aux+0x38>
 769:	48 83 3d 5f 08 20 00 	cmpq   $0x0,0x20085f(%rip)        # 200fd0 <__cxa_finalize@GLIBC_2.2.5>
 770:	00 
 771:	55                   	push   %rbp
 772:	48 89 e5             	mov    %rsp,%rbp
 775:	74 0c                	je     783 <__do_global_dtors_aux+0x23>
 777:	48 8b 3d 8a 08 20 00 	mov    0x20088a(%rip),%rdi        # 201008 <__dso_handle>
 77e:	e8 0d ff ff ff       	callq  690 <__cxa_finalize@plt>
 783:	e8 48 ff ff ff       	callq  6d0 <deregister_tm_clones>
 788:	c6 05 81 08 20 00 01 	movb   $0x1,0x200881(%rip)        # 201010 <__TMC_END__>
 78f:	5d                   	pop    %rbp
 790:	c3                   	retq   
 791:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
 798:	f3 c3                	repz retq 
 79a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000000007a0 <frame_dummy>:
 7a0:	55                   	push   %rbp
 7a1:	48 89 e5             	mov    %rsp,%rbp
 7a4:	5d                   	pop    %rbp
 7a5:	e9 66 ff ff ff       	jmpq   710 <register_tm_clones>

00000000000007aa <main>:
 7aa:	55                   	push   %rbp
 7ab:	48 89 e5             	mov    %rsp,%rbp
 7ae:	48 83 ec 20          	sub    $0x20,%rsp
 7b2:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
 7b9:	00 00 
 7bb:	48 89 45 f8          	mov    %rax,-0x8(%rbp)  //  used for stack guard check
 7bf:	31 c0                	xor    %eax,%eax
 7c1:	48 c7 45 e0 0a 00 00 	movq   $0xa,-0x20(%rbp) // first stack  variable
 7c8:	00 
 7c9:	48 8d 45 e0          	lea    -0x20(%rbp),%rax  // get the rax address
 7cd:	48 89 45 e8          	mov    %rax,-0x18(%rbp)  // store 
 7d1:	48 c7 45 f0 14 00 00 	movq   $0x14,-0x10(%rbp) // third stack variable
 7d8:	00 
 7d9:	48 8b 45 e8          	mov    -0x18(%rbp),%rax  // reference variable
 7dd:	48 c7 00 14 00 00 00 	movq   $0x14,(%rax)      // change to new value 
 7e4:	b8 00 00 00 00       	mov    $0x0,%eax
 7e9:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
 7ed:	64 48 33 14 25 28 00 	xor    %fs:0x28,%rdx
 7f4:	00 00 
 7f6:	74 05                	je     7fd <main+0x53>
 7f8:	e8 73 fe ff ff       	callq  670 <__stack_chk_fail@plt>
 7fd:	c9                   	leaveq 
 7fe:	c3                   	retq   

00000000000007ff <_Z41__static_initialization_and_destruction_0ii>:
 7ff:	55                   	push   %rbp
 800:	48 89 e5             	mov    %rsp,%rbp
 803:	48 83 ec 10          	sub    $0x10,%rsp
 807:	89 7d fc             	mov    %edi,-0x4(%rbp)
 80a:	89 75 f8             	mov    %esi,-0x8(%rbp)
 80d:	83 7d fc 01          	cmpl   $0x1,-0x4(%rbp)
 811:	75 32                	jne    845 <_Z41__static_initialization_and_destruction_0ii+0x46>
 813:	81 7d f8 ff ff 00 00 	cmpl   $0xffff,-0x8(%rbp)
 81a:	75 29                	jne    845 <_Z41__static_initialization_and_destruction_0ii+0x46>
 81c:	48 8d 3d ee 07 20 00 	lea    0x2007ee(%rip),%rdi        # 201011 <_ZStL8__ioinit>
 823:	e8 58 fe ff ff       	callq  680 <_ZNSt8ios_base4InitC1Ev@plt>
 828:	48 8d 15 d9 07 20 00 	lea    0x2007d9(%rip),%rdx        # 201008 <__dso_handle>
 82f:	48 8d 35 db 07 20 00 	lea    0x2007db(%rip),%rsi        # 201011 <_ZStL8__ioinit>
 836:	48 8b 05 bb 07 20 00 	mov    0x2007bb(%rip),%rax        # 200ff8 <_ZNSt8ios_base4InitD1Ev@GLIBCXX_3.4>
 83d:	48 89 c7             	mov    %rax,%rdi
 840:	e8 1b fe ff ff       	callq  660 <__cxa_atexit@plt>
 845:	90                   	nop
 846:	c9                   	leaveq 
 847:	c3                   	retq   

0000000000000848 <_GLOBAL__sub_I_main>:
 848:	55                   	push   %rbp
 849:	48 89 e5             	mov    %rsp,%rbp
 84c:	be ff ff 00 00       	mov    $0xffff,%esi
 851:	bf 01 00 00 00       	mov    $0x1,%edi
 856:	e8 a4 ff ff ff       	callq  7ff <_Z41__static_initialization_and_destruction_0ii>
 85b:	5d                   	pop    %rbp
 85c:	c3                   	retq   
 85d:	0f 1f 00             	nopl   (%rax)

0000000000000860 <__libc_csu_init>:
 860:	41 57                	push   %r15
 862:	41 56                	push   %r14
 864:	49 89 d7             	mov    %rdx,%r15
 867:	41 55                	push   %r13
 869:	41 54                	push   %r12
 86b:	4c 8d 25 16 05 20 00 	lea    0x200516(%rip),%r12        # 200d88 <__frame_dummy_init_array_entry>
 872:	55                   	push   %rbp
 873:	48 8d 2d 1e 05 20 00 	lea    0x20051e(%rip),%rbp        # 200d98 <__init_array_end>
 87a:	53                   	push   %rbx
 87b:	41 89 fd             	mov    %edi,%r13d
 87e:	49 89 f6             	mov    %rsi,%r14
 881:	4c 29 e5             	sub    %r12,%rbp
 884:	48 83 ec 08          	sub    $0x8,%rsp
 888:	48 c1 fd 03          	sar    $0x3,%rbp
 88c:	e8 a7 fd ff ff       	callq  638 <_init>
 891:	48 85 ed             	test   %rbp,%rbp
 894:	74 20                	je     8b6 <__libc_csu_init+0x56>
 896:	31 db                	xor    %ebx,%ebx
 898:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
 89f:	00 
 8a0:	4c 89 fa             	mov    %r15,%rdx
 8a3:	4c 89 f6             	mov    %r14,%rsi
 8a6:	44 89 ef             	mov    %r13d,%edi
 8a9:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
 8ad:	48 83 c3 01          	add    $0x1,%rbx
 8b1:	48 39 dd             	cmp    %rbx,%rbp
 8b4:	75 ea                	jne    8a0 <__libc_csu_init+0x40>
 8b6:	48 83 c4 08          	add    $0x8,%rsp
 8ba:	5b                   	pop    %rbx
 8bb:	5d                   	pop    %rbp
 8bc:	41 5c                	pop    %r12
 8be:	41 5d                	pop    %r13
 8c0:	41 5e                	pop    %r14
 8c2:	41 5f                	pop    %r15
 8c4:	c3                   	retq   
 8c5:	90                   	nop
 8c6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 8cd:	00 00 00 

00000000000008d0 <__libc_csu_fini>:
 8d0:	f3 c3                	repz retq 

Disassembly of section .fini:

00000000000008d4 <_fini>:
 8d4:	48 83 ec 08          	sub    $0x8,%rsp
 8d8:	48 83 c4 08          	add    $0x8,%rsp
 8dc:	c3                   	retq   
