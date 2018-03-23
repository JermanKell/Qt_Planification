#include "Gestion_Client.h"
#include "FoncteurTrieRessource.h"
#include <iostream>
#include <algorithm>

using namespace std;


Gestion_Client::Gestion_Client() {
    gCreneau = Creneau();

}
Gestion_Client::~Gestion_Client() {

}

void Gestion_Client::AjouterClient(Client client) {
    vecClient.push_back(client);
}

/*
	Utilisation d'un foncteur pour ordonnancer la liste de Patient
*/
void Gestion_Client::TriParPrio(void) {
    sort(vecClient.begin(), vecClient.end(), FoncteurSortResource());
}

void Gestion_Client::ProgRDV(void) {
	TriParPrio();
    RendezVous * rdv;

    for (itPrio = vecClient.begin(); itPrio != vecClient.end(); itPrio++) {
        rdv = gCreneau.OrdoRDV(itPrio, ); // Comment récupérer l'id du personnel en passant par un objet client
        if (rd != nullptr)  RDVector.push_back(rdv);
	}
}

vector<Client> Gestion_Client::getVectorClient(void) {
    return vecClient;
}

void Gestion_Client::StockageRDVsurBD() {
    // Faire les requetes vers la base de donnée pour les stocker
}
