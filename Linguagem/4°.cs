using System;

class Program {
    static void Main() {
        Console.Write("Digite a primeira nota: ");
        double n1 = double.Parse(Console.ReadLine());
        Console.Write("Digite a segunda nota: ");
        double n2 = double.Parse(Console.ReadLine());
        Console.Write("Digite a terceira nota: ");
        double n3 = double.Parse(Console.ReadLine());
        Console.Write("Digite a quarta nota: ");
        double n4 = double.Parse(Console.ReadLine());
        Console.Write("Digite a quinta nota: ");
        double n5 = double.Parse(Console.ReadLine());
        Console.Write("Digite a sexta nota: ");
        double n6 = double.Parse(Console.ReadLine());
        Console.Write("Digite a sétima nota: ");
        double n7 = double.Parse(Console.ReadLine());
        
        double primeiraMedia = (n1 + n2 + n3) / 3.0;
        double segundaMedia = (n4 + n5 + n6) / 3.0;
        double terceiraMedia = (primeiraMedia + segundaMedia + n7) / 3.0;
        
        Console.WriteLine("Nota final = " + terceiraMedia.ToString("F1"));
        
        if (terceiraMedia < 60) {
            Console.WriteLine("Conceito = C");
        } else if (terceiraMedia < 80) {
            Console.WriteLine("Conceito = B");
        } else {
            Console.WriteLine("Conceito = A");
        }
    }
}