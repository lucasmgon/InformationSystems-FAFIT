import 'package:app_carros_eletricos/view/TelaCarros.dart';
import 'package:flutter/material.dart';

class TelaPrincipal extends StatefulWidget {
  @override
  _TelaPrincipalState createState() => _TelaPrincipalState();
}

class _TelaPrincipalState extends State<TelaPrincipal> {
  //Método de navegação das telas
  void _abrirSegundaTela(BuildContext context){
    Navigator.push(
      context,
      MaterialPageRoute(
        builder: (context) => TelaCarros()
      )
    );
  }

  @override
  Widget build(BuildContext context){
    //Responsável por encapsular outras Widgets
    return Scaffold(
      appBar: AppBar(
        title: Text("Carros Elétricos"),
      ),

      body: Container(
        padding: EdgeInsets.all(12),
        child: Column(
          children: [
            Image.network(
              "https://cdn.pocket-lint.com/r/s/320x/assets/images/140845-cars-news-feature-future-electric-cars-the-battery-powered-cars-that-will-be-on-the-roads-within-the-next-5-years-image44-oxucg9ak5p.jpg",
              height: 200,
            ),
            Text(
              "\nCom preços mais acessíveis ao público automobilístico, os carros elétricos das mais aclamadas marcas " +
              "promove sustentabilidade e economia para os seus clientes. Confira nossa coleção de fotos dessas incríveis máquinas!",
              textAlign: TextAlign.justify,
              style: Theme.of(context).textTheme.headline3,
            ),
            
            RaisedButton(
              child: Text(
                "[Abrir Coleção]",
                style: Theme.of(context).textTheme.headline3,
              ),
              onPressed: (){
                this._abrirSegundaTela(context);
              },
            ),
            
          ],
        )
      )
    );
  }
}