using System;

class Program {
    static void Main() {
        Console.Write("Digite o código do destino: ");
        int codigo = int.Parse(Console.ReadLine());
        Console.Write("Digite o tipo (ida ou ida e volta): ");
        string tipo = Console.ReadLine();
        
        double valor = 0;
        
        if (codigo == 1) {
            valor = 120.00;
        } else if (codigo == 2) {
            valor = 200.00;
        } else if (codigo == 3) {
            valor = 50.00;
        } else if (codigo == 4) {
            valor = 80.00;
        }
        
        if (tipo == "ida e volta") {
            valor = valor * 2 * 0.9;
        }
        
        Console.WriteLine("Valor total: R$ " + valor.ToString("F2"));
    }
}