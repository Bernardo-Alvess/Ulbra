package com.ulbra.iniciobanco.controller;

import com.ulbra.iniciobanco.dtos.ClienteDTO;
import com.ulbra.iniciobanco.entities.Cliente;
import com.ulbra.iniciobanco.services.ClienteService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("/clientes")
public class ClienteController {
    ClienteService service;
    @Autowired
    public ClienteController(ClienteService service){
        this.service = service;
    }
    @PostMapping
    public ClienteDTO createCliente(@RequestBody ClienteDTO bodyRequest){
        return this.service.createCliente(bodyRequest);
    }
}
