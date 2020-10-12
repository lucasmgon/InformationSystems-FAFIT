Algoritmo "calcularArea"
// Descrição   : Informe as medidas de uma sala (comprimento e largura) e calcule a área.
// Autor(a)    : Lucas M. Gonçalves
// Data atual  : 23/02/2016
Var
   area, largura, comprimento: real

Inicio
      escreva("Digite a largura da sala: ")
      leia(largura)
      escreva("Digite o comprimento da sala: ")
      leia(comprimento)
      
      area:= largura * comprimento
      
      escreva("A área da sala é ", area)
Fimalgoritmo