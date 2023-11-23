package com.ulbra.iniciobanco.services;
import com.ulbra.iniciobanco.dtos.ClienteDTO;
import com.ulbra.iniciobanco.entities.Cliente;
import com.ulbra.iniciobanco.repositories.ClienteRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
@Service
public class ClienteService {
    ClienteRepository repository;
    @Autowired
    public ClienteService(ClienteRepository repository){
        this.repository = repository;
    }
    public ClienteDTO createCliente(ClienteDTO cliente){
        Cliente clienteDtoToCliente = new Cliente(cliente.getName(), cliente.getIdade());
        Cliente resultadoSave = this.repository.save(clienteDtoToCliente);
        return new ClienteDTO(resultadoSave.getName(), resultadoSave.getIdade());
    }
}
