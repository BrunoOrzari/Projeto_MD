#ifndef CATALOGO_H
#define CATALOGO_H


#include <string>
#include <vector>
#include <memory> 
#include "Midia.hpp"

    class Catalogo{

    private:
     std::vector<std::shared_ptr<Midia>> _itens; //(ordem de inserção)
    public:
     bool add_musica(std::string titulo, int duracao_s, std::string artista, std::string genero);
    //Regra: o título deve ser único no catálogo.
    //Sucesso: OK: musica <titulo> adicionada
    //Erro: Erro: titulo <titulo> repetido
    bool add_podcast(std::string titulo, int duracao_s, std::string host, int episodio);
    //Regra: título único no catálogo.
    //Sucesso: OK: podcast <titulo> adicionado
    //Erro: Erro: titulo <titulo> repetido
    std::shared_ptr<Midia> get(std::string titulo) const;
    //Se não encontrar: retorna nullptr.
    void list_all() const;
    //Se vazio: imprimir Info: (vazio).
    //Caso contrário, imprimir cada item usando operator<< (o que chama print_info() polimorficamente).
    };
    #endif