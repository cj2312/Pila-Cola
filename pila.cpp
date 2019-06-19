#include<iostream>
using namespace std;
template<class T>
class Nodo{
private:
    T elemento;
public:
    Nodo<T> *sig;
    Nodo (T dato){
        elemento=dato;
        sig = NULL;
    }
    T getElem()
    {
        return elemento;
    }
};

template<class T>
class Pila{
    Nodo<T> *nodo;
public:
    Pila(){
    nodo=NULL;
    }
    bool vacio(){
        return nodo==NULL;
    }
    void insertar(T elemento)
    {
        Nodo<T> *temp=new Nodo<T>(elemento);

        if (vacio()){
            nodo=temp;
        }
        else{
           temp->sig=nodo;
           nodo=temp;
        }
    }
    void borrar()
    {
        if (vacio()){
            cout<<"Lista vacia!\n";
        }
        else{
           Nodo<T> *aux=nodo;
           nodo=aux->sig;
           delete aux;
        }
}
    void mostrarLista(){
        if(vacio()){
            cout<<"No hay elementos en la lista\n";
        }
        else{
            Nodo<T> *aux=nodo;
            int i=0;
            cout<<"Los datos de la lista son los siguientes:\n";
            while(aux!=NULL){
                cout<<" "<<aux->getElem();
                aux=aux->sig;
                i++;
            }
            cout<<endl;
        }
    }
};

template<class T>
class Cola{
private:
    Nodo<T> *primero;
    Nodo<T> *ultimo;
public:
    Cola(){
        primero=ultimo=NULL;
    }
    bool vacio(){
        return primero==NULL;
    }
    void insertarElem(T elemento)
    {
        Nodo<T> *temp=new Nodo<T>(elemento);
        if (vacio()){
            primero=ultimo=temp;
        }
        else{
            ultimo->sig=temp;
            ultimo=temp;
        }
    }
    void mostrarLista(){
        if(vacio()){
            cout<<"No hay elementos en la lista\n";
        }
        {
            Nodo<T> *aux=primero;
            int i=0;
            cout<<"Los datos de la lista son los siguientes:\n";
            while(aux!=NULL){
                cout<<" "<<aux->getElem();
                aux=aux->sig;
                i++;
            }
            cout<<endl;
        }
    }
    void borrar()
    {
        if (vacio()){
            cout<<"Lista vacia!\n";
        }
        else{
            if (primero==ultimo){
                primero=ultimo=NULL;
                cout<<"elemento eliminado!\n";
            }
            else{
                Nodo<T> *temp=primero;
                primero=primero->sig;
                delete temp;
                cout<<"elemento eliminado!\n";
            }
        }
}
};
 int main(){
    int p[6]={1,7,4,3,6,5};
    Pila<int> lp;
    for(int i=0;i<6;i++){
        lp.insertar(p[i]);

}
    lp.mostrarLista();

    char s[5]={'a','b','c','g','r'};
    Cola<char> c;
      for(int i=0;i<5;i++){
       c. insertarElem(s[i]);}
    c.mostrarLista();

 }
