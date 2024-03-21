package com.refactorap2.refactorAP2.dtos;
import com.refactorap2.refactorAP2.entities.Customer;

public class CustomerDTO {
    private String name;
    private int age;
    private String profession;
    public CustomerDTO(String name, int age, String profession) {
        this.name = name;
        this.age = age;
        this.profession = profession;
    }

    public Customer toCustomer(){
        return new Customer(this.name, this.age, this.profession);
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

}
