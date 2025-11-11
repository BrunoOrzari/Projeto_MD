#ifndef MUSICA_H
#define MUSICA_H
#include "Midia.hpp"
#include <string>

    class Musica:public Midia{

    //Atributos 
    private: 
    std::string _artista; std::string _genero;
    
    public:
    Musica(std::string titulo, int duracao_s, std::string artista, std::string genero);// construtor.
    void print_info() const override;/* imprime exatamente no formato:

    Info: Midia
    Titulo: <_titulo>
    Duracao (s): <_duracao_s>
    Tipo: Musica
    Artista: <_artista>
    Genero: <_genero>
*/
    void play() const override;// mesma simulação descrita em Midia.
    std::string tipo() const override;// retorna "Musica".
    };
    #endif