#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Contatos
{
    char nome[40];
    char mail[50];
    char tel[20];
    char cel[20];
};

Contatos Pessoa;

fstream pFile;

void abre_arquivo();
void cadastrar();
void consultar();
void editar();
void excluir();
void excluir_contato();
void fecha_arquivo();
void limpar_buffer();
void limpar_tela();
void listar();
void mostrar();
int procurar(char nome[40]);

int main()
{
    int opMenu = 0;

    abre_arquivo();

    do
    {
        limpar_tela();

        cout << "\n\t\t\tAGENDA DE CONTATOS\n\n";
        cout << "\n\t1-Cadastrar";
        cout << "\n\t2-Consultar";
        cout << "\n\t3-Editar";
        cout << "\n\t4-Excluir";
        cout << "\n\t5-Listar";
        cout << "\n\t0-Sair\n";
        cout << "\n\tOpcao.: ";
        cin >> opMenu;

        if (opMenu != 0)
        {
            switch (opMenu)
            {
            case 1:
                cadastrar();
                break;

            case 2:
                consultar();
                break;

            case 3:
                editar();
                break;

            case 4:
                excluir();
                break;

            case 5:
                listar();
                break;

            default:
                break;
            }
        }

    } while (opMenu != 0);

    fecha_arquivo();

    return 0;
}

void abre_arquivo()
{
    pFile.open("BancoDados.bin", ios::binary | ios::app);
}

void cadastrar()
{
    int opMenu = 0;

    do
    {
        limpar_tela();

        cout << "\n\t\t\tNOVO CADASTRO\n\n";
        cout << "\n\tDigite o nome.....: ";
        limpar_buffer();
        cin.getline(Pessoa.nome, 40);
        cout << "\n\tDigite o e-mail...: ";
        limpar_buffer();
        cin.getline(Pessoa.mail, 50);
        cout << "\n\tDigite o telefone.: ";
        limpar_buffer();
        cin.getline(Pessoa.tel, 20);
        cout << "\n\tDigite o celular..: ";
        limpar_buffer();
        cin.getline(Pessoa.cel, 20);

        pFile.write(reinterpret_cast<char*>(&Pessoa), sizeof(Contatos));

        cout << "\n\n\tDeseja efetuar outro cadastro? (1-Sim / 0-Nao).: ";
        cin >> opMenu;

    } while (opMenu == 1);
}

void consultar()
{
    int opMenu = 0;
    char nome[40];

    do
    {
        limpar_tela();

        cout << "\n\t\t\tCONSULTA DE CONTATOS\n\n";
        cout << "\n\tDigite o nome.: ";
        limpar_buffer();
        cin.getline(nome, 40);
        cout << "\n\t________________________________________________________________\n";
        procurar(nome);
        cout << "\n\t________________________________________________________________\n";
        cout << "\n\n\tConsultar outro contato? (1-Sim / 0-Nao).: ";
        cin >> opMenu;

    } while (opMenu == 1);
}

void editar()
{
    int opMenu = 0;
    char nome[40];

    do
    {
        limpar_tela();

        cout << "\n\t\t\tEDICAO DE CONTATOS\n\n";
        cout << "\n\t1-Editar";
        cout << "\n\t2-Voltar ao menu principal\n";
        cout << "\n\tOpcao.: ";
        cin >> opMenu;

        switch (opMenu)
        {
        case 1:
            cout << "\n\tDigite o nome do contato.: ";
            limpar_buffer();
            cin.getline(nome, 40);
            procurar(nome);
            break;

        case 2:
            break;

        default:
            opMenu = 1;
            break;
        }

    } while (opMenu == 1);
}

void excluir()
{
    int opMenu = 0;

    do {
        limpar_tela();

        cout << "\n\t\t\tEXCLUSAO DE CONTATOS\n\n";
        cout << "\n\t1-Um por vez";
        cout << "\n\t2-Todos";
        cout << "\n\t0-Voltar ao menu principal\n";
        cout << "\n\tOpcao.: ";
        cin >> opMenu;

        switch (opMenu)
        {
        case 1:
            excluir_contato();
            break;

        case 2:
            break;

        default:
            break;
        }

    } while (opMenu != 0);
}

void excluir_contato()
{
    char nome[40];

    cout << "\n\tDigite o nome do contato.: ";
    limpar_buffer();
    cin.getline(nome, 40);

    if (procurar(nome) == 0)
    {
        fstream pTemp;
        pTemp.open("Temp.bin", ios::binary | ios::app);

        pFile.seekg(0, ios::beg);

        while (pFile.read(reinterpret_cast<char*>(&Pessoa), sizeof(Contatos)))
        {
            if (strcmp(nome, Pessoa.nome) != 0)
            {
                pTemp.write(reinterpret_cast<char*>(&Pessoa), sizeof(Contatos));
            }
        }

        pFile.close();
        pTemp.close();

        remove("BancoDados.bin");
        rename("Temp.bin", "BancoDados.bin");

        abre_arquivo();
    }
    else
    {
        limpar_buffer();
        cin.ignore();
    }
}

void fecha_arquivo()
{
    pFile.close();
}

void limpar_buffer()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void limpar_tela()
{
    system("clear");
}

void listar()
{
    pFile.seekg(0, ios::beg);

    limpar_tela();

    cout << "\n\t\t\tRELATORIO DE CONTATOS\n\n";
    cout << "\n\t________________________________________________________________\n";

    while (pFile.read(reinterpret_cast<char*>(&Pessoa), sizeof(Contatos)))
    {
        mostrar();
    }

    cout << "\n\t________________________________________________________________\n";
    cout << "\n\tTecle enter para voltar ao menu principal";
    limpar_buffer();
    cin.ignore();
}

void mostrar()
{
    cout << "\n\tNome.....: " << Pessoa.nome;
    cout << "\n\tE-mail...: " << Pessoa.mail;
    cout << "\n\tTelefone.: " << Pessoa.tel;
    cout << "\n\tCelular..: " << Pessoa.cel << "\n";
}

int procurar(char nome[40])
{
    pFile.seekg(0, ios::beg);

    while (pFile.read(reinterpret_cast<char*>(&Pessoa), sizeof(Contatos)))
    {
        if (strcmp(nome, Pessoa.nome) == 0)
        {
            mostrar();
        }
    }

    if (strcmp(nome, Pessoa.nome) != 0)
    {
        cout << "\n\tContato inexistente!";
        return 1;
    }
    else
    {
        return 0;
    }
}
