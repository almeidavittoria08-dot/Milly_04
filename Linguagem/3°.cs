using System;

class Program {
    static void Main() {
        Console.Write("Digite o preço unitário do produto: ");
        double precoUnitario = double.Parse(Console.ReadLine());
        Console.Write("Digite a quantidade comprada: ");
        int quantidade = int.Parse(Console.ReadLine());
        Console.Write("Digite o valor pago: ");
        double valorPago = double.Parse(Console.ReadLine());
        
        double troco = valorPago - (precoUnitario * quantidade);
        
        Console.WriteLine("Troco = " + troco.ToString("F2"));
    }
}