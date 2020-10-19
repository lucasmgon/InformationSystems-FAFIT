import javax.swing.JOptionPane;
/**
 *
 * @author Lucas M. Gonçalves
 */
public class Principal {
    //Método principal, é responsável por "executar" o projeto (start)
    public static void main(String[] args) {
        String nome; //String é um wrapper
        int    idade;
        float  altura = 0;
        double peso = 0;
        String sexo;
        
        //JOptionPane -> Painel de opção
        nome = JOptionPane.showInputDialog("Digite o nome");
        
        idade = Integer.valueOf(
                JOptionPane.showInputDialog("Digite a idade de " + nome)
        );
        
        altura = Float.valueOf(
                JOptionPane.showInputDialog("Digite a altura de " + nome)
        );
        
        peso = Double.valueOf(
                JOptionPane.showInputDialog("Digite o peso de " + nome)
        );
        
        sexo = JOptionPane.showInputDialog("Digite o sexo de " + nome + " [F/M]");
        
        //Parent component = componente pai
        JOptionPane.showMessageDialog(null, "Seu nome é " + nome + 
                ".\nA idade digitada foi " + String.valueOf(idade) + 
                ".\nA altura digitada foi " + String.valueOf(altura) +
                ".\nO peso digitado foi " + String.valueOf(peso) +
                ".\nO sexo digitado foi " + sexo + "."
        );
    }
}