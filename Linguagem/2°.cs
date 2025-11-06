using System;

class Program {
    static void Main() {
        Console.Write("Digite o nome da primeira pessoa: ");
        string nome1 = Console.ReadLine();
        Console.Write("Digite a idade da primeira pessoa: ");
        int idade1 = int.Parse(Console.ReadLine());
        Console.Write("Digite o nome da segunda pessoa: ");
        string nome2 = Console.ReadLine();
        Console.Write("Digite a idade da segunda pessoa: ");
        int idade2 = int.Parse(Console.ReadLine());
        
        double media = (idade1 + idade2) / 2.0;
        
        Console.WriteLine("A idade media de " + nome1 + " e " + nome2 + " eh de " + media + " anos");
    }
}