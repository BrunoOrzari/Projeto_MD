#include "Midia.hpp"

Midia::Midia(std::string titulo, int duracao_s):_titulo(titulo),_duracao_s(duracao_s){

}

std::string Midia::get_titulo(){
    return _titulo;
};
Midia::~Midia() = default;
void Midia::print_info() const{
}
 
 std::string Midia::tipo() const{};// retorna o tipo concreto da mídia (ex.: Musica ou Podcast).

std::ostream& operator<<(std::ostream& os, const Midia& m) {    //Auxílio de IA. Inicialmente, não entendi como tratar o os
    m.print_info();
    return os;
}
 //Sobrecarga (global):
//Deve chamar m.print_info()
