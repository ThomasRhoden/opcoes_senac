// Este é um sistema para escolher o curso e finalizar

#include <iostream>
#include <string>

int main()
{
    // -- Variaveis
    std::string cursos_tecnicos[4] = {" ", "Desenvolvimento de Sistemas", "Enfermagem", "Modelagem"};
    std::string cursos_livres[6] = {" ", "Tecnica de costura", "Consultoria de estilo e coloracao pessoal", "Fotografia digital", "Tecnicas basicas em cuidado aos idosos", "Informatica fundamental"};
    std::string cursos_ead[5] = {" ", "RH", "Logistica", "Contabilidade", "Transacoes imobiliarias"};
    std::string cursos_idiomas[3] = {" ", "Libras 1/2", "Libras 2/2"};
    int escolha_tecnicos;
    int escolha_livres;
    int escolha_ead;
    int escolha_idiomas;
    std::string nome_aluno;
    std::string cidade_aluno;
    int aceita_ligacao;
    int telefone_aluno;

    // -- Mensagem inicial
    std::cout << "-------------- Sistema do SENAC --------------" << std::endl;
    std::cout << "--------- Escolha quais cursos comprar ---------" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;

    // -- Selecao de cursos tecnicos
    std::cout << "\nCursos tecnicos:\n [1] Desenvolvimento de Sistemas\n [2] Enfermagem\n [3] Modelagem\n [0] Nenhum" << std::endl;
    std::cout << "\nEscolha seu curso pelo numero ao lado" << std::endl;
    std::cin >> escolha_tecnicos;
    std::cout << "\n Voce escolheu " << cursos_tecnicos[escolha_tecnicos] << std::endl;
    std::cout << "----------------------------------------------" << std::endl;

    // -- Selecao de cursos livres
    std::cout << "\nCursos Livres:\n [1] Tecnica de costura\n [2] Consultoria de estilo e coloracao pessoal\n [3] Fotografia digital\n [4] Tecnicas basicas em cuidado aos idosos\n [5] Informatica fundamental\n [0] Nenhum" << std::endl;
    std::cout << "\nEscolha seu curso pelo numero ao lado" << std::endl;
    std::cin >> escolha_livres;
    std::cout << "\n Voce escolheu " << cursos_livres[escolha_livres] << std::endl;
    std::cout << "----------------------------------------------" << std::endl;

    // -- Selecao de cursos ead
    std::cout << "\nCursos EAD:\n [1] RH\n [2] Logistica\n [3] Contabilidade\n [4] Transacoes Imobiliarias\n [0] Nenhum" << std::endl;
    std::cout << "\nEscolha seu curso pelo numero ao lado" << std::endl;
    std::cin >> escolha_ead;
    std::cout << "\n Voce escolheu " << cursos_ead[escolha_ead] << std::endl;
    std::cout << "----------------------------------------------" << std::endl;

    // -- Selecao de cursos idiomas
    std::cout << "\nCursos idiomas:\n [1] Libras 1/2\n [2] Libras 2/2\n [0] Nenhum" << std::endl;
    std::cout << "\nEscolha seu curso pelo numero ao lado" << std::endl;
    std::cin >> escolha_idiomas;
    std::cout << "\n Voce escolheu " << cursos_idiomas[escolha_idiomas] << std::endl;
    std::cout << "----------------------------------------------" << std::endl;

    // -- Registre e receba contato
    std::cout << "\nEntre seu primeiro nome: ";
    std::cin >> nome_aluno;
    std::cout << "\nEntre sua cidade: ";
    std::cin >> cidade_aluno;
    std::cout << "----------------------------------------------" << std::endl;

    // -- Mensagem final
    std::cout << "\n"
              << nome_aluno << " da cidade de " << cidade_aluno << std::endl;
    std::cout << "\nVoce demonstrou interesse nos seguintes cursos: " << std::endl;
    std::cout << "\nTecnico: " << cursos_tecnicos[escolha_tecnicos] << "\nLivres: " << cursos_livres[escolha_livres] << "\nEAD: " << cursos_ead[escolha_ead] << "\nIdiomas: " << cursos_idiomas[escolha_idiomas] << std::endl;
    std::cout << "\n----------------------------------------------" << std::endl;
    std::cout << "\n\n " << std::endl;

    std::cout << "\n"
              << nome_aluno << " voce aceita receber uma ligacao da nossa unidade mais proxima a " << cidade_aluno << "?" << std::endl;
    std::cout << "\n [1] - Aceito  || [2] - Nao aceito" << std::endl;
    std::cin >> aceita_ligacao;

    if (aceita_ligacao == 1)
    {
        std::cout << "\nDigite seu numero de contato telefonico sem dd e sem hifen: " << std::endl;
        std::cin >> telefone_aluno;
        std::cout << "\nNossa equipa vai entrar em contato com voce " << nome_aluno << ", no telefone " << telefone_aluno << std::endl;
    }
    else
    {
        std::cout << "\nVenha ate a unidade mais proxima para conversar com um de nossos atendentes!\nAguardamos voce, " << nome_aluno << std::endl;
    }

    return 0;
}