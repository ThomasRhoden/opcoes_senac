// Sistema para escolher cursos e finalizar cadastro

#include <iostream>
#include <string>

int main()
{
    // -- Variáveis
    std::string cursos_tecnicos[] = {
        "Nenhum",
        "Desenvolvimento de Sistemas",
        "Enfermagem",
        "Modelagem"};

    std::string cursos_livres[] = {
        "Nenhum",
        "Tecnica de costura",
        "Consultoria de estilo e coloracao pessoal",
        "Fotografia digital",
        "Tecnicas basicas em cuidado aos idosos",
        "Informatica fundamental"};

    std::string cursos_ead[] = {
        "Nenhum",
        "RH",
        "Logistica",
        "Contabilidade",
        "Transacoes imobiliarias"};

    std::string cursos_idiomas[] = {
        "Nenhum",
        "Libras 1/2",
        "Libras 2/2"};

    int escolha_tecnicos;
    int escolha_livres;
    int escolha_ead;
    int escolha_idiomas;

    std::string nome_aluno;
    std::string cidade_aluno;

    int aceita_ligacao;
    std::string telefone_aluno;

    // -- Mensagem inicial
    std::cout << "-------------- Sistema do SENAC --------------\n";
    std::cout << "------ Escolha quais cursos deseja fazer ------\n";
    std::cout << "-----------------------------------------------\n";

    // -- Cursos técnicos
    std::cout << "\nCursos Tecnicos:\n";
    std::cout << "[1] Desenvolvimento de Sistemas\n";
    std::cout << "[2] Enfermagem\n";
    std::cout << "[3] Modelagem\n";
    std::cout << "[0] Nenhum\n";

    std::cout << "\nEscolha: ";
    std::cin >> escolha_tecnicos;

    if (escolha_tecnicos < 0 || escolha_tecnicos > 3)
    {
        escolha_tecnicos = 0;
    }

    std::cout << "Voce escolheu: "
              << cursos_tecnicos[escolha_tecnicos] << "\n";

    // -- Cursos livres
    std::cout << "\nCursos Livres:\n";
    std::cout << "[1] Tecnica de costura\n";
    std::cout << "[2] Consultoria de estilo e coloracao pessoal\n";
    std::cout << "[3] Fotografia digital\n";
    std::cout << "[4] Tecnicas basicas em cuidado aos idosos\n";
    std::cout << "[5] Informatica fundamental\n";
    std::cout << "[0] Nenhum\n";

    std::cout << "\nEscolha: ";
    std::cin >> escolha_livres;

    if (escolha_livres < 0 || escolha_livres > 5)
    {
        escolha_livres = 0;
    }

    std::cout << "Voce escolheu: "
              << cursos_livres[escolha_livres] << "\n";

    // -- Cursos EAD
    std::cout << "\nCursos EAD:\n";
    std::cout << "[1] RH\n";
    std::cout << "[2] Logistica\n";
    std::cout << "[3] Contabilidade\n";
    std::cout << "[4] Transacoes imobiliarias\n";
    std::cout << "[0] Nenhum\n";

    std::cout << "\nEscolha: ";
    std::cin >> escolha_ead;

    if (escolha_ead < 0 || escolha_ead > 4)
    {
        escolha_ead = 0;
    }

    std::cout << "Voce escolheu: "
              << cursos_ead[escolha_ead] << "\n";

    // -- Cursos idiomas
    std::cout << "\nCursos Idiomas:\n";
    std::cout << "[1] Libras 1/2\n";
    std::cout << "[2] Libras 2/2\n";
    std::cout << "[0] Nenhum\n";

    std::cout << "\nEscolha: ";
    std::cin >> escolha_idiomas;

    if (escolha_idiomas < 0 || escolha_idiomas > 2)
    {
        escolha_idiomas = 0;
    }

    std::cout << "Voce escolheu: "
              << cursos_idiomas[escolha_idiomas] << "\n";

    // Limpa o buffer do teclado
    std::cin.ignore();

    // -- Cadastro
    std::cout << "\nDigite seu primeiro nome: ";
    std::getline(std::cin, nome_aluno);

    std::cout << "Digite sua cidade: ";
    std::getline(std::cin, cidade_aluno);

    // -- Resumo
    std::cout << "\n-----------------------------------------------\n";
    std::cout << "Aluno: " << nome_aluno << "\n";
    std::cout << "Cidade: " << cidade_aluno << "\n";

    std::cout << "\nCursos escolhidos:\n";
    std::cout << "Tecnico: " << cursos_tecnicos[escolha_tecnicos] << "\n";
    std::cout << "Livre: " << cursos_livres[escolha_livres] << "\n";
    std::cout << "EAD: " << cursos_ead[escolha_ead] << "\n";
    std::cout << "Idiomas: " << cursos_idiomas[escolha_idiomas] << "\n";

    std::cout << "\n-----------------------------------------------\n";

    // -- Contato
    std::cout << "\n"
              << nome_aluno
              << ", voce aceita receber uma ligacao da unidade mais proxima de "
              << cidade_aluno << "?\n";

    std::cout << "[1] Aceito\n";
    std::cout << "[2] Nao aceito\n";

    std::cin >> aceita_ligacao;

    if (aceita_ligacao == 1)
    {
        std::cout << "\nDigite seu telefone: ";
        std::cin >> telefone_aluno;

        std::cout << "\nNossa equipe entrara em contato com voce no numero "
                  << telefone_aluno << ".\n";
    }
    else
    {
        std::cout << "\nObrigado pelo interesse, "
                  << nome_aluno
                  << "! Visite nossa unidade quando desejar.\n";
    }

    return 0;
}