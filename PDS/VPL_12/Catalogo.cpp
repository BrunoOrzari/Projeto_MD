#include "Catalogo.hpp"
#include "Musica.hpp"
#include "Podcast.hpp"



     bool Catalogo::add_musica(std::string titulo, int duracao_s, std::string artista, std::string genero){
        for(auto& item:_itens){
            if (item->get_titulo() == titulo){
                std::cout<<"Erro: titulo "<<titulo<<" repetido"<<std::endl;
                return false;
            }
        }
   
        std::shared_ptr<Midia> musica = std::make_shared<Musica>(titulo,duracao_s,artista,genero);
        _itens.push_back(musica);
        std::cout<<"OK: musica "<<titulo<<" adicionada"<<std::endl;
        return true;
     }
    
    bool Catalogo::add_podcast(std::string titulo, int duracao_s, std::string host, int episodio){
        for(auto& item:_itens){
            if (item->get_titulo() == titulo){
                std::cout<<"Erro: titulo "<<titulo<<" repetido"<<std::endl;
                return false;
            }
        }
        std::shared_ptr<Midia> podcast = std::make_shared<Podcast>(titulo,duracao_s,host,episodio);
        _itens.push_back(podcast);
        std::cout<<"OK: podcast "<<titulo<<" adicionado"<<std::endl;
        return true;
     }
    
    //Regra: título único no catálogo.
    //Sucesso: OK: podcast <titulo> adicionado
    //Erro: Erro: titulo <titulo> repetido
    std::shared_ptr<Midia> Catalogo::get(std::string titulo) const{ //encontrar end do conteudo com esse titulo
        for(auto& item:_itens){
            if (item->get_titulo() == titulo){
                std::cout<<"Erro: titulo "<<titulo<<" repetido"<<std::endl;
                return item;
            }
        }
        std::cout<<"Erro: midia "<<titulo<<" inexistente"<<std::endl;
        return nullptr;
    }
    //Se não encontrar: retorna nullptr.
    void Catalogo::list_all() const{
        
        if(_itens.size()==0){
            std::cout<<"Info: (vazio)."<<std::endl;
        }
        else{
            for(auto& item:_itens){
            std::cout<<item<<std::endl;
        }         
        }
    }
    //Se vazio: imprimir Info: (vazio).
    //Caso contrário, imprimir cada item usando operator<< (o que chama print_info() polimorficamente).