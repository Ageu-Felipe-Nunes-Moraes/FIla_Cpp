
# Fila - Implementação em C++

Este projeto consiste em uma implementação simples de uma fila em C++. Uma fila é uma estrutura de dados que segue o princípio "primeiro a entrar, primeiro a sair" (FIFO - First In, First Out), onde o primeiro elemento adicionado é o primeiro a ser removido.

## Funcionalidades

- **Push:** Adiciona um item ao final da fila.
- **Pop:** Remove o primeiro item da fila, se houver algum.
- **Top:** Retorna o primeiro item da fila, sem removê-lo.
- **empty:** Permite verificar se a fila está vazia.

## Como Usar

1. Instancie um objeto da classe `Queue`.
2. Adicione elementos à fila usando o método `push(item)`.
3. Remova elementos da fila usando o método `pop()`.
4. Consulte o primeiro elemento da fila sem removê-lo usando o método `top()`.
5. Verifique se a fila está vazia usando o método `empty()`.

## Exemplo de Uso

```Cpp
int main(){
    // Declare of the class
    Queue queue;

    // Fills the list with 100 numbers
    for (int i = 0; i < 101; i++) {
        queue.push(i);
        queue.printList();
        queue.sleepForOneSecond();
    }
    cout << endl;

    queue.printList();
    cout << "Aguarde..." << endl;
    queue.sleepForOneSecond();

    // Emptying the entire list
    while (not queue.empty()){
        int queue_first_item = queue.top();
        queue.pop();
        cout << "Item removido da lista com sucesso: " << queue_first_item << endl;
        queue.printList();
        queue.sleepForOneSecond();
    }

    return 0;
}
```
Este exemplo demonstra como preencher uma fila com números de 0 a 100, imprimir a fila, aguardar por alguns segundos e então remover cada elemento da fila e imprimir a fila resultante.

## Autor

Este código foi desenvolvido por Ageu Felipe Nunes Moraes(eu) como parte de um projeto pessoal dedicado ao fortalecimento e amadurecimento da codificação. Para quaisquer dúvidas ou sugestões, por favor, entre em contato pelo e-mail [ageumoraes67@gmail.com].

## Aviso Legal

Este é um projeto de software desenvolvido por um indivíduo e não tem afiliação com outrem.
