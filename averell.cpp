//#include <gtkmm.h>
#include <gtkmm/main.h>
#include <gtkmm/button.h>
#include <gtkmm/stock.h>  // logo prédéfini 
#include <iostream>

#include "windows.hpp"


void on_button_clicked() {
std::cout << "Bonjour" << std::endl;
}

int main(int argc, char **argv) {
Gtk::Main app(argc, argv); //premier objet à devoir etre creer
//Gtk::Window windows; 
window_screen windows;


//Partie widget 
//Gtk::Button Push("Je suis bouton");
Gtk::Button Push(Gtk::Stock::CANCEL);
//Push.set_can_focus(false); //empeche le focus d'un bouton (focus = appuyer sur entre comme click)
Push.show();

windows.add(Push);







//lancement fenetre
app.run(windows);
return 0;
}

/*
Gtk::VBox vb ;


Gtk::Label Title;
Gtk::Entry Diag;
Gtk::Button React("APPUYE DESSUS !");
vb.pack_start(Title);
vb.pack_start(Diag);
vb.pack_start(Push);
vb.pack_start(React);


Title.show();
Diag.show();
React.show();

windows.add(vb);
vb.show();*/