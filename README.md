# Processo Zumbi :zombie:

## O que é?
Um processo zumbi acontece em sistemas operacionais Unix quando um processo já concluido mas ainda se encontra na tabela de processos do sistema. Isso ocorre quando um processo pai não lê a chamada de saída do processo filho. Neste exercício um processo zumbi é criado a partir de um programa em C um processo filho com fork() que acaba se tornando um processo zumbi que fica no sistema por 10 segundos. 
## Pré-Requisitos
* linguagem C
* makefile
* seu editor de código de preferência
* sistema operacional Unix

Para testar na sua maquina rode o código usando o makefile que tem a opção de copilar, executa o código ao mesmo tempo do comando ps -l para obter os estados dos processos, além da opção de deletar o executável. 

```bash

make         " gcc 'NOME DO ARQUIVO'.c -o 'NOME DO EXECUTAVEL'" 

```
Para rodar o executável 
```bash

make run     "./'NOME DO EXECUTAVEL'"

```
Para remover o executável
```bash

make clean   "rm 'NOME DO EXECUTAVEL'"

```
