import 'package:flutter/material.dart';
import 'package:app_listagem/view/Tela Principal.dart';

void main() {
  runApp(
    MaterialApp(
      title: "Listagem dos Posts",
      home: TelaPrincipal(),
      theme: ThemeData(
        textTheme: TextTheme(
          headline3: TextStyle(fontSize: 16, fontFamily: 'OpenSans', color: Colors.white),
        ),

        brightness: Brightness.dark,
        primaryColor: Color.fromRGBO(28, 93, 102, 1.0),
      ),
    )
  );
}