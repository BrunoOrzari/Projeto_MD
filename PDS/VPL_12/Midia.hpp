#ifndef MIDIA_H
#define MIDIA_H
#include <string>
#include  <ostream>
#include <iostream>
class Midia{

protected:
 std::string _titulo; int _duracao_s;

public:
    Midia(std::string titulo, int duracao_s);
    
    std::string get_titulo();
    virtual ~Midia() = default;
    virtual void print_info() const;// imprime as informações comuns (e será sobrescrita pelas subclasses).
    virtual void play() const = 0;// método virtual puro para simular a reprodução. A simulação consiste em imprimir uma linha por segundo do formato:
    //Playing <_titulo> [i/<_duracao_s>]
    virtual std::string tipo() const=0;// retorna o tipo concreto da mídia (ex.: Musica ou Podcast).
    friend std::ostream& operator<<(std::ostream& os, const Midia& m);//std::ostream& os omitido
    //Deve chamar m.print_info()
    int eh_musica;
};



#endif