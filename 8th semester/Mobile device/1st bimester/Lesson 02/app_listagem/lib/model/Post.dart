class Post {
  String _titulo;
  String _subtitulo;
  String _corpo;

  Post(this._titulo, this._subtitulo, this._corpo);

  String getTitulo() {
    return this._titulo;
  }

  String getSubtitulo() {
    return this._subtitulo;
  }

  String getCorpo() {
    return this._corpo;
  }
}