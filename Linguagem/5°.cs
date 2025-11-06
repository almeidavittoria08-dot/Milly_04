using System;

class Program {
    static void Main() {
        Console.Write("Digite a altura: ");
        double altura = double.Parse(Console.ReadLine());
        Console.Write("Digite o peso: ");
        double peso = double.Parse(Console.ReadLine());
        
        double imc = peso / (altura * altura);
        
        Console.WriteLine("IMC = " + imc.ToString("F2"));
    }
}