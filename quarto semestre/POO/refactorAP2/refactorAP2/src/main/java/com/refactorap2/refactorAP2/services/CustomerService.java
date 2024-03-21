package com.refactorap2.refactorAP2.services;

import com.refactorap2.refactorAP2.dtos.CustomerDTO;
import com.refactorap2.refactorAP2.exceptions.NoCustomersFoundException;
import com.refactorap2.refactorAP2.repositories.CustomerRepository;
import jakarta.persistence.EntityManager;
import jakarta.transaction.Transactional;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import java.util.ArrayList;
import java.util.List;
import java.util.Optional;


import com.refactorap2.refactorAP2.entities.Customer;

@Service
public class CustomerService {

    private ArrayList<CustomerDTO> changeToCustomerDtoList(List<Customer> customers){
        ArrayList<CustomerDTO> customerDtosList = new ArrayList<>();
        for(Customer customer : customers){
            customerDtosList.add(customer.toCustomerDTO());
        }
        return customerDtosList;
    }
    EntityManager entityManager;
    CustomerRepository repository;
    @Autowired
    public CustomerService(CustomerRepository repository, EntityManager entityManager){
        this.repository = repository;
        this.entityManager = entityManager;
    }


    public List<CustomerDTO> getAllCustomers(Integer age) {
        if(age == null){
            List<Customer> customerList = (List<Customer>) this.repository.findAll();
            ArrayList<CustomerDTO> list =  this.changeToCustomerDtoList(customerList);
            if(customerList.isEmpty()){
                throw new NoCustomersFoundException();
            }
            return list;
        }else{
            return getCustomerByAge(age);
        }
    }

    public List<CustomerDTO> getCustomerByAge(int age){
       List<Customer> filteredCustomers = new ArrayList<>();
       List<CustomerDTO> list = getAllCustomers(null);

        for(CustomerDTO customer : list){
            if(customer.getAge() == age){
                filteredCustomers.add(customer.toCustomer());
            }
        }
        return this.changeToCustomerDtoList(filteredCustomers);
    }
    public CustomerDTO addCustomer(CustomerDTO customerDTO){
        Customer customerSave = this.repository.save(customerDTO.toCustomer());
        return customerDTO;
    }

    public CustomerDTO getCustomerById(Long id){
        Optional<Customer> customer = this.repository.findById(id);
        if(customer.isPresent()){
            return customer.get().toCustomerDTO();
        }else{
            throw new NoCustomersFoundException();
        }
    }
    @Transactional
    public CustomerDTO updateCustomer(Long id, Customer customer){
        Customer customerToUpdate = entityManager.find(Customer.class, id);
        if(customerToUpdate == null){
            throw new NoCustomersFoundException();
        }
        customerToUpdate.setAge(customer.getAge());
        customerToUpdate.setName(customer.getName());
        customerToUpdate.setProfession(customer.getProfession());
        entityManager.merge(customerToUpdate);

        return customerToUpdate.toCustomerDTO();
    }

    public CustomerDTO deleteCustomerById(Long id){

        Customer customerToDelete = getCustomerById(id).toCustomer();
        if(customerToDelete != null){
            this.repository.deleteById(id);
        }
        return customerToDelete.toCustomerDTO();
    }
}
