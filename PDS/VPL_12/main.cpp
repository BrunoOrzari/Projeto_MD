// NÃO ALTERE ESSA LINHA -------------------------------TIRAR //    -------------------------   
//#include "avaliacao_basica_streaming.hpp"

#include "Catalogo.hpp"
#include "Midia.hpp"
#include "Musica.hpp"
#include "Playlist.hpp"
#include "Podcast.hpp"
#include <vector>

int main() {
    Catalogo catalogo;
    std::vector<std::shared_ptr<Playlist>> playlists;
    bool end = false;
   while(end==false){
    std::string entrada;
    std::cin>>entrada;
    if(entrada =="add_musica"){
        std::string titulo,artista,genero;
        int duracao;
        std::cin>>titulo>> duracao>>artista>>genero;
        catalogo.add_musica(titulo, duracao,artista,genero);
    }
    else if(entrada =="add_podcast"){
        std::string titulo,host;
        int duracao,episodio;
        std::cin>>titulo>> duracao>>host>>episodio;
        catalogo.add_podcast(titulo,duracao,host,episodio);    }
    else if(entrada =="list_all"){
        catalogo.list_all();
    }
    else if(entrada =="pl_new"){
        std::string nome;
        std::cin>>nome;
        bool achou = false;
        for(auto& playlist:playlists){
            if(playlist->get_nome() == nome){
                playlist->clear_vetor();
                achou = true;
                continue;
            }
            
        }
        if(achou == false){
            std::shared_ptr<Playlist> new_playlist = std::make_shared<Playlist>(nome);
            playlists.push_back(new_playlist);
        }
        std::cout<<"OK: playlist "<<nome<<" criada"<<std::endl;
        
    }
    else if(entrada =="pl_add"){
        std::string nome,titulo;
        std::cin>>nome>>titulo; 
        bool achou = false;
        for(auto& playlist:playlists){
            if(playlist->get_nome() == nome){
                playlist->clear_vetor();
                achou = true;
                playlist->add(catalogo.get(titulo));
                continue;
            }
            
        }
        if(achou == false){
            std::shared_ptr<Playlist> new_playlist = std::make_shared<Playlist>(nome);
            playlists.push_back(new_playlist);
             std::cout<<"OK: playlist "<<nome<<" criada"<<std::endl;
             new_playlist->add(catalogo.get(titulo));
        }
        
        }
        else if(entrada =="pl_list"){
            std::string nome;
            std::cin>>nome;
            for(auto& playlist:playlists){
            if(playlist->get_nome() == nome){
                playlist->list();
                continue;
            }
            }
        }
        else if(entrada =="pl_play"){
            std::string nome;
            std::cin>>nome;
            for(auto& playlist:playlists){
            if(playlist->get_nome() == nome){
                playlist->play_all();
                continue;
            }
            }
        }
        else if(entrada =="play"){
            std::string titulo;
            std::cin>>titulo;
            auto midia = catalogo.get(titulo);//sugestão IA(para n looping se get == fail)
            if (midia) {
                midia->play();
            }
            }
            else if(entrada =="b"){
            //avaliacao_basica();
            }
             else if(entrada =="quit"){
           end = true;
            }
        
    
      
}     
return 0; 
}


 