#include "Podcast.hpp"
#include "Midia.hpp"
#include <iostream>
Podcast::Podcast(std::string titulo, int duracao_s, std::string host, int episodio):Midia( titulo, duracao_s),_host(host), _episodio(episodio){}// construtor.
    void Podcast::print_info() const {//omiti 
    std::cout<< "Info: Midia"<<std::endl
    <<"Titulo: "<<_titulo<<std::endl
    <<"Duracao (s): "<<_duracao_s<<std::endl
    <<"Tipo: Podcast"<<std::endl
    <<"Host: "<<_host<<std::endl 
    <<"Episodio: "<<_episodio<<std::endl;
    }
/*
    Info: Midia
    Titulo: <_titulo>
    Duracao (s): <_duracao_s>
    Tipo: Podcast
    Host: <_host>
    Episodio: <_episodio>
*/
    void Podcast::play() const {//omiti 
        std::cout<<"Playing "<<_titulo;
    }// mesma simulação descrita em Midia.
    std::string Podcast::tipo() const { //omiti 
        return "Podcast";
    }
