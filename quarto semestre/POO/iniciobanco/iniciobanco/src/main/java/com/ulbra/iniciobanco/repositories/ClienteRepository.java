package com.ulbra.iniciobanco.repositories;

import org.springframework.data.repository.CrudRepository;
import com.ulbra.iniciobanco.entities.Cliente;
public interface ClienteRepository extends CrudRepository<Cliente, Long> { }
