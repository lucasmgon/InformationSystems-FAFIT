<?php
use \Psr\Http\Message\ServerRequestInterface as Request;
use \Psr\Http\Message\ResponseInterface as Response;

require 'vendor/autoload.php';

$config['displayErrorDetails'] = true;
$config['addContentLengthHeader'] = false;

$config['db']['host']   = 'localhost';
$config['db']['user']   = 'user';
$config['db']['pass']   = 'password';
$config['db']['dbname'] = 'exampleapp';

$app = new \Slim\App(['settings' => $config]);

$app->options('/{routes:.+}', function ($request, $response, $args) {
  return $response;
});

$app->add(function ($req, $res, $next) {
  $response = $next($req, $res);

  return $response
          ->withHeader('Access-Control-Allow-Origin', '*')
          ->withHeader('Access-Control-Allow-Headers', 'X-Requested-With, Content-Type, Accept, Origin, Authorization')
          ->withHeader('Access-Control-Allow-Methods', 'GET, POST, PUT, DELETE, PATCH, OPTIONS');
});

$app->get('/', function(Request $request, Response $response, array $args){
  //$response->getBody()->write("Slim funcionando");
  return json_encode(
    [
      "mensagem" => "Slim Funcionando",
      "data"     => "21/10/2020",
    ]
  );
});

$app->get('/bemvindo', function(Request $request, Response $response, array $args){
  $response->getBody()->write("Olá, bem-vindo(a) ao Slim.");
});

$app->get('/dados', function(Request $request, Response $response, array $args){
  return json_encode(
    [
      "nome"      => "Lucas M. Gonçalves",
      "idade"     => "22",
      "sexo"      => "Masculino",
      "profissão" => "Aux. administrativo A",
    ]
  );
});

$app->post('/dados', function(Request $request, Response $response, array $args){
  $dados = $request->getParsedBody();
  return json_encode(["Salvar" => $dados]);
});

$app->put('/dados', function(Request $request, Response $response, array $args){
  $dados = $request->getParsedBody();
  return json_encode(["Alterar" => $dados]);
});

$app->delete('/dados', function(Request $request, Response $response, array $args){
  $dados = $request->getParsedBody();
  return json_encode(["Excluir" => $dados]);
});

$app->map(['GET', 'POST', 'PUT', 'DELETE', 'PATCH'], '/{routes:.+}', function($req, $res) {
  $handler = $this->notFoundHandler;
  return $handler($req, $res);
});

$app->run();
