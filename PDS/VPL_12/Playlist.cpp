#include "Playlist.hpp"
#include "Midia.hpp"
#include <memory>
 
Playlist::Playlist(std::string nome):_nome(nome){}// construtor.
void Playlist::add(std::shared_ptr<Midia> faixa){
    _faixas.push_back(faixa);
}//: adiciona uma referência à mídia do catálogo.
void Playlist::list() const{
    int contador= 1;
    for(auto& faixa:_faixas){
        std::cout<<"Info: Faixa "<<contador<<std::endl;
        std::cout<<*faixa;
        contador++;
    }
}// para cada faixa, imprimir:

//Info: Faixa <pos>
//<usa operator<< da Midia>

void Playlist::play_all() const{
    for(auto& faixa:_faixas){
        faixa->play();
    }
}// reproduz as faixas em ordem chamando play()
std::string Playlist::get_nome(){
    return _nome;
}
void Playlist::set_nome(std::string nome){
    _nome = nome;
}
void Playlist::clear_vetor(){
    _faixas.clear();
}