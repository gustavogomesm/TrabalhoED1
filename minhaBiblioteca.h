//Macros

//Estruturas 

typedef struct {
	int codigoEvento;
	int dataDoEvento;
	float desconto;	
	float valorAPagar;	
	char situacao[0];
}dadosEventos;

typedef struct {
	char codigoCliente;
	int dataDeNascimento;
	int telefoneDeContado;
	char whatsZapp[0];
	char email[40];
	int qnteDeEventos;
	dadosEventos *pontEvento;
}dadosCliente;

typedef enum {INF, EMP, CAS, DOA, PAR}tipoEvento;
