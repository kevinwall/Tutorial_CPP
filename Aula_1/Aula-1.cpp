// Vamos começar com o essêncial: inclusões.
#include <iostream>
// O comando acima significa que estamos "juntando" a biblioteca iostream da stl (Standard Template Library) c++
// Isso permite que utilizemos tipos especiais já implementados nesta biblioteca (neste caso, utilizaremos o std::cin e o std::cout).

//Após as inclusões, vamos criar a rotina main que será responsável por executar o algorítimo.
int main()
{
// O nome main é reservado para esta rotina, ou seja, ela sempre deverá ser nomeada como main para o compilador reconhecer o como deve executar o algorítimo.
// Aqui dentro podemos declarar variáveis e imprimir ou receber valores.
// Vamos criar um código básico:
	
	int a, b; //Aqui criamos duas variáveis inteiras ('a' e 'b').

// O ';' no final é um requisito da linguagem C++ e deve ser colocado no final de cada comando (menos em certas ocasiões que veremos futuramente)

	a = 17; //Aqui usamos o operador de atribuição para atribuir o valor "17" para a variável 'a'.

	std::cout<<"Digite um número inteiro: \n"; //Aqui usamos o objeto "cout" e o operador "<<" para inserir o texto "Digite um número inteiro: \n" na stream que liga o algorítimo ao terminal.

// O caractere '\n' representa uma quebra de linha.

	std::cin>>b; //Aqui coletamos um valor inteiro digitado pelo usuário utilizando o "cin" e logo após isso, utilizamos operador ">>" para atibuir este valor coletado para a variável b.

// É importante notar que caso o usuário digite uma entrada inválida como um caractere por exemplo, o algorítimo vai falhar.
// Futuramente veremos formas de combater este problema.

	std::cout<<"Valores das variáveis: "<<a<<" "<<b<<"\n"; //Aqui imprimimos os dados guardados pelas variáveis, é importante notar que podemos utilizar várivas vezes o operador "<<" para inserir várias informações na stream, sejam elas textuais ou dados das variáveis. 

// Esta parte do código, assim como a main, é obrigatório ser colocado no final do seu código.
// Entraremos em detalhes futuramente.
	return 0;
// Agora precisamos compilar nosso código, vamos ao terminal.
}