#ifndef PODCAST.H
#define PODCAST.H


    class Podcast:public Midia{

    private:
    std::string _host; int _episodio;
    
    public:
    Podcast(std::string titulo, int duracao_s, std::string host, int episodio)// construtor.
    void print_info() const override{
        // imprime exatamente no formato:
/*
    Info: Midia
    Titulo: <_titulo>
    Duracao (s): <_duracao_s>
    Tipo: Podcast
    Host: <_host>
    Episodio: <_episodio>
*/
    void play() const override;// mesma simulação descrita em Midia.
    std::string tipo() const override;// retorna "Podcast".
}

#endif 