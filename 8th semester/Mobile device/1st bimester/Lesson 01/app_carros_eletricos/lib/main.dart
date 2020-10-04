import 'package:flutter/material.dart';
import 'package:app_carros_eletricos/view/TelaPrincipal.dart';

void main() {
  runApp(
    MaterialApp(
      title: "Carros Elétricos",
      home: TelaPrincipal(),
      theme: ThemeData(
        buttonTheme: ButtonThemeData(
          minWidth: 150,
          height: 33,
          buttonColor: Color.fromRGBO(19, 100, 127, 1.0)
        ),

        textTheme: TextTheme(
          headline3: TextStyle(fontSize: 16, fontFamily: 'OpenSans', color: Colors.white),
        ),

        brightness: Brightness.dark,
        primaryColor: Color.fromRGBO(19, 100, 127, 1.0),
      ),
    )
  );
}