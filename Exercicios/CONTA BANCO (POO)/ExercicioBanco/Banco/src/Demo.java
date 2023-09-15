public class Demo{
    public static void main (String[] args){
       
        Conta c2 = new Conta();
        c2.abrirConta("CP");
        c2.depositar(500);
        c2.fecharConta();
        c2.sacar(650);
        c2.fecharConta();
        c2.depositar(50);
    }
}