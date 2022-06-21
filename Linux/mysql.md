# MySQL 8.0 para Linux Ubunto Server 22.04 (Basico)

<b>Nota: </b> é preciso que todos os ```apt``` estejam atualizados para que a máquina possa encontrar os repositório do ```mysql```.
Todos os comandos executados está sendo usado o usuário administrador como

## <b>1. Instalando o MySQL pelo terminal</b>

`/# sudo apt-get install mysql-server`

Apos instalação o console indicara que se é ou não preciso a reinicialização da máquinca, nessa instalação não foi nescessário nenuma ação.

## <b>2. Verificando a intalação do MySQL</b>

`/# systemctl status mysql`

Ao realizar este comando, o console retornará o status do apt se o `systemctl status mysql` retornar mensagem `Active: (running)` significa que a aplicação está funcionando e que já é possivel utilizar o usuário `root` para manipular tabelas.
Para verificar se as tabelas `template` foram instalado, podemos executar o comando do `mysql` para realizar alterações nas tabelas.

`/# mysql`

Ao realizar o comando `mysql` o terminal irá mudar para interface do SQL. Caso deseje sair dessa interface, apenas utilize o comando `exit`.
<b>Nota: </b>Todo comando em SQL termina com `;`

`msql> show databases`

Após o comando `show databases` ele retornará uma tabela com as possiveis informações.

```
+--------------------+
| Database           |
+--------------------+
| information_schema |
| mysql              |
| performance_schema |
| sys                |
+--------------------+
```

Essa etapa significa que o SQL está funcionando, mas existe uma trava de acesso remoto ao usuário root para essa verção 8.0 do MySQL

## <b>3. Criando um usuário de acesso remoto</b>

<b>Importante: </b>Essas configurações são para segurança minima.
Dentro do terminal do `mysql>` iremos cirar um usuário utilizando comandos do `MySQL`

`mysql> CREATE USER 'nome'@'%' IDENTIFIED WITH mysql_native_password BY 'Senha@123';`

Após criar o usuário precisamos entregar privilégios para alterar as informações no banco de dados e quais tabelas ele tem acesso.

`mysql> GRANT ALL PRIVILEGES ON *.* TO 'nome'@'%';`

E por fim, precisamos atualizar os privilégios dos usuários com o seguinte comando

`mysql> FLUSH PRIVILEGES;`

## <b>4. Liberando o acesso a rede</b>

então precisamos alterar um endereço de ip com editor de texto, seja ele com om `vim` ou com o `nano`, podemos acessar o arquivo com o comando

`/# nano /etc/mysql/mysql.conf.d/mysqld.conf`

Então na lina 31 temos `bind-address` podemos definir `0.0.0.0` para acesso de qualquer máquina externa;

e por fim executamos um comando para reiniciar as configurações do apt `MySQL`

`/# systemclt restart mysql`
