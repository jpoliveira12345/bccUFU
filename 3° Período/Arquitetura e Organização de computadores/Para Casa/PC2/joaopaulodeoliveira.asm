#Nome: Jo�o Paulo de Oliveira
#Matr�cula: 11611BCC046

	.data
string:	.asciiz ">>>> Hello World, aqui � o Jo�o Paulo matricula 11611BCC046"

	.text

li $v0, 4
la $a0, string
syscall

li $v0,10
syscall