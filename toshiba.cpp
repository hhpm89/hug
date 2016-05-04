using System;
namespace Lab07_08_2012
{
      class Program
      {
            public static void Main(string[] args)
            {
                  Console.Write("Ingrese Numero de cuenta: ");
                  String num=Console.ReadLine();
                  Console.Write("Ingrese Nombre Cliente: ");
                  String nom=Console.ReadLine();
                  Console.Write("Ingrese Tipo Cuenta: ");
                  String tipo = Console.ReadLine();
                  Console.Write("Ingrese Telefono Cliente: ");
                  String cell=Console.ReadLine();
                  Console.Write("Monto Apertura Cuenta: ");
                  int saldo = int.Parse(Console.ReadLine());
                 
                  //Cuenta ObjMartes =new Cuenta();
                  Cuenta ObjPichincha = new Cuenta(num,nom,tipo,cell,saldo);
                 
                  ObjPichincha.VerDatosCliente();
                  ObjPichincha.VerSaldoActual();
                 
                  //Transaccion Deposito
                  Console.Write("Ingrese Cantidad Deposito: ");
                  int cdep = int.Parse(Console.ReadLine());
                  ObjPichincha.Deposito(cdep);
                  ObjPichincha.VerSaldoActual();
                 
                  //Transaccion Retiro
                  Console.Write("Ingrese Cantidad Retiro: ");
                  int cret = int.Parse(Console.ReadLine());
                  ObjPichincha.Retiro(cret);
                  ObjPichincha.VerSaldoActual();
                 
                  Console.ReadKey();
            }
      }
}
//ECHO EN UNA CLASE LLAMADA CUENTA
using System;

namespace Lab07_08_2012
{
      public class Cuenta
      {
            private String numCuenta;
            private String nomCliente;
            private String tipoCuenta;
            private String cellCliente;
            private int saldoActual;
           
            public Cuenta()
            {
                  this.numCuenta=null;
                  this.nomCliente=null;
                  this.tipoCuenta=null;
                  this.cellCliente=null;
                  this.saldoActual=0;
            }
               public Cuenta (String numCuenta, String nomCliente, String            tipoCuenta, String cellCliente, int saldoActual)
            {
                this.numCuenta = numCuenta;
                this.nomCliente = nomCliente;
                this.tipoCuenta= tipoCuenta;
                this.cellCliente = cellCliente;
                this.saldoActual = saldoActual;
            }
            public void VerDatosCliente()
            {
            Console.WriteLine("++++++++++Datos Cliente++++++++++");
            Console.WriteLine("Numero Cuenta: {0} ",this.numCuenta);
            Console.WriteLine("Nombre Cliente: {0} ",this.nomCliente);
            Console.WriteLine("Tipo Cuenta: {0}",this.tipoCuenta);
            Console.WriteLine("Telefono Cliente: {0}",this.cellCliente);
            }
            public void VerSaldoActual()
            {
            Console.WriteLine("Saldo Actual: {0}",this.saldoActual);
            }
            public void Deposito(int cantidad)
            {
                  if(cantidad >0)
                        this.saldoActual+=cantidad;
                  else
                        Console.WriteLine("Error cantidad no valida..");
            }
            public void Retiro(int cantidad)
            {
                  if((this.saldoActual>=cantidad) && (cantidad>0))
                        this.saldoActual-=cantidad;
                  else
                      Console.WriteLine("Cantidad no disponible..");
            }
      }
}
