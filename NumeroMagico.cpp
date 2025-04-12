#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    cout << "Jogo do número mágico!\n";

    bool nao_acertou = true;
    int tentativas = 0;

    srand (time(NULL));
    int num = rand() % 20;
    int chute;
    cout << "Tente adivinhar o número mágico:";
    cin >> chute;
    tentativas = tentativas + 1;
    
    while (nao_acertou){

        int chute;
        cout << "Tentativa " << tentativas << endl;
        cout << "Qual seu chute?";
        cin >> chute;

        cout << "O valor do seu chute é: " << chute << endl;
        bool acertou = chute == num;
        bool maior = chute > num;

        if (acertou){
            cout << "Parabéns! Você acertou o número mágico!" << endl;
            nao_acertou = false;
            cout << "Fim de jogo!" << endl;
            cout << "Você acertou o número mágico em " << tentativas << " tentativas" << endl;
            break;
        }
        else if (chute >= num -1 && chute <= num +1){
            cout << "O seu  chute está muito próximo ao número mágico!" << endl;
        }
        else if (chute >= num -2 && chute <= num +2){
            cout << "O seu  chute está próximo ao número mágico!" << endl;
        }
        tentativas = tentativas + 1;
    }

}