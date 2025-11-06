using System;

class Program {
    static void Main() {
        Console.Write("Digite a medida da glicose: ");
        double glicose = double.Parse(Console.ReadLine());
        
        if (glicose <= 100) {
            Console.WriteLine("Classificacao: Normal");
        } else if (glicose <= 140) {
            Console.WriteLine("Classificacao: Elevado");
        } else {
            Console.WriteLine("Classificacao: Diabetes");
        }
    }
}