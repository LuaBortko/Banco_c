typedef struct{
  char texto[100];//string para todas as palavras (conta, tarifa e saldo)
}operacao;

//Colocar quant de extrato dentro de cliente
typedef struct{
  operacao extrato[100]; //informações das ultimas 100 operações
  int quant_extrato;
  long cpf;//número grande
  float saldo;
  int tipoConta;
  char nome[20];
  int senha; 
}cliente;

typedef struct{
  cliente cliente[10]; //diminuimos pois o replit não tem memória o suficiente para rodar com o tamanho pedido
  int quantidade;
}listaClientes;

typedef enum{COMUM, PLUS} tipoConta; //comparação com enum é mais fácil  COMUM = 0, PLUS = 1

void menu();

void criaCliente(listaClientes *Lc); //lb
void deletarCliente(listaClientes *Lc); //llb
void listaCliente(listaClientes Lc); //l
void debito(listaClientes *Lc); //l
void deposito(listaClientes *Lc);//b
void transferencia(listaClientes *Lc);//lb
void extrato(listaClientes Lc, char arquivoExtrato[]); //l
int salva_clientes(listaClientes Lc, char nomeArquivo[]);//lb
int ler(listaClientes *Lc, char nomeArquivo[]);//lb

void clearBuffer();

