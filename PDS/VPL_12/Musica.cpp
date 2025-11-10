# include "Musica.hpp"

    
Musica::Musica(std::string titulo, int duracao_s, std::string artista, std::string genero):_titulo(titulo),_duracao_s(duracao_s),_artista(artista),_genero(genero){}// construtor.
void Musica::print_info() const override{
    std::cout<< "Info: Midia"<<std::endl
    <<"Titulo: "<<_titulo<<std::endl
    <<"Duracao (s): "<<_duracao_s<<std::endl
    <<"Tipo: Musica"<<std::endl
    <<"Artista: "<<_artista<<std::endl 
    <<"Genero: "<<_genero<<std::endl;
}

void Musica::play() const override{
    std::cout<<"Playing "<<_titulo;
}// mesma simulação descrita em Midia.

std::string Musica::tipo() const override{
        return "Musica"
}// retorna "Musica".
    
    