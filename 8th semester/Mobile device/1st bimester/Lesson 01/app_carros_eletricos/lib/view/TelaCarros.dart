import 'package:flutter/material.dart';

class TelaCarros extends StatefulWidget {
  @override
  _TelaCarrosState createState() => _TelaCarrosState();
}

class _TelaCarrosState extends State<TelaCarros> {
  int _aux = 0;
  List<String> _carros = [
    "Carro 1",
    "Carro 2",
    "Carro 3",
    "Carro 4",
    "Carro 5",
    "Carro 6",
  ];

  List<AssetImage> _imagens = [
    new AssetImage("assets/images/carro1.jpg"),
    new AssetImage("assets/images/carro2.jpg"),
    new AssetImage("assets/images/carro3.jpg"),
    new AssetImage("assets/images/carro4.jpg"),
    new AssetImage("assets/images/carro5.jpg"),
    new AssetImage("assets/images/carro6.jpg"),
  ];

  //Mostrar o nome e ir para o proximo
  void _proximoCarro(){
    if(this._aux < (this._carros.length-1)){
      setState((){
        this._aux++;
      });
    }
  }

  void _carroAnterior(){
    if(this._aux > 0){
      setState((){
        this._aux--;
      });
    }
  }

  //Método privado de voltar... Desempilhar
  void _voltar(BuildContext context){
    Navigator.pop(context);
  }

  @override
  Widget build(BuildContext context) {
    
    return Scaffold(
      appBar: AppBar(
        title: Text("Carros Elétricos"),
      ),
      body: Container(
        //Espaçamento entre as imagens
        padding: EdgeInsets.all(12),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.stretch,
          children: [
            Text(
              "${_carros[_aux]}",
              style: Theme.of(context).textTheme.headline3,
            ),
            Image.asset(
              this._imagens[this._aux].assetName,
              height: 200,
            ),
            Row(
              //Espaçamento entre os botões
              mainAxisAlignment: MainAxisAlignment.spaceAround,
              //Elementos filhos
              children: [
                RaisedButton(
                  child: Text(
                    "<< Anterior",
                    style: Theme.of(context).textTheme.headline3,
                  ),
                  onPressed: (){
                    this._carroAnterior();
                  },
                ),
                RaisedButton(
                  child: Text(
                    "Próximo >>",
                    style: Theme.of(context).textTheme.headline3,
                  ),
                  onPressed: (){
                    this._proximoCarro();
                  },
                ),
              ],
            ),
            Center(
              child: RaisedButton(
                padding: EdgeInsets.only(
                  left: 30, right: 30,
                ),
              
                child: Text(
                  "[Voltar]",
                  style: Theme.of(context).textTheme.headline3,
                ),
                onPressed: (){
                  this._voltar(context);
                },
              ),
            ),
          ],
        )
      ),
    );
  }
}