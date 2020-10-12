import 'package:flutter/material.dart';
import 'package:app_listagem/model/Post.dart';

class TelaPrincipal extends StatefulWidget {
  @override
  _TelaPrincipalState createState() => _TelaPrincipalState();
}

class _TelaPrincipalState extends State<TelaPrincipal> {
  List<Post> _post = [
    //Post("Título 1", "Subtítulo 1"), //Passando para a função do Post
  ];

  void _criarPost() {
    //Preencher automaticamente
    for (int aux = 1; aux <= 20; aux++) {
      String i = "";
      i = aux.toString();

      //Instanciando um objeto Post
      Post post = Post(
        "Título ${i}",
        "Subtítulo ${i}",
        "Manjaro Linux é baseada no Arch Linux, tendo o seu próprio conjunto de repositórios. " +
        "A distribuição tem como objetivo ser uma nova distro amigável ao usuário mantendo a, " +
        "poderosa base Arch, mais notavelmente o gerenciador de pacotes Pacman e compatibilidade com o AUR."
      );
      this._post.add(post);
    }
  }

  void _exibirPost() {
    for(int aux = 0; aux < this._post.length; aux++) {
      print("${this._post[aux].getTitulo()} - ${this._post[aux].getSubtitulo()}\n");
    }
  }

  @override
  Widget build(BuildContext context) {
    this._criarPost();
    this._exibirPost(); //Exibindo no terminal a listagem
    return Scaffold(
      appBar: AppBar(
        title: Text(
          "Listagem dos Posts"
        )
      ),

      body: Container(
        padding: EdgeInsets.all(18),
        child: ListView.builder(
          itemCount: this._post.length, //Parar a exibição para não dar erro
          itemBuilder: (context, indice) {
            return Material (
              color: Colors.transparent,
              clipBehavior: Clip.hardEdge, //Forçar o arredondamento da borda
              borderRadius: BorderRadius.circular(25),

              child: ListTile(
                hoverColor: Color.fromRGBO(25, 66, 92, 1.0),
                onTap: () {
                  print(this._post[indice].getTitulo());
                  showDialog(
                    context: context,
                    builder: (context) {
                      return AlertDialog(
                        title: Text(
                          this._post[indice].getTitulo() + " - " +
                          this._post[indice].getSubtitulo(),
                          style: Theme.of(context).textTheme.headline6,
                        ),
                        content: Text(
                          this._post[indice].getCorpo()
                        ),

                        actions: <Widget>[
                          FlatButton(
                            onPressed: () {},
                            child: Text(
                              "Curtir"
                            ),
                          ),
                          FlatButton(
                            onPressed: () {
                              //Implementação do fechar - Desempilha o topo da pilha igual na navegação
                              Navigator.pop(context);
                            },
                            child: Text(
                              "Fechar"
                            ),
                          )
                        ],
                      );
                    }
                  );
                },
                title: Text(
                  this._post[indice].getTitulo()
                ),
                subtitle: Text(
                  this._post[indice].getSubtitulo()
                ),
              ),
            );
          }
        )
      ),
    );
  }
}