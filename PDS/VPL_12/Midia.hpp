#ifndef MIDIA.H
#define MIDIA.H
#include <string>
#include  <ostream>
class Midia{

protected:
int _duracao_s; std::string _titulo;
public:
    Midia(std::string titulo, int duracao_s);

    virtual ~Midia() = default;
    virtual void print_info() const;// imprime as informações comuns (e será sobrescrita pelas subclasses).
    virtual void play() const = 0;// método virtual puro para simular a reprodução. A simulação consiste em imprimir uma linha por segundo do formato:
    //Playing <_titulo> [i/<_duracao_s>]
    virtual std::string tipo() const;// retorna o tipo concreto da mídia (ex.: Musica ou Podcast).
    Sobrecarga (global): std::ostream& operator<<(std::ostream& os, const Midia& m);
    //Deve chamar m.print_info()
}



#endif