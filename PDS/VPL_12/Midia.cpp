#include "Midia.cpp"

Midia::Midia(std::string titulo, int duracao_s);

Midia::virtual ~Midia() = default;
Midia::virtual void print_info() const;// imprime as informações comuns (e será sobrescrita pelas subclasses).
Midia::virtual void play() const = 0;// método virtual puro para simular a reprodução. A simulação consiste em imprimir uma linha por segundo do formato:
//Playing <_titulo> [i/<_duracao_s>]
Midia::virtual std::string tipo() const;// retorna o tipo concreto da mídia (ex.: Musica ou Podcast).
std::ostream& operator<<(std::ostream& os, const Midia& m){ //-----------------------------Mau definifo -----------------
    m.print_info();
} //Sobrecarga (global):
//Deve chamar m.print_info()
