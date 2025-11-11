class Cliente:
    def __init__(self, nomeDoCliente, idadeCliente, saldoCliente):
        self.nomeDoCliente = nomeDoCliente
        self.idadeCliente = idadeCliente
        self.saldoCliente = saldoCliente
    
    def mostrarInformacoes(self):
        print(f"Cliente: {self.nomeDoCliente}, Idade: {self.idadeCliente}, Saldo: {self.saldoCliente}")
    
    def atualizarSaldo(self, valor):
        self.saldoCliente += valor

cliente_um = Cliente("Fernanda Lara", 20, 1000)
cliente_um.mostrarInformacoes()
cliente_um.atualizarSaldo(900)
cliente_um.mostrarInformacoes()

cliente_dois = Cliente("Raul Seixas", 44, 6000)
cliente_dois.mostrarInformacoes()
cliente_dois.atualizarSaldo(-1220)
cliente_dois.mostrarInformacoes()

cliente_tres = Cliente("Freddie Mercury", 45, 15000)
cliente_tres.mostrarInformacoes()
cliente_tres.atualizarSaldo(751)
cliente_tres.mostrarInformacoes()

cliente_quatro = Cliente("Nina", 29, 2)
cliente_quatro.mostrarInformacoes()
cliente_quatro.atualizarSaldo(-13000)
cliente_quatro.mostrarInformacoes()
