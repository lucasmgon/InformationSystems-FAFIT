Algoritmo "calcularExponente"
// Descrição   : Informe a base e o exponente, e retorne o resultado do calculo.
// Autor(a)    : Lucas M. Gonçalves
// Data atual  : 23/02/2016
Var
   base, exponente, resultado: real
   
Inicio
      escreva("Informe a base: ")
      leia(base)
      escreva("Informe o exponente: ")
      leia(exponente)
      
      resultado:= base ^ exponente
      
      escreva("O resultado é ", resultado)
Fimalgoritmo