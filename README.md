<!-- background: #ffffff -->
## <b>Códigos das Questões em Linguagem C </b>

[![GitHub issues](https://img.shields.io/github/issues/maumneto/programas-c)](https://github.com/maumneto/programas-c/issues)
[![GitHub forks](https://img.shields.io/github/forks/maumneto/programas-c)](https://github.com/maumneto/programas-c/network)
[![GitHub stars](https://img.shields.io/github/stars/maumneto/programas-c)](https://github.com/maumneto/programas-c/stargazers)
<img src="https://img.shields.io/badge/version-v1.0.2-orange">
[![GitHub license](https://img.shields.io/github/license/maumneto/programas-c)](https://github.com/maumneto/programas-c/blob/master/LICENSE)
[![Build Status](https://travis-ci.com/maumneto/programas-c.svg?branch=master)](https://travis-ci.com/maumneto/programas-c)

- Este material é destinado ao estudo de programação básica usando a linguagem C. 

- O intuito destas questões é fazer com que o aluno entenda a resolução de questões simples que envolvem o conteúdo de algoritmos e programação básica.

----
### <b>Informações sobre o Professor </b>
- Prof. Maurício Moreira Neto
- Lattes: [Link Currículo Lattes](http://lattes.cnpq.br/7534400645876830)
- E-mail: <maumneto@gmail.com>
- Site: <http://lia.ufc.br/~maumneto/>
- Site da Disciplina: <https://maumneto.github.io/pce/index.html>

----

### <b>Hierarquia dos Materiais </b>
- Cada `folder` possui um conjunto de arquivos C referentes as questões da lista de exercício.

- A resolução da lista de exercício é de fundamental importância para a fixação do conteúdo ministrado (além de ser divertido! :smile:). 

**Lembre-se:** 

><i>''I hate programming, I hate programming, I hate programming!!<br>
>Oh, it work!!<br>
>I love programming so much...''</i><br>
> -- **Any programming student**

- A seguir é descrito o enunciado das questões que cada `folder` possui!

 A seguir é apresentado a lista de arquivos que este repositório possui:

```bash
programas-c/
│
├── lista-exercicio-1/
│   ├── questao-3.c
│   ├── questao-4.c
│   └── ...
│
├── lista-exercicio-2/
│   ├── questao-1.c
│   ├── questao-2.c
│   └── ...
│
├── projeto1-crud/
│   └── projeto-crud.c
│
├── projeto2-crud-file/
│   ├── main.c
│   ├── register.c
│   └── ...
│
├── gitattributes
├── gitignore
├── travis.yml
└── README.md
```

----
### <b>Executando o Código C</b>
- Para executar os códigos basta abrir o `terminal` (Se estiver no *windows* é o `prompt` ou `cmd`) e ir até o diretório onde esta o código que deseja ser executado.

- Dentro do diretório: execute (se estiver usando o compilador gcc):
  
```console
$ gcc nome_do_programa.c -o nome_do_programa
```

- Para executar:
  
```console
$ ./nome_do_programa
```

----

### <b>Lista de Exercício 1</b>
Esta lista de exercício é referente aos tópicos de: 
* _algoritmos_ 
* _linguagem C_
* _tipos de dados_
* _comandos de entrada e saída de dados_
* _operadores_
* _estruturas de decisão_
* _estruturas de repetição_

- [Lista de exercício 1](markdown/lista-exercicio-1.md)

----
### <b>Lista de Exercício 2</b>
Esta lista de exercício é referente aos tópicos de: 
* _arrays_ 
* _string_
* _struct_
* _funções_
* _ponteiros_
  
- [Lista de exercício 2](markdown/lista-exercicio-2.md)

----

### <b>Projeto 1 - CRUD Simples</b>
  
- Este projeto tem o objetivo de desenvolver um CRUD simples.

- Este projeto serve para treinar os elementos básicos da linguagem C.
  
  **Observações:**
  - Este projeto tem somente um único arquivo
  
  - Posteriormente é aconselhável dividir o projeto em múltiplos arquivos com estruturas independentes
  
  - Outra característica desse projeto é que todos os dados são armazenados em cache, ou seja, não possui persistência de dados e não esta sendo abordado o conteúdo de arquivos

----

### <b>Projeto 2 - CRUD usando Arquivo</b>

- Este projeto tem o objetivo de desenvolver um CRUD manipulando arquivo.

- O projeto 2 pode ser utilizado para entender melhor conceitos mais avançados de C. 

  **Observações:**
  - Este projeto possui diversos arquivos cabeçalhos e de implementação
 
  - O dados desse projeto são persistidos em um arquivo chamada `register.txt`

  - Basta executar o comando a seguir para compilar o projeto:

  ```console
  $ gcc -o main main.c screens.c register.c search.c remove_register.c update.c
  ```

  - Para executar:
  
  ```console
  $ ./main
  ```
  
----

### **It's time to code!! Have fun!!** 
<center>
<img src="https://media.giphy.com/media/ZVik7pBtu9dNS/giphy.gif" width="200" height="200" center/>
</center>
