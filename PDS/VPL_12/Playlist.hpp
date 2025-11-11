#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <vector>
#include "Midia.hpp"
class Playlist{

private:
 std::string _nome; std::vector<std::shared_ptr<Midia>> _faixas;
 public:
Playlist(std::string nome);// construtor.
void add(std::shared_ptr<Midia> faixa);//: adiciona uma referência à mídia do catálogo.
void list() const;// para cada faixa, imprimir:

//Info: Faixa <pos>
//<usa operator<< da Midia>

void play_all() const;// reproduz as faixas em ordem chamando play()
};
#endif