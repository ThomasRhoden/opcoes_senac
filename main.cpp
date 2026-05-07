#include <iostream>
#include <string>

int main()
{
    std::string nome_aluno;
    std::string sobrenome_aluno;
    int idade_aluno;
    int escolha_cidade;
    int escolha_curso;
    int escolha_curso_tecnico;
    int escolha_curso_fic;
    int escolha_curso_ead;
    int escolha_curso_idioma;

    // std::string cidade_residencia;
    // std::string rua_residencia;
    // int numero_residencia;

    std::cout << "-------------- Sistema do SENAC --------------" << std::endl;
    std::cout << "--------- Saiba tudo sobre os cursos ---------" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Digite seu primeiro nome e aperte Enter:-" << std::endl;
    std::cin >> nome_aluno;
    std::cout << "Digite seu sobrenome e aperte Enter:-" << std::endl;
    std::cin >> sobrenome_aluno;
    std::cout << "Digite sua idade e aperte Enter:-" << std::endl;
    std::cin >> idade_aluno;
    std::cout << "Escolha a opcao da sua cidade e aperte Enter:-" << std::endl;
    std::cout << "1 = Novo Hamburgo || 0 = Voltar -" << std::endl;

    std::cin >> escolha_cidade;
    if (escolha_cidade == 0)
    {
        std::cout << "Tchau, ate mais!" << std::endl;
        std::cout << "-------------- FIM --------------" << std::endl;
    }
    else if (escolha_cidade == 1)
    {
        std::cout << "Escolha o numero de qual tipo de curso quer ver:" << std::endl;
        std::cout << "1 - Cursos Tecnicos" << std::endl;
        std::cout << "2 - Cursos Livres(FIC)" << std::endl;
        std::cout << "3 - Cursos EAD" << std::endl;
        std::cout << "4 - Cursos de Idiomas" << std::endl;
        std::cout << "0 - Sair" << std::endl;

        std::cin >> escolha_curso;
        if (escolha_curso == 1)
        {
            std::cout << "Esses sao os cursos tecnicos disponiveis nesta unidade:" << std::endl;
            std::cout << "1 - Desenvolvimento de sistemas" << std::endl;
            std::cout << "2 - Enfermagem" << std::endl;
            std::cout << "3 - Modelagem" << std::endl;
            std::cout << "0 - Sair" << std::endl;

            std::cin >> escolha_curso_tecnico;
            if (escolha_curso_tecnico == 0)
            {
                std::cout << "Tchau, ate mais!" << std::endl;
                std::cout << "-------------- FIM --------------" << std::endl;
            }
            else if (escolha_curso_tecnico == 1)
            {
                std::cout << "Tecnico em desenvolvimento de sistemas\n1216 horas\nR$ 14.405,49 ou ate 30x 493,51\nPagamento no pix, dinheiro, boleto ou cartao!" << std::endl;
                std::cout << "Verifique descontos para clubes e associados!" << std::endl;
                std::cout << "Aproveite o desconto de dia das Maes!" << std::endl;
            }
            else if (escolha_curso_tecnico == 2)
            {
                std::cout << "Tecnico em Enfermagem\n1600 horas\nR$15.278,00 ate 40x371,98\nPagamento no pix, dinheiro, boleto ou cartao!" << std::endl;
                std::cout << "Verifique descontos para clubes e associados!" << std::endl;
                std::cout << "Aproveite o desconto de dia das Maes!" << std::endl;
            }
            else if (escolha_curso_tecnico == 3)
            {
                std::cout << "Tecnico em Modelagem\n800 horas\nR$14.844,79 em ate 28 vezes!\nPagamento no pix, dinheiro, boleto ou cartao!" << std::endl;
                std::cout << "Verifique descontos para clubes e associados!" << std::endl;
                std::cout << "Aproveite o desconto de dia das Maes!" << std::endl;
            }
        }
        else if (escolha_curso == 2)
        {
            std::cout << "Esses sao os cursos Livres (FIC) disponiveis nesta unidade:" << std::endl;
            std::cout << "1 - Tecnica de costura" << std::endl;
            std::cout << "2 - Consultoria de estilo e coloracao pessoal" << std::endl;
            std::cout << "3 - Fotografia digital" << std::endl;
            std::cout << "4 - Tecnicas basicas em cuidados aos idosos" << std::endl;
            std::cout << "5 - Informatica fundamental" << std::endl;
            std::cout << "0 - Sair" << std::endl;

            std::cin >> escolha_curso_fic;
            if (escolha_curso_fic == 0)
            {
                std::cout << "Tchau, ate mais!" << std::endl;
                std::cout << "-------------- FIM --------------" << std::endl;
            }
            else if (escolha_curso_fic == 1)
            {
                std::cout << "Tecnica de costura\nPagamento no pix, dinheiro, boleto ou cartao!" << std::endl;
                std::cout << "Verifique descontos para clubes e associados!" << std::endl;
                std::cout << "Aproveite o desconto de dia das Maes!" << std::endl;
            }
            else if (escolha_curso_fic == 2)
            {
                std::cout << "Consultoria de estilo e coloracao pessoal\nPagamento no pix, dinheiro, boleto ou cartao!" << std::endl;
                std::cout << "Verifique descontos para clubes e associados!" << std::endl;
                std::cout << "Aproveite o desconto de dia das Maes!" << std::endl;
            }
            else if (escolha_curso_fic == 3)
            {
                std::cout << "Fotografia digital\nPagamento no pix, dinheiro, boleto ou cartao!" << std::endl;
                std::cout << "Verifique descontos para clubes e associados!" << std::endl;
                std::cout << "Aproveite o desconto de dia das Maes!" << std::endl;
            }
            else if (escolha_curso_fic == 4)
            {
                std::cout << "Tecnicas basicas em cuidados aos idosos\nPagamento no pix, dinheiro, boleto ou cartao!" << std::endl;
                std::cout << "Verifique descontos para clubes e associados!" << std::endl;
                std::cout << "Aproveite o desconto de dia das Maes!" << std::endl;
            }
            else if (escolha_curso_fic == 5)
            {
                std::cout << "Informatica fundamental\nPagamento no pix, dinheiro, boleto ou cartao!" << std::endl;
                std::cout << "Verifique descontos para clubes e associados!" << std::endl;
                std::cout << "Aproveite o desconto de dia das Maes!" << std::endl;
            }
        }
        else if (escolha_curso == 3)
        {
            std::cout << "Esses sao os cursos EAD disponiveis nesta unidade:" << std::endl;
            std::cout << "1 - RH" << std::endl;
            std::cout << "2 - Logistica" << std::endl;
            std::cout << "3 - Contabilidade" << std::endl;
            std::cout << "4 - Transacoes Imobiliarias" << std::endl;
            std::cout << "0 - Sair" << std::endl;

            std::cin >> escolha_curso_ead;
            if (escolha_curso_ead == 0)
            {
                std::cout << "Tchau, ate mais!" << std::endl;
                std::cout << "-------------- FIM --------------" << std::endl;
            }
            else if (escolha_curso_ead == 1)
            {
                std::cout << "RH\nR$3.355,00 entrada de 99,99 + 22x de 148,00\n800 horas\nPagamento no pix, dinheiro, boleto ou cartao!" << std::endl;
                std::cout << "Verifique descontos para clubes e associados!" << std::endl;
                std::cout << "Aproveite o desconto de dia das Maes!" << std::endl;
            }
            else if (escolha_curso_ead == 2)
            {
                std::cout << "Logistica\nR$3.751 entrada de 99,99 + 22x de 166,00\n800 horas\nPagamento no pix, dinheiro, boleto ou cartao!" << std::endl;
                std::cout << "Verifique descontos para clubes e associados!" << std::endl;
                std::cout << "Aproveite o desconto de dia das Maes!" << std::endl;
            }
            else if (escolha_curso_ead == 3)
            {
                std::cout << "Contabilidade\nR$3.355,00 entrada de 99,99 + 22x de 148,00\n800 horas\nPagamento no pix, dinheiro, boleto ou cartao!" << std::endl;
                std::cout << "Verifique descontos para clubes e associados!" << std::endl;
                std::cout << "Aproveite o desconto de dia das Maes!" << std::endl;
            }
            else if (escolha_curso_ead == 4)
            {
                std::cout << "Transacoes Imobiliarias\n3.157,00 entrada de 99,99 + 22x 143,00\n800 horas\nPagamento no pix, dinheiro, boleto ou cartao!" << std::endl;
                std::cout << "Verifique descontos para clubes e associados!" << std::endl;
                std::cout << "Aproveite o desconto de dia das Maes!" << std::endl;
            }
        }
        else if (escolha_curso == 4)
        {
            std::cout << "Esses sao os cursos de idiomas disponiveis nesta unidade:" << std::endl;
            std::cout << "1 - Libras 1/2" << std::endl;
            std::cout << "2 - Libras 2/2" << std::endl;
            std::cout << "0 - Sair" << std::endl;

            std::cin >> escolha_curso_idioma;
            if (escolha_curso_idioma == 0)
            {
                std::cout << "Tchau, ate mais!" << std::endl;
                std::cout << "-------------- FIM --------------" << std::endl;
            }
            else if (escolha_curso_idioma == 1)
            {
                std::cout << "Libras 1\nR$1.757,00 ate 3x de 585,00\n54 horas\nPagamento no pix, dinheiro, boleto ou cartao!" << std::endl;
                std::cout << "Verifique descontos para clubes e associados!" << std::endl;
                std::cout << "Aproveite o desconto de dia das Maes!" << std::endl;
            }
            else if (escolha_curso_idioma == 2)
            {
                std::cout << "Libras 2\nR$1.757,00 ate 3x de 585,00\n54 horas\nPagamento no pix, dinheiro, boleto ou cartao!" << std::endl;
                std::cout << "Verifique descontos para clubes e associados!" << std::endl;
                std::cout << "Aproveite o desconto de dia das Maes!" << std::endl;
            }
        }
        else if (escolha_curso == 0)
        {
            std::cout << "Tchau, ate mais!" << std::endl;
            std::cout << "-------------- FIM --------------" << std::endl;
        }
    }
    else if (escolha_cidade == 0)
    {
        std::cout << "Tchau, ate mais!" << std::endl;
        std::cout << "-------------- FIM --------------" << std::endl;
    }

    std::cout << "linha em construção " << std::endl;

    return 0;
}