#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n1=0, n2=0, q=0;
    cout<<"Entre com o numero a ser adivinhado\n";
    cin>>n1;
    system("cls");
    do
    {
        cout<<"Digite um valor \n";
        cin>>n2;
        system("cls");
        if (n2 != n1)
            if (n2 > n1)
            cout<<"Voce digitou um valor alto \n";
        else
            cout<<"Voce digitou um valor baixo \n";
        q++;
    }while (n1 != n2);
    cout<<"O numero correto e " <<n1 <<"\n";
    cout<<"Voce acertou em " << q << " Tentativas\n\n";
    system ("pause");
    cout << "\n\n\n\n";
    return 0;
}
