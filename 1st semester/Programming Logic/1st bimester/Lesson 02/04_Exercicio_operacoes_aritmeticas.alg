Algoritmo "operacoesAritmeticas"
// Descri��o   : Informe dois n�meros e exiba os resultados das quatro opera��es aritm�ticas.
// Autor(a)    : Lucas M. Gon�alves
// Data atual  : 23/02/2016
Var
   n1, n2, soma, subtracao, multiplicacao, divisao: real

Inicio
      escreva("Digite o primeiro n�mero: ")
      leia(n1)
      escreva("Digite o segundo n�mero: ")
      leia(n2)
      
      soma:= n1 + n2
      subtracao:= n1 - n2
      multiplicacao:= n1 * n2
      divisao:= n1 /n2
      
      escreval(n1, " + ", n2, " = ", soma)
      escreval(n1, " - ", n2, " = ", subtracao)
      escreval(n1, " * ", n2, " = ", multiplicacao)
      escreva(n1, " / ", n2, " = ", divisao)
Fimalgoritmo