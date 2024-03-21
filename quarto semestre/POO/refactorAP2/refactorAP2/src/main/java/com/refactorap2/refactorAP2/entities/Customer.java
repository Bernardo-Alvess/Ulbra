package com.refactorap2.refactorAP2.entities;
import com.refactorap2.refactorAP2.dtos.CustomerDTO;
import jakarta.persistence.*;

@Entity
@Table(name = "Customers")
public class Customer{
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO)
    private Long id;

    public Customer(){}
    public Customer(String name, int age, String profession) {
        this.name = name;
        this.age = age;
        this.profession = profession;
    }

    public CustomerDTO toCustomerDTO(){
        return new CustomerDTO(this.name, this.age, this.profession);
    }
    public Long getId() {
        return id;
    }

    public void setId(Long id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getProfession() {
        return profession;
    }

    public void setProfession(String profession) {
        this.profession = profession;
    }

    private String name;
    private int age;
    private String profession;
}
