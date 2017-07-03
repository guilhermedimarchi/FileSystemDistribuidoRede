#define VERSAO 1

struct dados {
	string nome<50>;
	string data<1024>;
	
};

program TRANSF {
	version TRANSF_1 {
		void envia (dados) = 1;
	} = 1;
} = 300000001;
